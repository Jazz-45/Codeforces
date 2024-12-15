#include<iostream>
#include<vector>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int> entry(n);
    vector<int> exit(n);

    for(int i=0;i<n;i++){
        cin>>exit[i]>>entry[i];
    }

    int minCapacity=0; // Final result
    int capacity=0; // Initially 0

    for(int i=0;i<n;i++){
        capacity-=exit[i];
        capacity+=entry[i];
        minCapacity=max(minCapacity,capacity);
    }

    cout<<minCapacity<<endl;

    return 0;
}