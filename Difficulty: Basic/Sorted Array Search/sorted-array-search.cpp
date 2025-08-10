class Solution {
  public:
    bool searchInSorted(vector<int>& arr, int k) {
        // code here
        int low=0;
        int n=arr.size();
        
        int high=n-1;
        while(high>=low){
             int mid=low+ (high-low)/2;
             if(arr[mid]==k){
                 return true;
            
              }
             if(arr[mid]<k){
                 low=mid+1;
                 
             }
             else{
                 high=mid-1;
                 
             }
         
         }
    return false;
    
    }
};