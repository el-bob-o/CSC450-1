#include "header.h"


void ZipFunc(string* pZip) {
	string st, state, nZip;
	nZip = *pZip;
	int numZip = stoi(*pZip);
	
	if (nZip.length() != 5) {
		cout << "State not found";
		return;
	}

	if (numZip >= 35000 && numZip <= 36999) {
      st = "AL";
      state = "Alabama";
  } else if (numZip >= 99500 && numZip <= 99999) {
      st = "AK";
      state = "Alaska";
  } else if (numZip >= 85000 && numZip <= 86999) {
      st = "AZ";
      state = "Arizona";
  } else if (numZip >= 71600 && numZip <= 72999) {
      st = "AR";
      state = "Arkansas";
  } else if (numZip >= 90000 && numZip <= 96699) {
      st = "CA";
      state = "California";
  } else if (numZip >= 80000 && numZip <= 81999) {
      st = "CO";
      state = "Colorado";
  } else if ((numZip >= 6000 && numZip <= 6389) || (numZip >= 6391 && numZip <= 6999)) {
      st = "CT";
      state = "Connecticut";
  } else if (numZip >= 19700 && numZip <= 19999) {
      st = "DE";
      state = "Delaware";
  } else if (numZip >= 32000 && numZip <= 34999) {
      st = "FL";
      state = "Florida";
  } else if ( (numZip >= 30000 && numZip <= 31999) || (numZip >= 39800 && numZip <= 39999) ) {
      st = "GA";
      state = "Georgia";
  } else if (numZip >= 96700 && numZip <= 96999) {
      st = "HI";
      state = "Hawaii";
  } else if (numZip >= 83200 && numZip <= 83999 && numZip != 83414) {
      st = "ID";
      state = "Idaho";
  } else if (numZip >= 60000 && numZip <= 62999) {
      st = "IL";
      state = "Illinois";
  } else if (numZip >= 46000 && numZip <= 47999) {
      st = "IN";
      state = "Indiana";
  } else if (numZip >= 50000 && numZip <= 52999) {
      st = "IA";
      state = "Iowa";
  } else if (numZip >= 66000 && numZip <= 67999) {
      st = "KS";
      state = "Kansas";
  } else if (numZip >= 40000 && numZip <= 42999) {
      st = "KY";
      state = "Kentucky";
  } else if (numZip >= 70000 && numZip <= 71599) {
      st = "LA";
      state = "Louisiana";
  } else if (numZip >= 3900 && numZip <= 4999) {
      st = "ME";
      state = "Maine";
  } else if (numZip >= 20600 && numZip <= 21999) {
      st = "MD";
      state = "Maryland";
  } else if ( (numZip >= 1000 && numZip <= 2799) || (numZip == 5501) || (numZip == 5544 ) ) {
      st = "MA";
      state = "Massachusetts";
  } else if (numZip >= 48000 && numZip <= 49999) {
      st = "MI";
      state = "Michigan";
  } else if (numZip >= 55000 && numZip <= 56899) {
      st = "MN";
      state = "Minnesota";
  } else if (numZip >= 38600 && numZip <= 39999) {
      st = "MS";
      state = "Mississippi";
  } else if (numZip >= 63000 && numZip <= 65999) {
      st = "MO";
      state = "Missouri";
  } else if (numZip >= 59000 && numZip <= 59999) {
      st = "MT";
      state = "Montana";
  } else if (numZip >= 27000 && numZip <= 28999) {
      st = "NC";
      state = "North Carolina";
  } else if (numZip >= 58000 && numZip <= 58999) {
      st = "ND";
      state = "North Dakota";
  } else if (numZip >= 68000 && numZip <= 69999) {
      st = "NE";
      state = "Nebraska";
  } else if (numZip >= 88900 && numZip <= 89999) {
      st = "NV";
      state = "Nevada";
  } else if (numZip >= 3000 && numZip <= 3899) {
      st = "NH";
      state = "New Hampshire";
  } else if (numZip >= 7000 && numZip <= 8999) {
      st = "NJ";
      state = "New Jersey";
  } else if (numZip >= 87000 && numZip <= 88499) {
      st = "NM";
      state = "New Mexico";
  } else if ( (numZip >= 10000 && numZip <= 14999) || (numZip == 6390) || (numZip == 501) || (numZip == 544) ) {
      st = "NY";
      state = "New York";
  } else if (numZip >= 43000 && numZip <= 45999) {
      st = "OH";
      state = "Ohio";
  } else if ((numZip >= 73000 && numZip <= 73199) || (numZip >= 73400 && numZip <= 74999) ) {
      st = "OK";
      state = "Oklahoma";
  } else if (numZip >= 97000 && numZip <= 97999) {
      st = "OR";
      state = "Oregon";
  } else if (numZip >= 15000 && numZip <= 19699) {
      st = "PA";
      state = "Pennsylvania";
  } else if (numZip >= 300 && numZip <= 999) {
      st = "PR";
      state = "Puerto Rico";
  } else if (numZip >= 2800 && numZip <= 2999) {
      st = "RI";
      state = "Rhode Island";
  } else if (numZip >= 29000 && numZip <= 29999) {
      st = "SC";
      state = "South Carolina";
  } else if (numZip >= 57000 && numZip <= 57999) {
      st = "SD";
      state = "South Dakota";
  } else if (numZip >= 37000 && numZip <= 38599) {
      st = "TN";
      state = "Tennessee";
  } else if ( (numZip >= 75000 && numZip <= 79999) || (numZip >= 73301 && numZip <= 73399) ||  (numZip >= 88500 && numZip <= 88599) ) {
      st = "TX";
      state = "Texas";
  } else if (numZip >= 84000 && numZip <= 84999) {
      st = "UT";
      state = "Utah";
  } else if (numZip >= 5000 && numZip <= 5999) {
      st = "VT";
      state = "Vermont";
  } else if ( (numZip >= 20100 && numZip <= 20199) || (numZip >= 22000 && numZip <= 24699) || (numZip == 20598) ) {
      st = "VA";
      state = "Virginia";
  } else if ( (numZip >= 20000 && numZip <= 20099) || (numZip >= 20200 && numZip <= 20599) || (numZip >= 56900 && numZip <= 56999) ) {
      st = "DC";
      state = "Washington DC";
  } else if (numZip >= 98000 && numZip <= 99499) {
      st = "WA";
      state = "Washington";
  } else if (numZip >= 24700 && numZip <= 26999) {
      st = "WV";
      state = "West Virginia";
  } else if (numZip >= 53000 && numZip <= 54999) {
      st = "WI";
      state = "Wisconsin";
  } else if ( (numZip >= 82000 && numZip <= 83199) || numZip == 83414 ) {
      st = "WY";
      state = "Wyoming";
  } else {
      st = "State not found";
      state = "State not found";
  }
	cout << st;
	}
