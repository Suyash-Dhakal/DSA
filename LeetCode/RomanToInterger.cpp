#include <iostream>
#include <vector>
#include <map>

using namespace std;

int RomanToInt(vector<char> &s)
{
    map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;
    int total = 0, n = s.size();

    for (int i = 0; i < n; i++) {
        if (i < n - 1 && (mp[s[i]]) < (mp[s[i + 1]])) {
            total = total - mp[s[i]];
        }
        else {
            total = total + mp[s[i]];
        }
    }
    return total;
}

int main()
{
    cout << "Enter the size of Roman numeral:" << endl;
    int size;
    cin >> size;
    vector<char> roman(size);
    cout << "Enter the Roman numeral:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> roman[i];
    }
    int total = RomanToInt(roman);
    // converting "roman" from type vector to string
    string romanStr(roman.begin(), roman.end());
    cout << "The corresponding Integer value of given Roman Numeral (" << romanStr << ") is: " << total << endl;

    return 0;
}
