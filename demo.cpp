#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(), (v).end()
#define size(x) ((int)(x).size())
#define fast_io()                \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define vl vector<ll>
#define vi vector<ll>
#define vvi vector<vi>
#define pii pair<ll, ll>
#define vpii vector<pii>
#define umap unordered_map
#define uset unordered_set
#define mapi unordered_map<ll, ll>
#define mapii unordered_map<ll, pair<ll, ll>>

#define inputArray(arr, n)       \
    for (ll i = 0; i < n; i++)   \
    {                            \
        ll x;                    \
        cin >> x;                \
        arr.pb(x);               \
    }

#define printArray(arr)          \
    for (ll x : arr)             \
    {                            \
        cout << x << " ";        \
    }                            \
    cout << "\n";

void solve()
{
    ll n;
    cin >> n;
    vector<ll> nums;
    inputArray(nums, n);
    printArray(nums);
}

int main()
{
    fast_io();

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
