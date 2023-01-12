#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minimizeSum(int N, vector<int> arr) {
        // code here
        int sum=0;
        if(N<=1) return 0;
        else{
            sum=arr[0]+arr[1];
            arr.erase(arr.begin(),arr.begin()+2);
            arr.insert(arr.begin(),sum);
            // arr.resize(N-1);
            sort(arr.begin(),arr.end());
            return sum+minimizeSum(arr.size(),arr);
        }
        
    }
    
};

int main(){
        int t;
        cin>>t;
        while(t--){
          int n;
          cin>>n;
          vector<int> arr(n);
          for(int i=1;i<=n;i++)
            cin>>arr[i];
            Solution ob;
          cout<<ob.minimzeSum(n,arr)<<" ";
        }
        return 0;
}
