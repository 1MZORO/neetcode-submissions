class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map <char,int> mapOne;
        unordered_map <char,int> mapTwo;

        if(s.size() != t.size()){
            return false;
        }

        int i = 0;
        while(i < s.size()){
            mapOne[s[i]]++;      
            mapTwo[t[i]]++;               
                i++;
        }

        return mapOne == mapTwo;
    }
};
