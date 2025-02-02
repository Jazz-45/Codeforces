#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> arr(t);
    for(int i=0;i<t;i++) cin>>arr[i];

    vector<int> freq(3,0);
    for(int i=0;i<t;i++){
        if(arr[i]==1) freq[0]++;
        else if(arr[i]==2) freq[1]++;
        else freq[2]++;
    }
    cout<<t-(max({freq[0],freq[1],freq[2]}))<<endl;
    return 0;
}
