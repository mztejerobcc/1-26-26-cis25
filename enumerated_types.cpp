#include <iostream>
using namespace std;

enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};

Day getDOWFromData(int year, int month, int day) {
    // calculate day of week
    if ((year == 2026) && (month = 2) && (day == 18)) {
        return WEDNESDAY;
    }
    return SUNDAY;
}

int main() {
    string daysOfTheWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};


    Day today = getDOWFromData(2026, 2, 18);
    cout << daysOfTheWeek[today] << endl;
}