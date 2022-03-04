#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int>s;

    s.insert(26);
    s.insert(18);
    s.insert(25);
    s.insert(2);
    s.insert(8);
    s.insert(18);

    for(auto i:s)
    {
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    cout<<endl;
    for(auto i:s)
    {
        cout<<i<<endl;
    }cout<<endl;

    cout<<"18 is present is not : "<<s.count(18)<<endl;

    set<int>::iterator itr = s.find(25);
    cout<<endl;
    for(auto it = itr;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

}

