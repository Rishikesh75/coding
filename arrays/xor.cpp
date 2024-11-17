// union of two sorted arrays
#include <iostream>
#include <vector>
using namespace std;
int size()
{
    int n_1;
    cin >> n_1;
    return n_1;
}
void input_array(vector<int> &arr_1, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr_1[i];
    }
}
void display(vector<int> arr_1, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr_1[i] << "\t";
    }
    cout << "\n";
}
int missing_number(vector<int> arr, int n)
{
    int var = arr[0];
    for (int i = 1; i < n; i++)
    {
        var = var ^ arr[i];
    }
    for (int i = 0; i <= n; i++)
    {
        var = var ^ i;
    }
    return var;
}
int main()
{
    int n = size();
    vector<int> arr_1(n, 0);

    input_array(arr_1, n);
    cout << missing_number(arr_1, n);

    return (0);
}