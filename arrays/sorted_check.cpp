// check weather the array is sorted
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
bool sorted(vector<int> arr_1, int number)
{
    int i = 1;
    int var = arr_1[0];
    while (i != number)
    {
        if (arr_1[i] < var)
        {
            return false;
        }
        i = i + 1;
    }
    return true;
}
int main()
{
    int number = size();
    vector<int> arr_1(number, 0);
    input_array(arr_1, number);
    cout << sorted(arr_1, number) << endl;
    return (0);
}