

#include <iostream>
using namespace std;
string lstrip(string srcStr, const string charList)
{
    string tagStr = srcStr;
    tagStr.erase(0, tagStr.find_first_not_of(charList.c_str()));
    return tagStr;
}
string rstrip(string srcStr, const string charList)
{
    string tagStr = srcStr;
    tagStr.erase(tagStr.find_last_not_of(charList.c_str()) + 1);
    return tagStr;
}
string strip(string srcStr, const string charList)
{
    return rstrip(lstrip(srcStr, charList), charList);
}
int main()
{
    string str = " ../abc.txt\n";
    str = lstrip(str, " ./");
    cout << str << endl;
    // cout << rstrip(str, " \n") << endl;
    // cout << strip("asdf", " ./\n") << endl;
}