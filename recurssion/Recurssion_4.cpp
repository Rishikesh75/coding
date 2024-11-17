// Palimdrome_check using Recurrsion
#include <iostream>
using namespace std;
bool check_palimdrome(string s_1, int start, int end)
{
    if (start == end || (start + 1 == end && s_1[start] == s_1[end]))
    {
        return true;
    }
    if (s_1[start] == s_1[end])
    {
        return check_palimdrome(s_1, start + 1, end - 1);
    }
    else if (s_1[start] != s_1[end])
    {
        return false;
    }
}
int main()
{
    string s_1;
    cin >> s_1;
    cout << check_palimdrome(s_1, 0, s_1.length() - 1) << endl;
    return (0);
}