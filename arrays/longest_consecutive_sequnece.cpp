#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void input_array(vector<int> &arr_1, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr_1[i];
    }
}
void display(vector<int> arr_1)
{
    for (int i : arr_1)
    {
        cout << i << "\t";
    }
    cout << "\n";
}
int longest_consecutive_sequence(vector<int> arr, int n)
{
    int count = 0;
    int max_count = 0;
    for (int i = 1; i < n; i++)
    {
        if (count == 0 && arr[i] == arr[i - 1] + 1)
        {
            count = 2;
        }
        else if (arr[i] == arr[i - 1] + 1)
        {
            count = count + 1;
        }
        else if (arr[i] != arr[i - 1] + 1)
        {
            max_count = max(max_count, count);
        }
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    input_array(arr, n);
    sort(arr.begin(), arr.end());
    display(arr);
    cout << longest_consecutive_sequence(arr, n) << endl;
    return (0);
}