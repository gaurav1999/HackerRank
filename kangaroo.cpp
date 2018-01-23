#include<iostream>
using namespace std;
int main()
{
    int x1,x2,v1,v2;
    cin>>x1;
    cin>>v1;
    cin>>x2;
    cin>>v2;
    int x=x1-x2 , y=v2-v1;
    if(x1>x2 && v1>v2)
      cout<<"NO";
    else if (x2>x1 && v2>v1)
        cout<<"NO";
    else if ((x/y)>0 && (x%y)==0)
          cout<<"YES";

   
}
