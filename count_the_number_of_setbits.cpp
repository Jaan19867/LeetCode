#include<iostream>
#include<vector>
using namespace std;
    vector<int> countBits(int n) {
        vector<int> a;
        for(int i=0;i<=n;i++){
// mistake is that we are performing mathematics at i which led to change in value of i and it run for infinate;
            int count=0;
            int temp=i;
            while(temp>0){

                if((temp&1)==1){

                    count++;
                    temp=temp>>1;
                }
                else{
                    temp=temp>>1;
                }
            }
                a.push_back(count);

        }
        return a;
        
    }

int main(){




    int n;
    cin>>n;
   vector<int> array=countBits(n);
   for(int i=0;i<array.size();i++){
cout<<array[i]<<" ";

   }
}