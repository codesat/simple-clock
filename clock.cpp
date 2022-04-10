#include <bits/stdc++.h>
#include <windows.h>
#include<ctime> // for current time

/*
The time() function in c++ returns the current calendar time as an object of
type time_t   and time() accept the argument as pointer of time_t that is address.

The localtime() function in c++ converts the given tcalendar time to local time.

tm* localtime(const time_t* time_ptr);

accept the argument of time_t*  pointer type

struct tm{
    tm_hour;
    tm_min;
    tm_sec;
};

*/

using namespace std;


int main(){
    int h,m,s,a,err;
    err=a=0;

    time_t  currenttime = time(0); // vraiable of time_t is t.  and time fucntion time()
    // converting into local time
    //here tm* type ka pointer is tmp
    tm*  tmp = localtime(&currenttime);


cout<<err;
    while(err==0){

        h=tmp->tm_hour; // storing hour in h
        m=tmp->tm_min;
        s=tmp->tm_sec;

        if(h<24&&m<60&&s<60){
            err++;
        }
        else{
            system("cls");
        }

    }

    while(a==0){
        system("cls");
        if(s<10){
             cout<<h<<":"<<m<<":"<<"0"+s<<endl;

        }else{
               cout<<h<<":"<<m<<":"<<s<<endl;

        }

        Sleep(1000);
        s++;
        if(s>59){
            s=0;
            m++;
        }
        if(m>59){
            m=0;
            h++;
        }
        if(h>24){
            h=0;
        }


    }


    return 0;
}