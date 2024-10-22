#include <iostream>
using namespace std;

int main(void) {
    long second;
    cout << "초를 입력하시오 : ";
    cin >> second;
    long day, hour, min, sec;
    day = second/60/60/24;
    hour = second-day*60*60*24;
    hour = hour/60/60;
    min = second-day*60*60*24-hour*60*60;
    min = min/60;
    sec = second-day*60*60*24-hour*60*60-min*60;
    cout << second << "초 = " << day << "일, " << hour << "시간, " << min << "분, " << sec << "초";
}