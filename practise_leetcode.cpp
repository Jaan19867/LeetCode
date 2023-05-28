#include<iostream>
using namespace std;
int main(){

int arr[]={2,90,2,5,6,5,7,7,6};
int  result=0;
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
result=arr[i]^result;

}
cout<<result;






}