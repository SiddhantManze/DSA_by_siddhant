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
    // input in array of pair using loop
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
    v.emplace_back(3);

    // vector pair
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // 
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    exp_pair();

    return 0;
}
