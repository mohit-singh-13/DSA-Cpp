#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int, string> m;

    m[1] = "Mohit";
    m.insert({5, "Thapa"}); 
    m[2] = "Singh";
    m.insert({13, "Bheem"});

    cout << "Key-value : " << endl;
    for (auto i:m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Is 13 present? : " << m.count(13) << endl;
    cout << "Is 15 present? : " << m.count(15) << endl;

    //map<int, string> :: iterator it = m.find(5);
    auto it = m.find(5);    //works same as above

    cout << "Key-value after 2 : " << endl;
    for (auto i=it ; i!=m.end() ; i++)
    {
        cout << (*i).first << endl;
    }
    
    m.erase(5);

    cout << "Key-value after erase : " << endl;
    for (auto i:m)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}