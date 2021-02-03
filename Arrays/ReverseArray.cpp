#include <bits/stdc++.h>
using namespace std;

#define FILE_READ_IN freopen("input.txt", "r", stdin);
#define FILE_READ_OUT freopen("output.txt", "w", stdout);
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define REPR(i, a, b) for (int i = a; i >= b; i--)
#define REPS(i, a, b, step) for (int i = a; i < b; i += step)
#define REPRS(i, a, b, step) for (int i = a; i >= b; i -= step)
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie();                        \
    cout.tie();

int main(int argc, const char **argv)
{

    FAST int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i >= ; i--)
    {
        cout << arr[i];
    }

    return 0;
}