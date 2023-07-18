#include<iostream>
using namespace std;
void last(int a,int b)
{
    int s=a*a;
    int c=b*b*b;
    int f=s+c;
    cout<<f;
}
int main()
{
    int x,y;
    cin>>x>>y;
    last(x,y);
}
