#include<iostream>
#include<cmath>
using namespace std;
void m(double r,int p,int n);
int main(){
	double r=0;
	int n=0,p=0;
	cin>>r>>n>>p;
	m(r,p,n);
	return 0;
}
void m(double r,int p,int n)
{
	int s=p,pm[30],pt[30],rr=floor(r*1000);;
	
	for(int i=0;i<30;i++)
	{
		if(i>=0&&i<11)pm[i]=0;
		else {pm[i]=p%10;p/=10;}
		pt[i]=0;
	}
	for(int k=0;k<n;k++)
	{	
		for(int i=0;i<30;i++)
		{
			pt[i]+=pm[i]*rr;
		}
		for(int i=0;i<30;i++)
		{
			pt[i+1]+=pt[i]/10;
			pt[i]%=10;
		}
		for(int i=3;i<30;i++)
		{
			pt[i-3]=pt[i];
		}
		for(int i=0;i<30;i++)
		{
			pt[i]+=pm[i];
		}
		for(int i=0;i<30;i++) 
		{
			pt[i+1]+=pt[i]/10;
			pt[i]%=10;
		} 	
		if(k==n-1)
		{
			bool t=0;
			for(int i=29;i>=11;i--)
			{
				if(pt[i]!=0||t!=0)
				{
				t++;
				cout<<pt[i];
				if(i==11)cout<<endl;
				}
			else continue;
			}
		}
		else
		{
			pt[11]+=s;
			for(int i=0;i<30;i++)
			{
			pm[i]=pt[i];
			pt[i]=0;
			}
		}	
	}
}