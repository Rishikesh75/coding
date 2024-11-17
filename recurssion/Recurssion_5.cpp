// swap && Reverse the string
#include <iostream>
using namespace std;
void swap(string &s, int start, int end)
{
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
}
void reverse_string(string &s, int start, int end)
{
    if (start == end || start > end)
    {
        return;
    }
    swap(s, start, end);
    reverse_string(s, start + 1, end - 1);
}
int main()
{
    string s;
    cin >> s;
    reverse_string(s, 0, s.length() - 1);
    cout << s << endl;
    return (0);
}