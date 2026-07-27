class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string temp="";
        int n = word1.size();
        int m = word2.size();
int i=0;
int j=0;
while(i<n && j<m){


    temp+=word1[i];
    temp+=word2[j];
    i++;
    j++;
}
while(i<n){temp+=word1[i];i++;}
while(j<m){temp+=word2[j];j++;}

return temp;
        
    }
};