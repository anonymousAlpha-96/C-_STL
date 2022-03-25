#include<iostream>
#include<iterator>
#include<map>

using namespace std;

int main()
{
    map<int, int> mp;

    //adding elements to the map stl
    mp.insert(pair<int, int>(1, 2));
    mp.insert(pair<int, int>(2, 8));
    mp.insert(pair<int, int>(3, 18));
    mp.insert(pair<int, int>(4, 23));
    mp.insert(pair<int, int>(5, 25));
    mp.insert(pair<int, int>(6, 26));

    map<int, int>::iterator itr;

    //displaying map elements
    cout<<"The map values are : "<<endl;
    cout<<"Sl.No \t Element"<<endl;
    for(itr = mp.begin();itr!=mp.end();++itr)
    {
        cout<<"  "<<itr->first<<" \t  "<<itr->second<<endl;
    }
    cout<<endl;

    //erasing the elements
    mp.erase(4);
    cout<<"Sl.No \t Element"<<endl;
    for(itr = mp.begin();itr!=mp.end();++itr)
    {
        cout<<"  "<<itr->first<<" \t  "<<itr->second<<endl;
    }
    cout<<endl;
return 0;
}
