#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec;

    cout<<"capacity -> "<<vec.capacity()<<endl;

    vec.push_back(26);
    cout<<"capacity -> "<<vec.capacity()<<endl;

    vec.push_back(18);
    cout<<"capacity -> "<<vec.capacity()<<endl;

    vec.push_back(2);
    cout<<"capacity -> "<<vec.capacity()<<endl;

    vec.push_back(25);
    cout<<"capacity -> "<<vec.capacity()<<endl;

    vec.push_back(8);
    cout<<"capacity -> "<<vec.capacity()<<endl;

    cout<<"Front element : "<<vec.front()<<endl;
    cout<<"Back Element : "<<vec.back()<<endl;

    cout<<"Index 1 value in vector : "<<vec.at(1)<<endl;

    cout<<"Before pop ";
    for(int i:vec)
    {
        cout<<i<<" ";
    }cout<<endl;

    vec.pop_back();

    cout<<"after pop ";
    for(int i:vec)
    {
        cout<<i<<" ";
    }cout<<endl;

}
