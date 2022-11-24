#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char *str_time = "20160907-05:00:54.123";
    unsigned int year, month, day, hour, minute, second, miliseconds;

    if (sscanf(str_time, "%4u%2u%2u-%2u:%2u:%2u.%3u", &year, &month,
               &day, &hour, &minute, &second,&miliseconds) != 7)
    {
        cout << "Parse failed" << std::endl;
    }
    else
    {
        cout << year << month << day << "-" << hour << ":"
                  << minute << ":" << second << "." << miliseconds
                  <<endl;
    }
}
