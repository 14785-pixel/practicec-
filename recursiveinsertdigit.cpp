#include <iostream>
#include<vector>
using namespace std;
int insert(int x,int n){
    if((n/10)==0&&x<n)
        return x*10+n;
        
    
   if(n%10<=x)
    return n*10+x;
    return insert(x,n/10)*10+n%10;
}

int main()
{
  
   cout <<insert(8,27698)<< endl; 
   
   return 0;
}
