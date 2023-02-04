#include<iostream>

using namespace std;

int main()
{
	
	unsigned long long int x=1,temp;
	bool flag;
	
	cout<<" The prime numbers between 1 to 500 are:"<<endl;
	while(1)
	{
		unsigned long long int sum=0;
		temp=x;
		int y=1;
		while(y<temp)
		{	
			if ((temp%y)==0)
			{
				sum+=temp;
				y++;
			}
			else
				y++;
			
		}
		if (sum==x)
			cout<<sum<<endl;
		x++;
	}
}
