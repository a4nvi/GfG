class Solution {
  public:
    int peakElement(vector<int> &arr) {
        // code here
        int n=arr.size();
        bool flag=false;
        if(n==1){
            flag=true;
            return 0;
        }
        if(arr[0]>arr[1]){
                flag=true;
                return 0;
                
            }
        if(arr[n-1]>arr[n-2]){
                flag=true;
                return n-1;
        }
                
        for(int i=1;i<n-1;i++){
            
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                flag=true;
                  return i;
                
                
            }
        }
        if(flag==true){
            cout<<"true";
            
        }
        else{
            cout<<"false";
            
        }

    }
};
