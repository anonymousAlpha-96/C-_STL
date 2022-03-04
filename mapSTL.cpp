 #include<iostream>
 #include<map>

 using namespace std;

 int main()
{
    map<int,string>m;

    m[2] = "anonymous";
    m[18] = "alpha";
    m[25] = "delta";
    m[26] = "bravo";
    m.insert({3,"charlie"});

    cout<<"before erase : "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"Finding 26 : "<<m.count(26)<<endl;

    //m.erase(3);
    cout<<"After erase : "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(2);

    for(auto i = it;i!=m.end();i++)
    {
        cout<<(*i).first<<" ";
    }cout<<endl;

}
