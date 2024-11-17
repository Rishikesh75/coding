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
void display_array(vector<int> arr_1, int end_index)
{
    for (int i = 0; i <= end_index; i++)
    {
        cout << arr_1[i] << "\t";
    }
    cout << "\n";
}
void place_value(vector<int> &arr, int i, int insert_index)
{
    arr[insert_index] = arr[i];
}
void remove_duplicates(vector<int> &arr_1, int number)
{
    int i = 0;
    int j = 1;
    int insertion_index = 0;
    while (i < number && j + 1 < number)
    {
        if (arr_1[i] == arr_1[j])
        {
            j = j + 1;
        }
        else if (arr_1[i] != arr_1[j])
        {
            place_value(arr_1, i, insertion_index);
            i = j;
            j = j + 1;
            insertion_index = insertion_index + 1;
        }
    }
    place_value(arr_1, i, insertion_index);
    display_array(arr_1, insertion_index);
}
int main()
{
    int number = size();
    vector<int> arr_1(number, 0);
    input_array(arr_1, number);
    remove_duplicates(arr_1, number);

    return (0);
}