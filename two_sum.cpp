#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v;
    for(int i=0;i<nums.size();i++){

for(int j=0;j<nums.size();j++){

    if(j==i){  continue;}
    else if( (nums[i]+nums[j])==target){

        v.push_back(i);
        v.push_back(j);
        return v;

    }
}

    }
        


    }



int main(){

    vector<int> nums;
    int n;
    cin>>n;


    for(int i=0;i<n;i++){
        int x;
cin>>x;
nums.push_back(x);}

for(int i=0;i<n;i++){
cout<<nums[i]<<" ";

}
int target;
cin>>target;

    
vector<int> print_the_two_integer=twoSum(nums,target);
for(int i=0;i<print_the_two_integer.size();i++){

    cout<<print_the_two_integer[i]<<" ";
}




}