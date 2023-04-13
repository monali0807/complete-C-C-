#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int minidx = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if (minidx == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }

    return 0;
}
//***************Record breaking days**************8//
/*#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    arr[n] = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mx && arr[i + 1] < mx)
        {
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    cout << ans << endl;

    return 0;
}*/

// ************Longest Arithmetic Subarray (GOOGLE Kickstart)****************//
/*#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 2;
    int curr = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
        {
            curr++;
        }
        else
        {
            pd == arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;

    return 0;
}*/

//************** Que: Given array a[] of size n. Output sum of each subarray of the given array. *********//
/*#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            cout << curr << endl;
        }
    }

    return 0;
}*/

// ******************maximum till i ******************//
/*#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = -199999999;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx << endl;
    }

    return 0;
}*/