class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

        string ans ="";
        string first= strs[0];
        string second= strs[strs.size()-1];

        for(int i =0;i<first.size();i++){
            if(first[i]== second[i]){
                ans+=first[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};