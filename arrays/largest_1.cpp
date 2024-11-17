// Largest element in the array
#include <iostream>
#include <vector>
#include <algorithm>
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

int main()
{
    int number = size();
    vector<int> arr_1(number, 0);
    input_array(arr_1, number);
    sort(arr_1.begin(), arr_1.end());
    display(arr_1, number);
    return (0);
}