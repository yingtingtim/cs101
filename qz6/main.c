#include <string>
#include <iostream>

using namespace std;

class Clock {
    protected:
        int Hour ;
        int minute ;
        int second ;
        string meridian ;
    public:
        Clock (int h, int m, int s, string me) {
            Hour = h ;
            minute = m ;
            second = s ;
            meridian = me ;
        };
        void display (void) {
            cout << Hour << ":" << minute << ":" << second << " " << meridian << endl ;
        }    
};

class StandardClock: Clock {
    public:
        StandardClock (int h, int m, int s, string me) : Clock(h, m, s, me) {
            Hour = h ;
            minute = m ;
            second = s ;
            meridian = me ;
        };
        void display (void) {
            if (meridian[0] == 'A') {
                cout << " 上午 " << Hour << ":" << minute << ":" << second << endl ;
            } else if (meridian[0] == 'P') {
                cout << " 下午 " << Hour << ":" << minute << ":" << second << endl ;
            }
        }
};

class MilitaryClock: Clock {
    public:
        MilitaryClock (int h, int m, int s, string me) : Clock(h, m, s, me) {
            minute = m ;
            second = s ;
            if (me == "PM") {
                Hour += 12 ;
            }
        };
        void display (void) {
            cout << Hour << ":" << minute << ":" << second << endl ;
        }
    
};

int main() {
    Clock cc(10, 25, 43, "AM");
    StandardClock sc(10, 25, 43, "PM");
    MilitaryClock mc(10, 25, 43, "PM");
    cc.display();
    sc.display();
    mc.display();
    

    return 0;
}
