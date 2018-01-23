#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>:: iterator it;
vector<int>:: iterator mini;
int findmax(std::vector<int>arr,int size)
{
   int max=arr[0];
   for(int i=0;i<size;i++)
    {
          if(arr[i]>max)
             max=arr[i];
    }
 return max;
}
int main()
{
 int m,n,counter=0;
 cin>>m>>n;
 std::vector<int>A(m);
 std::vector<int>B(n);
 std::vector<int>X; 
 for(int i=0;i<m; ++i)
    {
       cin>>A[i];
       
     }

 for(int i=0;i<n; ++i)
    {
       cin>>B[i];
    }
int j=0;
counter=0;
it=max_element(A.begin(),A.end());
mini=std::min_element(B.begin(),B.end());
cout<<*mini;
for(int i=*it;i<=*mini;i++)
{
   for(int j=0;j<m;j++)
      {
          if(i%A[j]!=0)
            {
                
                counter++;
                 break;
    
            }
          
      }
  if(counter==0)
    {
   
     X.push_back(i);
  
}
 counter=0;
}


for(int i=0;i<X.size();i++)
  {
      cout<<X[i];
      cout<<"\n";
 }


}
