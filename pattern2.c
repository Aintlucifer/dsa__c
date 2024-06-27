#include<iostream>
using namespace std;
int  main()
{ int i,j,k,f,n;
cout<<"enter no. of rows you want ";
cin>>n;
f=1;
for(i=1;i<=n;i++)
    {   
    for(j=1;j<=i;j++)
            { cout<<"*";
            for(k=f;k<=n-1;k++)
                {
                cout<<" ";
                }
             }
    f=f+2;
    cout<< endl ;
    }

return 0;
}












