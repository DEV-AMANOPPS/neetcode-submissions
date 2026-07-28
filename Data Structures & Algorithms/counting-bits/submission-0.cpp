class Solution {
public:

  int bits(int n ){
   
   int count =0;
   while(n>0){

    count=count +(n & 1) ; // set bit count kar dega 

    n>>=1;

   }


return count;

  }
    vector<int> countBits(int n) {
         vector<int> arr;
        for(int i =0;i<=n;i++){
          arr.push_back( bits(i));
        }
        return arr;
    }
};
