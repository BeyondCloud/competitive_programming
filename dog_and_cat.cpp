#include "utils.hpp"

ListNode *merge_sorted_list(ListNode *list1, ListNode *list2)
{
    /*
        inplace merge list
    */
    ListNode dummyHead(0);
    ListNode *newTail = &dummyHead;
    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            newTail->next = list1;
            list1 = list1->next;
            newTail = newTail->next;
        }
        else
        {
            newTail->next = list2;
            list2 = list2->next;
            newTail = newTail->next;
        }
    }
    newTail->next = (list1) ? list1 : list2;
    return dummyHead.next;
    // traverse till the end of merged list to get the newTail
    // while (newTail->next)
    // {
    //     newTail = newTail->next;
    // }
    // // link the old tail with the head of merged list
    // tail->next = dummyHead.next;
    // // update the old tail with the new tail of merged list
    // tail = newTail;
}

void p_list(ListNode *ln)
{
    while (ln)
    {
        cout << ln->val << " > ";
        ln = ln->next;
    }
}
ListNode vec2list(vi v)
{
    ListNode dummy(0);
    ListNode *cur = &dummy;

    EACH(it, v)
    {
        cur->next = new ListNode(it);
        cur = cur->next;
    }
    return *dummy.next;
}
int main()
{

    vi v = {1, 2};

    // sort(all(v));
    // sort(rev_all(v));
    // vi::iterator lower = lower_bound(all(v), 3);
    v_insert<int>(v, 5, 3);
    v_insert<int>(v, 2, 2);
    // v.insert(v.begin() + 5, 3);
    EACH(it, v)
    {
        cout << it;
    }
    // cout << bisect_left(v, 2);
    // cout << bisect_right(v, 2);

    // vi vect_1{1, 6, 7, 10};
    // ListNode l1 = vec2list(vect_1);
    // vi vect_2{2, 4, 5, 8};
    // ListNode l2 = vec2list(vect_2);

    // ListNode *sortedlist = merge_sorted_list(&l1, &l2);

    // p_list(sortedlist);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    // int t = 1;
    // read(t);
    // FOR(t)
    // {
    //     cout << i;
    //     //write("Case #", i+1, ": ");
    //     // solve();
    // }
}