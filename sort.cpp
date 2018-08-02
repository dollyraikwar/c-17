#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n,sum,pair=0;
cout<<"enter the no of elements in array";
cin>>n;
vector<int>a(n);
cout<<"enter the sum";
cin>>sum;
cout<<"enter the elements in array";
for(int i=0;i<a.size();i++)
{
cin>>a;
	
}
for(int i=0;i<n;i++)
{
	for(int j=i+1;i<n;j++)
	{
		
		
	   if(a[i]+a[j]==sum)
    	
	 	pair++;
	    
	    
	}
}
	 
cout<<pair;
return 0;
}
