#include<iostream>
using namespace std;
int main()
{
  int a[100][100],r,c;
  cout<<"enter the no of rows";
  cin>>r;
  cout<<"enter the no of col";
  cin>>c;
  for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
     cin>>a[i][j];
     }
  }
  for(int i=0;i<r;i++){
     for(int j=0;j<c;j++){
     cout<<a[i][j]<<" ";
     }
     cout<<endl;
  }
  
  
}

