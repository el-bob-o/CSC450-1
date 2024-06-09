/*
*module7.cpp
* Created by:bob
*Jun 9, 2024
*/
#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <condition_variable>

std::mutex mutex1, mutex2;            //Mutexes to protect shared resources
std::condition_variable cv;           //Condition variable for synchronization
bool fin = false;                     //Flag to indicate the completion of countUp

void countUp() {
    std::lock(mutex1, mutex2);        //Lock mutex1 and mutex2 to ensure proper synchronization
    std::lock_guard<std::mutex> lock2(mutex2, std::adopt_lock); //Adopt the lock for mutex2
    for (int i = 1; i < 21; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << i << " ";        //Print the current count
    }
    std::cout << std::endl << "Count up complete." << std::endl;

    {
        std::lock_guard<std::mutex> lock1(mutex1, std::adopt_lock); //Adopt the lock for mutex1
        fin = true;                     //Set the flag to true indicating countUp is complete
    }
    cv.notify_one();                    //Notify the waiting thread
}

void countDown() {
    std::unique_lock<std::mutex> lock(mutex1); //Lock mutex1 for the current scope
    cv.wait(lock, []{ return fin; });  //Wait until countUp is complete

    std::lock_guard<std::mutex> lock2(mutex2, std::adopt_lock); //Adopt the lock for mutex2
    for (int i = 20; i > 0; --i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << i << " ";        //Print the current count
    }
    std::cout << std::endl << "Count down complete." << std::endl;
}

int main() {
    std::thread t1(countUp);          //Create thread t1 to run countUp
    std::thread t2(countDown);        //Create thread t2 to run countDown

    t1.join();                        //Wait for thread t1 to finish
    t2.join();                        //Wait for thread t2 to finish

    return 0;                         //Return 0 to indicate successful completion
}
