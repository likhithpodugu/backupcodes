#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
 int n,q[100],a=0;             
 float s[100],sst=0;    
 float avg;                             
 cout<<"Enter the number of items: ";
 cin>>n;
 if(n<=100)
 {
 for(int j=0;j<n;j++)
 {
 
 cout<<"Enter sale price and quantity of item "<<j+1<<": ";
 cin>>s[j]>>q[j];
 if(s[j]>=0 && s[j]<=1000 && q[j]>=0 && q[j]<=1000)
 {
 sst+=(s[j]*q[j]); 
 a+=q[j];
 }
 else
 cout<<"Values should be between 0 and 1000";
 }
 cout<<"Total sales amount is: "<<sst<<endl;
 
 avg=(float)a/(float)n;
 cout<<"average sales quantity is: "<<round(avg)<<endl;
 }
 else
 cout<<"Number of variety of items should be less than 100";
 return 0;
}