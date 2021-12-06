#include <iostream>
using namespace std;

template <class T>
struct ListNode
{
    T val;
    ListNode *next;
    ListNode() : next(nullptr) {}
    ListNode(T x) : val(x), next(nullptr) {}
    ListNode(T x, ListNode *next) : val(x), next(next) {}
};

// print ListNode
template <typename S>
ostream &operator<<(ostream &os,
                    const ListNode<S> &ln)
{
    const ListNode<S> *p = &ln;
    for (; p->next; p = p->next)
        os << p->val << " > ";
    os << p->val << "\n";
    return os;
}

template <class T>
ListNode<T> vec2listnode(vector<T> v)
{
    ListNode<T> dummy;
    ListNode<T> *cur = &dummy;
    EACH(it, v)
    {
        cur->next = new ListNode<T>(it);
        cur = cur->next;
    }
    return *(dummy.next);
}