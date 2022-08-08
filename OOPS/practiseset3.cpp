#include<iostream>
#include<iomanip> 
using namespace std;
 
int main()
{
    int n,qty[100],tot_qty=0;
	float sale_price[100],total_sale=0;//variables declaration
	float avg;//variables declaration
    cout<<"Enter the number of items: ";//printing the statement
    cin>>n;//reading the input n
    if(n<=100)//If condition to check number of pairs to be less than 100
    {
    	for(int i=0;i<n;i++)//loops until the pairs of n value
    	{
		
    		cout<<"Enter sale price and quantity of item "<<i+1<<": ";
			cin>>sale_price[i]>>qty[i];//reading the input for sale price and quantity 
			if(sale_price[i]>=0 && sale_price[i]<=1000 && qty[i]>=0 && qty[i]<=1000)//using the logical AND operator to check for condition to meet all true
			{
				total_sale+=(sale_price[i]*qty[i]);//summing up the total 
				tot_qty+=qty[i];
			}
			else
			cout<<"Values should be between 0 and 1000\n";
		}
		cout<<"Total sales amount is: "<<total_sale;
		avg=static_cast<float>(tot_qty)/static_cast<float>(n);//typecsated to float and storing the average value
		
		cout<<"\nAverage sale quantity is: "<<fixed<<setprecision(1)<<avg;
	}
	else
	cout<<"Number of items should be less than 1000";
    return 0;
}