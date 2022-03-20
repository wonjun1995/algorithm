#include<iostream>
 
using namespace std;
 
int divide(int x, int y)
{
    if (x % y == 0)
    {
        return y;
    }
    return divide(y, x % y);
}
 
int main()
{
    int A, B;
    int common_max = 0;
    cin >> A >> B;
 
    if (A >= B)
    {
        common_max=divide(A, B);
    }
    else common_max=divide(B, A);
 
    cout << common_max << "\n";
    cout << A * B / common_max << "\n";
}
