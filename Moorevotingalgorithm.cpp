#include <iostream>
#include<vector>
using namespace std;
vector<int> moore(vector<int> arr){
    vector <int> result;
    int cand,num=0,count;
    cand=arr[0];
    count=1;
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i]!=cand){
            count--;
        }
        if(count==0){
            cand=arr[i];
            count++;
        }
        if(cand==arr[i])
        count++;
    }
    for(int x:arr){
        if(x==cand)
        num++;
    }
    if(num>arr.size()/2){
        result.push_back(cand);
        result.push_back(num);
    }
    
    return result;
}
int main()
{
   
 vector<int> arr{4,4,5,6,5,5,6,6,7,7,7,7,7};
 vector <int> result=moore(arr);
 if(!result.empty()){
     cout<<"The majority element is:"<<result[0]<<endl;
     cout<<"The number of times it occurs is: "<<result[1]<<endl;
     cout<<"The total no of elements is:"<<arr.size()<<endl;
 }
 else{
     cout<<"There is no majority element"<<endl;
 }
   return 0;
}
