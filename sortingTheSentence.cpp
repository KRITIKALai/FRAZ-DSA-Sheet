class Solution {
public:
    string sortSentence(string s) {
        stringstream words(s);
        vector<pair<int, string>> sentence;
        pair<int, string> word;
        string w, ret;
        while(words >> w){
            word.first = stoi(w.substr(w.size()-1,1));
            word.second = w.substr(0,w.size()-1);
            sentence.push_back(word);
        }
        sort(sentence.begin(), sentence.end());
        for(pair<int, string> sent: sentence){
            ret+=(sent.second+" ");
        }
        return ret.substr(0,ret.size()-1);
    }
};
