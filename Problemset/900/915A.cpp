#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
	vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    
    sort(arr.begin(),arr.end());

    for(int j=n-1;j>=0;j--){
        if(k%arr[j]==0){
             cout<<k/arr[j];
             break;
        }
    }
	return 0;
}