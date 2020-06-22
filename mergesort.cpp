#include <iostream>

using namespace std;
void merge(int a[],int l,int m,int h){
    int total=(h-l)+1;
    int n1=m-l+1;
    int n2=total-n1;
    int a1[n1],a2[n2];
    for(int i=0;i<n1;i++){
        a1[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        a2[i]=a[m+i+1];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<n1&&j<n2){
        if(a1[i]<=a2[j]){
            a[k]=a1[i];
            i++;
            
        }
        else{
            a[k]=a2[j];
            j++;
            
        }
         k++;
    }
   
    while(i<n1){
        a[k]=a1[i];
        k++;
        i++;
    }
    while(j<n2){
        a[k]=a2[j];
        k++;
        j++;
    }
}
void mergesort(int a[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,h);
        merge(a,l,mid,h);
    }
}
void display(int a[],int l,int h){
    for(int i=0;i<=(h-l);i++){
        cout<<a[i]<<" ";
}
cout<<endl;
}
int main()
{
   cout << "Hello World" << endl; 
   int a[]={8,9,13,21,45,6,78,54,66,12,11,11};
   int size= sizeof(a)/sizeof(int);
   mergesort(a,0,size-1);
   display(a,0,size-1);
   
   return 0;
}
