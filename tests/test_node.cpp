#include "../common/utils.hpp"
int main()
{
    {
        vector<string> v = {"as", "df", "gh"};
        cout << v;
        ListNode<string> ln = vec2listnode<string>(v);
        cout << ln;
    }
    {
        vector<int> v = {1, 2, 3};
        cout << v;
        ListNode<int> ln = vec2listnode<int>(v);
        cout << ln;
    }
}