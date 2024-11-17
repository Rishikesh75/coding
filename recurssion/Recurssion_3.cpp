// Printing the number 1 to n
#include <iostream>
using namespace std;
void f(int n, int current_value)
{
    if (current_value == n + 1)
    {
        cout << "\n";
        return;
    }
    cout << current_value << "\t";
    f(n, current_value + 1);
}
int main()
{
    int n;
    cin >> n;
    f(n, 1);
    return (0);
}