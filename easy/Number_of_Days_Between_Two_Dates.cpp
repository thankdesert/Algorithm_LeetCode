//from : https://leetcode.com/problems/number-of-days-between-two-dates/



class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        int cur_year,cur_month,cur_date,prev_year,prev_month,prev_date;
        cur_year=stoi(date2.substr(0,4));
        cur_month=stoi(date2.substr(5,2));
        cur_date=stoi(date2.substr(8,4));
        prev_year=stoi(date1.substr(0,4));
        prev_month=stoi(date1.substr(5,2));
        prev_date=stoi(date1.substr(8,4));
        
        time_t start, end;
        struct tm cur_stime;
        struct tm prev_stime;
        
        cur_stime.tm_year = cur_year - 1900;
        cur_stime.tm_mon = cur_month - 1;
        cur_stime.tm_mday = cur_date;
        cur_stime.tm_hour = 0;
        cur_stime.tm_min = 0;
        cur_stime.tm_sec = 0;
        cur_stime.tm_isdst = 0;
        prev_stime.tm_year = prev_year - 1900;
        prev_stime.tm_mon = prev_month - 1;
        prev_stime.tm_mday = prev_date;
        prev_stime.tm_hour = 0;
        prev_stime.tm_min = 0;
        prev_stime.tm_sec = 0;
        prev_stime.tm_isdst = 0;
        
        start = mktime(&prev_stime);
        end = mktime(&cur_stime);
        double diff=difftime(end,start)/(60*60*24);
        return diff<0?diff*(-1):diff;
    }
};
