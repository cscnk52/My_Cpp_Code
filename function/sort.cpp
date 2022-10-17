#include <iostream>
using namespace std;
int main()
{
    int i,arraylong;
    cin>>i;
    int array[i];
    for(int m=0; m<i; m++)
    {
        cin>>array[m];
    }
    arraylong=sizeof(array)/sizeof(int);
    cout<<arraylong<<endl;
    for(int n=0;n<i;n++)
    {
        cout<<array[n]<<" ";
    }
    cout<<endl;
    for(int m=0; m<arraylong; m++)
    {
        for(int v=0; v+1<arraylong; v++)
        {
            if(array[v]>array[v+1])
            {
                swap(array[v],array[v+1]);
            }
        }
    }
    for(int n=0;n<i;n++)
    {
        cout<<array[n]<<" ";
    }
    return 0;
}