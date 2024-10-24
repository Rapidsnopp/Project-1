#include <bits/stdc++.h>
using namespace std;
double Gia_cu(float k){
    if(k<51)       return 1728*k;
    else if(k<101) return 1728*50+1786*(k-50);
    else if(k<201) return 1728*50+1786*50+2074*(k-100);
    else if(k<301) return 1728*50+1786*50+2074*100+2612*(k-200);
    else if(k<401) return 1728*50+1786*50+2074*100+2612*100+2919*(k-300);
    else           return 1728*50+1786*50+2074*100+2612*100+2919*100+3015*(k-400);
}

double Gia_moi(float k){
    if(k<101)      return 1728*k;
    else if(k<201) return 1728*100+2074*(k-100);
    else if(k<401) return 1728*100+2074*100+2612*(k-200);
    else if(k<701) return 1728*100+2074*100+2612*200+3111*(k-400);
    else           return 1728*100+2074*100+2612*200+3111*300+3457*(k-700);
}
int main(){
    float k;
    cin >> k;
    cout << fixed << setprecision(2)<< (Gia_moi(k)*1.1-Gia_cu(k)*1.1);
}