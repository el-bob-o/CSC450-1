import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;

public class module8 {
	private static final Lock lock = new ReentrantLock(); // Lock to protect shared resources
	private static final Condition condition = lock.newCondition(); // Condition variable for synchronization
	private static boolean fin = false; // Flag to indicate the completion of countUp

	public static void main(String[] args) throws InterruptedException {
		Thread t1 = new Thread(module8::countUp); // Create thread t1 to run countUp
		Thread t2 = new Thread(module8::countDown); // Create thread t2 to run countDown

		t1.start(); // Start thread t1
		t2.start(); // Start thread t2

		t1.join(); // Wait for thread t1 to finish
		t2.join(); // Wait for thread t2 to finish
	}

	private static void countUp() {
		try {
			for (int i = 1; i <= 20; i++) {
				Thread.sleep(100);
				System.out.print(i + " "); // Print the current count
			}
			System.out.println("\nCount up complete.");

			lock.lock(); // Acquire the lock
			try {
				fin = true; // Set the flag to true indicating countUp is complete
				condition.signal(); // Notify the waiting thread
			} finally {
				lock.unlock(); // Release the lock
			}
		} catch (InterruptedException e) {
			Thread.currentThread().interrupt(); // Restore the interrupted status
			System.out.println("Thread was interrupted."); // Indicate interruption
		}
	}

	private static void countDown() {
		try {
			lock.lock(); // Acquire the lock
			try {
				while (!fin) {
					condition.await(); // Wait until countUp is complete
				}
			} finally {
				lock.unlock(); // Release the lock
			}

			for (int i = 20; i >= 0; i--) {
				Thread.sleep(100);
				System.out.print(i + " "); // Print the current count
			}
			System.out.println("\nCount down complete.");
		} catch (InterruptedException e) {
			Thread.currentThread().interrupt(); // Restore the interrupted status
			System.out.println("Thread was interrupted."); // Indicate interruption
		}
	}

}
