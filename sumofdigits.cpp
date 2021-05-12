#include <bits/stdc++.h>
using namespace std;
int main()
{
int s=0,n,r;
cout<<"Enter any number";
cin>>n;
while(n>0)
{
	r = n % 10;
	s= s+r;
	n=n/10;
}

cout<<"Sum of Digits is"<<s<<endl;

return 0;
}
