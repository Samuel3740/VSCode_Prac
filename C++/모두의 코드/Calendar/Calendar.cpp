#include <iostream>
using namespace std;

class Date {
    int year_;
    int month_;
    int day_;

    int GetDaysInMonth(int year, int month){
        if(month == 2){
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                return 29;
            }
            else{
                return 28;
            }
        }

        if(month == 4 || month == 6 || month == 9 || month == 11){
            return 30;
        }
        else{
            return 31;
        }
    }

public:
    void SetDate(int year, int month, int day){
        year_ = year;
        month_ = month;
        day_ = day;
    }

    void AddDay(int inc){
        day_ += inc;
        while(day_ > GetDaysInMonth(year_, month_)){
            day_ -= GetDaysInMonth(year_, month_);
            month_++;
            if (month_ > 12){ 
                month_ = 1;
                year_++;
            }
        }
    }

    void AddMonth(int inc){
        month_ += inc;
        while(month_ > 12){
            month_ -= 12;
            year_++;
        }
    }

    void AddYear(int inc){
        year_ += inc;
    }

    void ShowDate(){
        cout << year_ << " " << (month_ < 10 ? "0" : "") << month_ << " "
            << (day_ < 10 ? "0" : "") << day_ << endl;
    }
};

int main(){
    Date date;

    int year, month, day, inc;
    cout << "첫 번째 입력 (YYYY MM DD): ";
    cin >> year >> month >> day;
    date.SetDate(year, month, day);

    cout << "두 번째 입력 (추가할 일수): ";
    cin >> inc;

    date.AddDay(inc);

    cout << "출력: ";
    date.ShowDate();
}