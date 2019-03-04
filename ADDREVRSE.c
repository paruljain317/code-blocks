#include<iostream>
using namespace std
int reverse(num)
{
    int r1,r=0;
    while(num>0)
    {
        r1=num%10;
        r=r*10 +r1;
        num=num/10;
    }
    return r1;
}
void main()
{
    int a,b,R,B,sum=0;
    cin>>a>>b;
    R=reverse(a);
    B=reverse(b);
    sum=R+B;
    cout<<reverse(sum)<<endl;

}
