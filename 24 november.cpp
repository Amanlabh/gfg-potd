#include<bits/stdc++.h>
using namespace std;
int inver(int arr[],int n){
     int count = 0;
      for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j])
             count++;
        }
      }
     return count;
}
int main(){
    int n;
    cin>>n;

   int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<inver(arr,n)<<endl;
     return 0;
}
