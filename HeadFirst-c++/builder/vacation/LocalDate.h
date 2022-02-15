#ifndef LOCALDATE_H
#define LOCALDATE_H
#include <string>
using std::string;
class LocalDate{
public:
    LocalDate(){};
    LocalDate(int year,int month,int day){
        this->year=year;
        this->month=month;
        this->day=day;
    };
    string toString(){
        return "year: "+std::to_string(year)+" month:"+std::to_string(month)+" day:"+std::to_string(day);
    }
private:
    int year,month,day;
};

#endif // LOCALDATE_H
