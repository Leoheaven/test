#include<iostream>
#include<fstream>
using namespace std;
const int life = 80;
const int mPY = 12;
const int wPM = 4;
const int dPY = 365;

int main(){
    int total = life*mPY*wPM;
    int over = 21*mPY*wPM;
    ofstream out("1.txt");
    if (out.is_open()) {
        out<<total<<" "<<over<<endl;
        for(int i = 0; i < over; i++){
            out<<"¡ö";
        }
        for(int i = 0; i < total-over; i++){
            out<<"¡õ";
        }
        out.close();
    }
    return 0;
}
