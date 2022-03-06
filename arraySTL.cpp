#include<iostream>
#include<array>

using namespace std;

int main()
{
    array<int, 10>Arr;
    cout<<"Enter the Array Elements :  ";
    for(int i = 0;i<Arr.size();i++)
    {
        cin>>Arr[i];
    }

    cout<<"Elements are : ";
    for(int i=0;i<Arr.size();i++)
    {
        cout<<Arr[i]<<" ";
    }
}
