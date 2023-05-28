#include<iostream>
#include<vector>
using namespace std;
    int missingNumber(vector<int>& nums) {

        int main_Xor=0;
        int arr_xor=0;
        int size_of_arr=nums.size();
        for(int i=0;i<size_of_arr;i++){

            arr_xor=arr_xor^nums[i];
        };
          for(int i=0;i<=size_of_arr;i++){
        

            main_Xor=main_Xor^i;
        }
        return main_Xor^arr_xor;
        
    }
int main(){

vector<int> v;
v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
v.push_back(6);
cout<<missingNumber(v);

}