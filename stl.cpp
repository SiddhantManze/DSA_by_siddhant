#include <bits/stdc++.h>
using namespace std;

// pairs
void exp_pair()
{
    // pair syntax
    pair<int, int> p = {1, 2};
    cout << p.first << " " << p.second << endl;

    // Nested pair
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    // arrays of pair
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    // input in an array of pair using a loop
    // pair<int, int> arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     cin >> arr[i].first >> arr[i].second;
    // }

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}

// vectors
void exp_vector()
{
    // vector syntax
    vector<int> v;
    v.push_back(1);
    v.emplace_back(3); // emplace_back is more faster than push_back

    // vector pair
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // vector containing 5 instances 0f 0 or garbage value
    vector<int> v1(5);
    // vector containing 5 instances of 100
    vector<int> v2(5, 100);

    // copy in vector
    vector<int> v3(3, 5);
    vector<int> v4(v3);

    // iterator in vector
    vector<int> v5 = {2, 6, 9, 10, 99};
    vector<int>::iterator it = v5.begin();
    it++;
    cout << *(it) << " "; // "it" is the memory location & *(it) is the value at that memory location

    it += 2;
    cout << *(it) << " " << endl;

    // vector<int>::iterator it = v5.end();
    // vector<int>::iterator it = v5.rend();
    // vector<int>::iterator it = v5.rbegin();

    cout << v5[0] << " " << v5.at(0) << endl;
    cout << v5.back() << endl;

    // Printing vector
    // 1. Using index
    for (int i = 0; i < v5.size(); i++)
    {
        cout << v5[i] << " ";
    }
    cout << endl;

    // 2. Using iterator
    for (vector<int>::iterator it = v5.begin(); it != v5.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it = v5.begin(); it != v5.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it: v5) // shortcut here "it" is not an iterator its "int"
    {
        cout << it << " ";
    }
    cout << endl;

    // Erase function in vector
    vector<int> v6 = {10, 20, 30, 40};
    v6.erase(v6.begin() + 1); // -> 10 30 40

    vector<int> v7 = {10, 20, 30, 40, 60, 70};
    v7.erase(v7.begin() + 1, v7.begin() + 3); // -> 10 40 60 70  [start, end) <-- ")" means end not include

    // Insert function
    vector<int> v8(2, 100);           // {100, 100}
    v8.insert(v8.begin(), 300);       // -> 300 100 100
    v8.insert(v8.begin() + 1, 3, 10); // -> 300 10 10 10 100 100

    vector<int> copy(2, 50);                         // {50, 50}
    v8.insert(v8.begin(), copy.begin(), copy.end()); // -> 50 50 300 10 10 10 100 100

    cout << v8.size() << endl; // -> 8

    // v8 = {50, 50, 300, 10, 10, 10, 100, 100}
    v8.pop_back(); // -> 50 50 300 10 10 10 100

    // Swap of vectors
    // // v1 = {10, 20};
    // // v2 = {100, 300};
    // v1.swap(v2);        v1 -> 100 300
    //                     v2 -> 10 20

    v8.clear(); // erases the entire vector { }

    cout << v8.empty(); // if true: 1 else: 0

    // for (auto it: v8)
    // {
    //     cout << it << " ";
    // }
}

// List
// Same as a vector but give extra front operations
void explain_list()
{
    list<int> ls;        // {}
    ls.push_back(10);    // 10
    ls.emplace_back(50); // 10 50

    // front operation
    ls.push_front(62);  // 62 10 50
    ls.emplace_front(); // 0 62 10 50

    // for (auto it: ls)
    // {
    //     cout << it << " ";
    // }

    // Rest same
    // begin, end, rbegin, rend, clear, insert, size, swap
}

// Deque
void explain_deque()
{
    deque<int> dq;
    dq.push_back(10);    // 10
    dq.emplace_back(50); // 10 50
    dq.push_front(62);   // 62 10 50
    dq.emplace_front(3); // 3 62 10 50

    dq.pop_back();  // -> 3 62 10
    dq.pop_front(); // -> 62 10

    cout << dq.back() << endl;  // -> 10
    cout << dq.front() << endl; // -> 62
}

// Stack
// LIFO -> Last In First Out
void explainStack()
{
    stack<int> st;
    st.push(1);    // 1
    st.push(2);    // 1 2
    st.push(3);    // 1 2 3
    st.push(4);    // 1 2 3 4
    st.push(5);    // 1 2 3 4 5
    st.emplace(6); // 1 2 3 4 5 6

    cout << st.top() << endl;  // prints 6   ** st[2] is invalid **
    st.pop();                  // 1 2 3 4 5
    cout << st.top() << endl;  // 5
    cout << st.size() << endl; // 5
    cout << st.empty();        // 0 -> false

    stack<int> st1, st2;
    st1.swap(st2);
}

