//This code inserts a digit in ascending order in a number that is ascending
#include <iostream>
using namespace std;
int insert(int x,int n){
    if(n==0)
    return x;
        
    
   if(n%10<=x)
    return n*10+x;
    return insert(x,n/10)*10+n%10;
}

int main()
{
  
   cout <<insert(1,2769)<< endl; 
   
   return 0;
}
