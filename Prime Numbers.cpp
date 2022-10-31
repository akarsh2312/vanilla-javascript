#include<iostream>
using namespace std;

int main()
{
int n,i;
int j=1;
cout<<"Enter a number : ";
cin>>n;
for(i=1;i!=n;i++)
{
	if(n%i==0)
	j++;
	
	
}
if(j>2)
{
	
cout<<"The number has "<<j<<" factors , including 1 and itself"<<endl;
cout<<"So ,it is a composite number"<<endl<<endl<<endl;
}
if(j==2)
{
	
	cout<<"The number has only "<<j<<" factors , including 1 and itself"<<endl;
	cout<<"So ,it is a prime number"<<endl<<endl<<endl;
}
if(j==1)
{
	cout<<"Ughh !! Don't test me . We all know 1 is neither prime nor composite ."<<endl<<endl<<endl;
}
}
