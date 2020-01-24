#include<iostream>
using namespace std;

int permutation(int n, int r)
{
	if (r==0)
	return 1;
	else
	{
		return (n*1.0)*permutation(n-1,r-1);
	}
}

int combination(int n, int r)
{
	if(r==0)
	return 1;
	else
	{
		return (n*1.0)*combination(n-1,r-1)/r;
	}
}

int main()
{
	try
	{
		int n=0,r=0;
		cout<<"Enter values of n and r ";
		cin>>n>>r;
		if(n<0||r<0)
		throw 45;
		else if(n<r)
		throw 27;
		else 
		{
			int p=permutation(n,r);
			cout<<p<<endl;
			int c=combination(n,r);
			cout<<c;
		}
	}
		catch (int i)
		{
			cout<<"Caught an exception..invalid input";
		}
  return 0;
}
