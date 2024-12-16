#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        vector<int> freq(n+1);
        unordered_set<int> s;
        for(int i=0;i<n;i++){
             cin>>arr[i];
             freq[arr[i]]++;
             s.insert(arr[i]);
        }

        vector<int> brr(n,-1);

        brr[0]=arr[0];
        for(int i=1;i<n;i++){
            
        }

    }
    return 0;
}