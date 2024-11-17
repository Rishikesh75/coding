// Mores Voting
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
int majority_element(vector<int> arr_1, int n)
{
    int element = arr_1[0];
    int element_count = 1;
    for (int i = 1; i < n; i++)
    {
        if (element == arr_1[i])
        {
            element_count = element_count + 1;
        }
        else if (element != arr_1[i] && element_count > 0)
        {
            element_count = element_count - 1;
        }
        else if (element != arr_1[i] && element_count == 0)
        {
            element = arr_1[i];
            element_count = element_count + 1;
        }
    }
    return element;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    input_array(arr, n);
    cout << "Majority Element is:" << majority_element(arr, n) << endl;
    return (0);
}