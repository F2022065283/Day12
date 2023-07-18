#include<iostream>
using namespace std;
int main()
{
    int p[10];
    for(int i=0;i<10;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<10;i++)
    {
        if(p[i]%p[i])
        cout<<p[i]<<"  ";
    }
    
}