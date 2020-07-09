#include <iostream>
#include<stack>
#include<vector>
using namespace std;
void sort(stack<int> &s){
    stack<int> s2;
    while(!s.empty()){
        s2.push(s.top());
        s.pop();
    }
    int temp =s2.top();
    while(!s2.empty()){
        if(s.empty()||(s.top()<temp)){
        s.push(temp);
        s2.pop();
        }
        else{
            s2.push(s.top());
            s.pop();
            continue;
        }
        temp = s2.top();
    }
}
int main()
{
    int a[]= {4,5,12,32,46,78,91};
    stack<int>s;
    vector<int> v(a,a+7);
    vector<int>::iterator p ;
    for(p = v.begin();p!=v.end();++p){
        s.push(*p);
    }
    sort(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

   cout << "Hello World" << endl;

   return 0;
}
