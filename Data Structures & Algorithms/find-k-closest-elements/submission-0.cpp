class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
      int left=0;
      int right=arr.size()-k; // kyu ki humme itne size ki array ki window chaiye 

      while(left<right){
          int mid=left+(right-left)/2;

          if(x-arr[mid]>arr[mid+k]-x){
            left=mid+1;

          }
          else{
            right=mid;
          }

      }
      return vector<int>(arr.begin()+left,arr.begin()+left+k);

    }
};