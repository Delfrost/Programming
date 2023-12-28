#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int arr1[]={};
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        cin>>arr1[i];
    }
    for(int j=0;j<=n;j++){
        cout<<arr1[j];
    }
      
    return 0;
}
