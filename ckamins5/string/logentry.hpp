#ifndef CS_LOGENTRY_H_
#define CS_LOGENTRY_H_

////////////////////////////////////////////////////////////
//
// File:        logentry.hpp 
//       
// Version:     1.0
// Date:        
// Author:   
//
// Description: Class definition for a log entry.
//
// 
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 

////////////////////////////////////////////////////////////
class Date {
public:
	Date();
	Date(String d, String m, int y) : day(d), month(m), year(y) {};
	void setDay(String d) { day = d; };
	void setMonth(String m) { month = m; };
	void setYear(int y) { year = y; };

	String getDay() const { return day; };
	String getMonth() const { return month; };
	int getYear() const { return year; };
private:
	String  day, month;
	int     year;
};

////////////////////////////////////////////////////////////
class Time {
public:
	Time();
	Time(int h, int m, int s) : hour(h), minute(m), second(s) {};
	void setHour(int h) { hour = h; };
	void setMinute(int m) { minute = m; };
	void setSecond(int s) { second = s; };

	int getHour() const { return hour; };
	int getMinute() const { return minute; };
	int getSecond() const { return second; };
private:
	int     hour, minute, second;
};


////////////////////////////////////////////////////////////
class LogEntry {
public:
	LogEntry() { number_of_bytes = 0; };
	LogEntry(String);
	friend  std::ostream& operator<<(std::ostream&, const LogEntry&);
	void setHost(String h) {  host=h; };
	void setDate(Date d) {  date=d; };
	void setTime(Time t) {  time=t; };
	void setRequest(String r) {  request=r; };
	void setStatus(String s) {  status=s; };
	void setBytes(int b) { number_of_bytes = b; };

	String getHost() const { return host; };
	Date getDate() const { return date; };
	Time getTime() const { return time; };
	String getRequest() const { return request; };
	String getStatus() const { return status; };
	int getBytes() const { return number_of_bytes; };
private:
	String  host;
	Date    date;
	Time    time;
	String  request;
	String  status;
	int     number_of_bytes;
};


////////////////////////////////////////////////////////////
//
// Free functions
//

std::vector<LogEntry>   parse(std::istream&);
void                    output_all(std::ostream&, const std::vector<LogEntry>&);
void                    by_host(std::ostream&, const std::vector<LogEntry>&);
int                     byte_count(const std::vector<LogEntry>&);

#endif

