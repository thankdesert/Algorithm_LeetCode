//from : https://leetcode.com/problems/reformat-date/


class Solution {
public:
    string reformatDate(string date) {
        string answer="";
        string year,month,day;
        year.push_back(date[date.size()-4]);
        year.push_back(date[date.size()-3]);
        year.push_back(date[date.size()-2]);
        year.push_back(date[date.size()-1]);
        
        int i;
        for(i=0;date.size()>i;){
            if('9'<date[i]||'0'>date[i])
                break;
            day.push_back(date[i++]);
        }
        if(1==day.size()){
            day.push_back(day[0]);
            day[0]='0';
        }
        while(' '!=date[i++]);
        month.push_back(date[i]);
        month.push_back(date[i+1]);
        month.push_back(date[i+2]);
        
        if("Jan"==month)
            month="01";
        else if("Feb"==month)
            month="02";
        else if("Mar"==month)
            month="03";
        else if("Apr"==month)
            month="04";
        else if("May"==month)
            month="05";
        else if("Jun"==month)
            month="06";
        else if("Jul"==month)
            month="07";
        else if("Aug"==month)
            month="08";
        else if("Sep"==month)
            month="09";
        else if("Oct"==month)
            month="10";
        else if("Nov"==month)
            month="11";
        else if("Dec"==month)
            month="12";
        
        answer=year+'-'+month+'-'+day;
        
        return answer;
    }
};
