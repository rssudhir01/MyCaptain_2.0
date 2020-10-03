#include<iostream>
using namespace std;

class time
{
    private :
        int hour;
        int minutes;
        int second;
    public :
        displaytime();
        calculatesec();
};

time :: displaytime()
{
    cout << "Hour : ";
    cin >> hour;
    cout << "Minutes : ";
    cin >> minutes;
    cout << "Second : ";
    cin >> second;

    cout << "The time is = " << hour << ":" << minutes << ":" << second;
}

time :: calculatesec()
{
    int total;
    hour = hour * 3600;
    minutes = minutes * 60;
    total = hour + minutes + second;

    cout << "\nTime in total seconds : " << total << " seconds";
}

main()
{
    time t1;
    t1.displaytime();
    t1.calculatesec();
}
