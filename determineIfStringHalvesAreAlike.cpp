//Method #1
class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1 = s.substr(0,s.length()/2);
        string s2 = s.substr((s.length()/2));
        string vowels = "aeiouAEIOU";
        
        int count1=0,count2=0;
        
        for(char s: s1){
            if(vowels.find(s) != string::npos) count1++;
        }
        for(char s: s2){
            if(vowels.find(s) != string::npos) count2++;
        }
        
        return count1==count2;
    }
};

//Method #2

class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1 = s.substr(0,s.length()/2);
        string s2 = s.substr((s.length()/2));
        string vowels = "aeiouAEIOU";
        
        int count1=0,count2=0;
        
        for(char s: s1){
            if(~vowels.find(s)) count1++;
        }
        for(char s: s2){
            if(~vowels.find(s)) count2++;
        }
        
        return count1==count2;
    }
};
