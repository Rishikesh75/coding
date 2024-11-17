// nKadens agoritham to find the max in the array
#include <iostream>
#include <vector>
using namespace std;
void input_array(vector<int> &arr_1, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr_1[i];
    }
}

void display(vector<int> arr_1, int n)
{
    for (int i : arr_1)
    {
        cout << i << "\t";
    }
    cout << "\n";
}
int max_sum_sub_array(vector<int> arr, int n)
{
    int i = 0;
    int max_sum = 0;
    int sum = 0;
    int first_positive = 0;
    while (i != n)
    {
        if (arr[i] < 0 && first_positive == 0)
        {
            i = i + 1;
        }
        else if (arr[i] > 0 && first_positive == 0)
        {
            sum = sum + arr[i];
            max_sum = max(sum, max_sum);
            first_positive = 1;
            i = i + 1;
        }
        else
        {
            sum = sum + arr[i];
            max_sum = max(sum, max_sum);
            i = i + 1;
        }
    }
    return max_sum;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr_1(n, 0);
    input_array(arr_1, n);
    display(arr_1, n);
    cout << max_sum_sub_array(arr_1, n) << endl;
    return (0);
}