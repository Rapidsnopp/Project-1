#include <bits/stdc++.h>
using namespace std;

bool is_valid_time(const string& time) {
    vector<string> parts;
    stringstream s(time);
    string part;

    while (getline(s, part, ':')) {
        parts.push_back(part);
    }
    
    if (parts.size() != 3) {
        return false;
    }

    for (const string& p : parts) {
        if (p.length() != 2 || !isdigit(p[0]) || !isdigit(p[1])) {
            return false;
        }
    }
    
    int hh = stoi(parts[0]);
    int mm = stoi(parts[1]);
    int ss = stoi(parts[2]);

    if (hh < 0 || hh > 23 || mm < 0 || mm > 59 || ss < 0 || ss > 59) {
        return false;
    }
    
    return true;
}

int convert_to_seconds(const string& time) {
    stringstream s(time);
    string part;
    vector<int> time_parts;

    while (getline(s, part, ':')) {
        time_parts.push_back(stoi(part));
    }
    
    int hh = time_parts[0];
    int mm = time_parts[1];
    int ss = time_parts[2];

    return hh * 3600 + mm * 60 + ss;
}

int main() {
    string s;
    cin >> s;

    if (!is_valid_time(s)) {
        cout << "INCORRECT" << endl;
    } else {
        cout << convert_to_seconds(s) << endl;
    }
    
    return 0;
}
