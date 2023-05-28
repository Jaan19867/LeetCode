#include<iostream>
#include<vector>
using namespace std;
// this is my comment


    int countSeniors(vector<string>& details) {
        int count=0;
        
        for(int i=0;i<details.size();i++){
            
        int age;
        int first_number_of_age=details[i][0]-'0';
        int second_number_of_age=details[i][1]-'0';
        age=(first_number_of_age*10)+second_number_of_age;
            if(age>60){  count=count+1;}
            else{ continue;}
            
        
            
            
            
        }
        return count;
        
    }


int main(){
    vector<string> details = {"1313579440F2036","2921522980M5644"};
    int count=countSeniors(details);
    cout<<count<<endl;

}