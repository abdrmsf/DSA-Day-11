#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int num;
cin>>num;
int dig,ans=0,i=0;
while(num!=0)
{
    dig=num%10;
    if(dig==1)
    {
    ans=pow(2,i)+ans;
    }
    num=num/10;
    i++;
}
cout<<ans;


return 0;
}