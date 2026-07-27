class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freqs1(26,0);
        int n = s1.size();
        int m = s2.size();
    for(int i=0;i<n;i++){
        freqs1[s1[i]-'a']++;
    }
    //window banaoo ussme s2 ki freq nikalo har character ki 
    vector<int>window(26,0);
    int i=0;

    for(int j=0;j<m;j++){
        window[s2[j]-'a']++;
        if(j-i+1>n){
            window[s2[i]-'a']--;
            i++;
        }
        if(j-i+1==n){
            if(window==freqs1)return true;
        }
    }
return false;
    }
};
