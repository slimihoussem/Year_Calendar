#include <iostream>
#include <string>
#include <iomanip>

int main()
{
int year;
int firstDay;
int Days;
int t=7;
int y;
std::string month [] = {"january", "february", "march", "april","may", "june", "july", "august", "september", "october","november", "december"};
std::cout << "Enter year: " << std::endl;
std::cin >> year;
std::cout << "Enter the first day of the year [1: Monday ..., 7: Sunday]: " << std::endl;
std::cin >> firstDay;

std::cout << "Calendar for " << year << std::endl;
for(auto M : month )
{
    y=firstDay;
    if(M == "january" || M == "march" || M == "may" || M == "july" || M == "august" || M == "october" || M == "december" )
    {
        Days = 31;
    } else if (M == "february" )
    {
        if(year%4==0)
        {
            Days = 29;
        } else
        {
            Days = 28;
        }
    } else
    {
        Days =30;
    }
    
    std::cout <<"-- " << M << " "<< year << " --" << std::endl;
    std::cout << std::setw(5) << "Mon" << std::setw(5) << "Tue"<< std::setw(5) << "Wed"<< std::setw(5) << "Thu"<< std::setw(5) << "Fri"<< std::setw(5) << "Sat"<< std::setw(5) << "Sun" << std::endl;
            for (int j = 0; j <y; j++)
        {
            std::cout << ""<<std::setw(5) ;
        }
    for (int i=1; i<=Days; ++i)
    {
       std::cout << std::setw(5)<< i ;
       firstDay++;
        if((y+i-1)%t==0)
        {
            std::cout << "" << std::endl;
            y=0;
            t=7+i-1;
            firstDay=1;
        }

    }
           std::cout << "" << std::endl;
           t=7;
           
}

return 0;
}
