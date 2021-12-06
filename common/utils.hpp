// START LEETCODE HEADER
#include "willian_lin.hpp"
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <stack>
#include <deque>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <climits>
#include <unordered_set>

#include "../mylibs/listnode.hpp"
#include "../mylibs/treenode.hpp"

using namespace std;
// COMPETITVE PROGRAMMING STUFF
#define F first
#define S second
typedef vector<int> vi;

#define bisect_left(v, x) distance(v.begin(), lower_bound(all(v), x))
#define bisect_right(v, x) distance(v.begin(), upper_bound(all(v), x))

template <class T>
void v_insert(vector<T> &v, int idx, T obj)
{
    v.insert(v.begin() + min(idx, sz(v)), obj);
}

template <typename S>
ostream &operator<<(ostream &os,
                    const vector<S> &vector)
{
    for (auto element : vector)
        os << element << " ";
    os << "\n";
    return os;
}