// Queue
// FIFO -> First In First Out
void explainQueue()
{
    queue<int> q;
    q.push(2);     // 2
    q.push(3);     // 2 3
    q.emplace(5);  // 2 3 5
    q.back() += 5; // 2 3 10

    cout << q.back() << endl;  // -> 10
    cout << q.front() << endl; // -> 2

    q.pop();                   // 3 10
    cout << q.front() << endl; // -> 3

    // size swap empty same as stack
}

// Priority Queue
// Stores in a sorted order
// Inside this a tree is maintained not stored linearly
void explainPQ()
{
    // Maximum Heap
    priority_queue<int> pq;
    pq.push(5);     // 5
    pq.push(2);     // 5 2
    pq.emplace(8);  //  8 5 2
    pq.emplace(10); // 10 8 5 2

    cout << pq.top() << endl; // -> 10
    pq.pop();                 // 8 5 2
    cout << pq.top() << endl; // -> 8

    // size swap empty functions same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(5);     // 5
    pq1.push(2);     // 2 5
    pq1.push(8);     // 2 5 8
    pq1.emplace(10); // 2 5 8 10

    cout << pq1.top() << endl; // -> 2
}

// Sets
// Stores everything in the sorted order and unique
// Inside this a tree is maintained not stored linearly
void explainSet()
{
    set<int> st;
    st.insert(1);  // 1
    st.emplace(2); // 1 2
    st.insert(2);  // 1 2
    st.insert(4);  // 1 2 4
    st.insert(3);  // 1 2 3 4

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiency

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap() are same as those above

    auto it = st.find(3);  // gives memory location of 3
    auto it1 = st.find(6); // it will give st.end()
    st.erase(2);           // 1 3 4 -- takes logarithmic time

    int cnt = st.count(4); // if present: 1 else: 0
    cout << cnt << endl;   // -> 1

    auto it2 = st.find(3);
    st.erase(it2); // it take constant time -- 1 4

    st.insert(5); // 1 4 5
    st.insert(3); // 1 3 4 5

    auto it3 = st.find(3);
    auto it4 = st.find(5);
    st.erase(it3, it4); // after erasing -- 1 5 -- [first, last)

    // lower_bound() and upper_bound() works in same way
    // as it works in vector

    // syntax
    auto it5 = st.lower_bound(2);
    auto it6 = st.upper_bound(3);
}

// multiset
//Everything is the same as set except stores duplicate items also
void explainMultiSet()
{

    multiset<int> ms;
    ms.insert(1); // 1
    ms.insert(1); // 1 1
    ms.insert(1); // 1 1 1

    ms.erase(1); // all 1's are earase

    ms.insert(1); // 1
    ms.insert(1); // 1 1
    ms.insert(1); // 1 1 1
    int cnt = ms.count(1);

    // only single one is Earase
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1)+2);
    // rest all functions are same
}

// Unordered set
void exp_Uset()
{
    unordered_set<int> st;
    // lower_bound and upper_bound function does not work rest are same
    // as above it does not store in particular order and thus has better time complexity
}

// Map
void explainMap()
{
    map<int, int> mpp;
    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;

    mpp[1] = 2;
    mpp[0] = 8;
    mpp.insert({2, 4});
    mpp.insert({3, 1});

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[2] << endl;

    auto it = mpp.find(2);
    // cout << *(it).second;  --> not working

    auto it2 = mpp.find(5);

    auto it5 = mpp.lower_bound(2);
    auto it6 = mpp.upper_bound(3);
}

void explainMultimap()
{
    // everything same as the map, only it can store multiple keys
    // mpp[key] cannot be used here
}

void explainUnorderedMap()
{
    // same as set and unordered_set difference
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    if (p1.first > p2.first)
        return true;
    return false;
}
// Some Algo
void explainAlgo()
{
    int a[4] = {3, 8, 1, 4};
    sort(a, a + 4);

    vector<int> v;
    sort(v.begin(), v.end());

    // sort(a+2, a+4);
    // sort(a, a + n, greater<int>); // to sort in descending orders

    // Comparator
    pair<int, int> b[3] = {{1, 2}, {2, 1}, {4, 1}};
    //Sort it according to the second element
    //If the second element is the same then sort it according to the first element but in decreasing
    sort(b, b + 3, comp);

    for (auto it: b)
    {
        cout << it.first << " " << it.second << endl;
    }

    // =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << cnt << endl; // -> 3

    long long num1 = 12723740243009;
    int cnt1 = __builtin_popcountll(num1);
    cout << cnt1 << endl;

    // Permutations of a string
    string s = "123"; // sting should be sorted if not sort it
    sort(s.begin(), s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // max or min num in vector or array
    int maxi = *max_element(a, a + 4);
    cout << maxi << endl;

    int mini = *min_element(a, a + 4);
    cout << mini << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    explainAlgo();

    return 0;
}
