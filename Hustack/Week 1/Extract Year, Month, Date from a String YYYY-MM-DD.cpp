#include <bits/stdc++.h>
using namespace std;
bool check_date(const string&date){
        if(date.length()!=10) return false;
        regex date_parttern(R"((\d{4})-(\d{2})-(\d{2}))");
        smatch match;
        if(regex_match(date,match,date_parttern)){
            int year= stoi(match[1]);
            int month= stoi(match[2]);
            int day= stoi(match[3]);

        if(month<1||month>12||day>31||day<1) return false;
        return true;
        }
    return false;
}

int main(){
    string date;
    cin >> date;
    if(check_date(date)){
        regex date_parttern(R"((\d{4})-(\d{2})-(\d{2}))");
        smatch match;
        regex_match(date,match,date_parttern);
        int year= stoi(match[1]);
        int month= stoi(match[2]);
        int day= stoi(match[3]);
        cout << year << " " << month << " " << day << endl;
    }
    else cout << "INCORRECT" <<endl;
}

