#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    string str_ret;
    // Write your code here
    switch(n) {
        case 1:
            str_ret = "one";
            break;
        case 2:
            str_ret = "two";
            break;
        case 3:
            str_ret = "three";
            break;
        case 4:
            str_ret = "four";
            break;
        case 5:
            str_ret = "five";
            break;
        case 6:
            str_ret = "six";
            break;
        case 7:
            str_ret = "seven";
            break;
        case 8:
            str_ret = "eight";
            break;
        case 9:
            str_ret = "nine";
            break;
        default:
            str_ret = "Greater than 9";
            break;
    }
    std::cout << str_ret << "\n";
    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
