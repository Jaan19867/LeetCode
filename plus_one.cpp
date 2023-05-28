#include<iostream>
using namespace std;
#include<vector>


 vector<int> plusOne(vector<int>& digits) {

    vector<int> v;
    v=digits;
    int n=digits.size();
    if(digits[n-1]!=9){
        v[n-1]=digits[n-1]+1;
        return v;

    }
    for(int i=n-1;i>=0;i--){

        if(digits[i]==9){ continue;}
        else{  v[i]=digits[i]+1;
        for(int j=i+1;j<n;j++){
            v[j]=0;
        }
        }
        return v;

    }
vector<int> j;
    for(int i=0;i<=n;i++){

        if(i==0){ j.push_back(1);
        }
        else{  j.push_back(0);}
    }
    return j;



 }
 int print_vector(vector<int> n){

    for(int i=0;i<n.size();i++){

        cout<<n[i]<<" ";
    }
 }


 int main(){

vector<int> digits;
int N;
cin>>N;
for(int i=0;i<N;i++){

    int x;
    cin>>x;
    digits.push_back(x);
}
print_vector(digits);

cout<<endl;
print_vector(plusOne(digits));
 }