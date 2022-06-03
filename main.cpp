#include <iostream>

using namespace std;

int main()
{
    int hour1, hour2, min1, min2, time, tax=0;
    cin >> hour1 >> min1 >> hour2 >> min2;
    time = hour2*60 + min2 - hour1*60 - min1;
    if(time <= 120){//停車2小時以內，每半小時30元
        tax = time/30 * 30;
    }
    else if(time<=240){//超過2小時，但未滿4小時的部份，每半小時40元
        tax = 30*4 + (time-120)/30 * 40;
    }
    else{//超過4小時以上的部份，每半小時60元
        tax = 30*4 + 40*4 + (time-240)/30 * 60;
    }
    cout << tax << endl;
    return 0;
}
