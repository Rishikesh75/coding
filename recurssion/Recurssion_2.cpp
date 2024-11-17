// Printing the Number 1 to n
#include <iostream>
using namespace std;
void f(int n)
{
    if (n == 0)
    {
        cout << "\n";
        return;
    }
    cout << n << "\t";
    f(n - 1);
}
int main()
{
    int n;
    cin >> n;
    f(n);
    return (0);
}