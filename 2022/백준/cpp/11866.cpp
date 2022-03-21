#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    queue<int> q;
    int n, k;

    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        q.push(i + 1);
    }

    cout << "<";
    while (n-- != 0)
    {
        for (int i = 0; i < k; i++)
        {
            if (i == k - 1)
            {
                cout << q.front();
                if (q.size() != 1)
                {
                    cout << ", ";
                }
            }
            else
            {
                q.push(q.front());
            }
            q.pop();
        }
    }
    cout << ">";
}