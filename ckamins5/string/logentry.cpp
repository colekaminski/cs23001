//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
// 

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector> 

#include "string.hpp" 
#include "logentry.hpp"

Date::Date() {
	year = 0;
};


Time::Time() {
	hour = 0;
	minute = 0;
	second = 0;
};


std::ostream& operator<<(std::ostream& out, const LogEntry& entry) {
	out << entry.host << " - - [" << entry.date.getDay();
	out << "/" << entry.date.getMonth() << "/" << entry.date.getYear();
	out << ":" << entry.time.getHour() << ":" << entry.time.getMinute();
	out << ":" << entry.time.getSecond() << " -0400] " << entry.request;
	out << " " << entry.status << " ";
	if (entry.number_of_bytes == 0) {
		out << '-';
	}
	else {
		out << entry.number_of_bytes;
	}
	return out;
};







////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
LogEntry::LogEntry(String s) {
	// ...

	std::vector<String> data = s.split(' ');
	if (data.size() == 10) {
		host = data[0];
		std::vector<String> timeSplit = data[3].split(':');
		std::vector<String> dateSplit = timeSplit[0].split('/');
		date.setDay(dateSplit[0].substr(1, dateSplit[0].length() - 1));
		date.setMonth(dateSplit[1]);
		date.setYear(dateSplit[2].toInt());

		time.setHour(timeSplit[1].toInt());
		time.setMinute(timeSplit[2].toInt());
		time.setSecond(timeSplit[3].toInt());

		String req;
		req += data[5] += " ";
		req += data[6] += " ";
		req += data[7];

		request = req;
		status = data[8];
		if (data[9] == '-') {
			number_of_bytes = 0;
		}
		else {
			number_of_bytes = data[9].toInt();
		}


	}
	else {
		number_of_bytes = 0;
	}
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {
	std::vector<LogEntry> result;
	char* temp = new char[200];
	while (in.getline(temp, 200)) {
		String s = temp;
		//std::cout << s << std::endl;
		LogEntry entry(s);
		result.push_back(entry);
	}

	return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry>& entries) {
	for (size_t i = 0; i < entries.size(); ++i) {
		out << entries[i] << std::endl;
	}
};

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& entries) {
	for (size_t i = 0; i < entries.size(); ++i) {
		out << entries[i].getHost() << std::endl;
	}
};

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry>& entries) {
	int sum = 0;
	for (size_t i = 0; i < entries.size(); ++i) {
		sum += entries[i].getBytes();
	}
	return sum;
}


