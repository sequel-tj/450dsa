#include <bits/stdc++.h>
using namespace std;

bool isValid(string str) {
    stack<char> s;
    for(auto i:str) {
        if (i=='(' or i=='[' or i=='{') s.push(i);
        else {
            if (!s.empty() and ((i==')' and s.top()=='(') or (i==']' and s.top()=='[') or (i=='}' and s.top()=='{'))) {
                s.pop();
            }
            else return false;
        }
    }

    return s.empty();
}

int main() {
    string s; cin >> s;
    cout << isValid(s);
    
    return 0;
}
