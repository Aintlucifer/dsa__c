#include<iostream>
using namespace std;
int main()
{
        int i;j,n;
        cout<<"enter the number of rows  you want to have the pattern";
        cin>>n>>endl;
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=i;j++)
                {
                        cout<<j<<" ";
                }
                cout<<endl;
        }
        return 0;
}
