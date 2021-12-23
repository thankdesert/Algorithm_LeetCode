//from : https://leetcode.com/problems/goat-latin/



class Solution {
public:
    string toGoatLatin(string sentence) {
        unordered_map<char,int> um;
        um['a']=1,um['e']=1,um['i']=1,um['o']=1,um['u']=1;
        um['A']=1,um['E']=1,um['I']=1,um['O']=1,um['U']=1;
        sentence.push_back(' ');
        string answer="";
        string add_a="a";
        for(int i=0;sentence.size()>i;++i){
            string line="";
            while(' '!=sentence[i])
                line.push_back(sentence[i++]);
            if(0==line.size())
                break;
            if(um.end()==um.find(line[0])){
                line+=line[0];
                line=line.substr(1,line.size()-1);
            }
            answer+=line+"ma"+add_a+' ';
            add_a+='a';
        }
        answer.pop_back();
        
        return answer;
    }
};
