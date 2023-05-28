#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){

for(int i=0;i<n;i++){

    int min=arr[i];int min_index=i;

for(int j=i+1;j<n;j++){

    if(arr[j]<arr[i]){
int temp= arr[i];
arr[i]=arr[j];
arr[j]=temp;


    }
    else{ continue;}
}

}

     


}


int main(){


int N;
cin>>N;
int arr[N];
for(int i=0;i<N;i++){

    
    cin>>arr[i];
}
selection_sort(arr,N);
for(int i=0;i<N;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;



}