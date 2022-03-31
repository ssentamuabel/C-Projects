#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    int ac = 32;

    while(true)
    {
        cout << "\nCharacter    Decimal     Hexadecimal\n\n";
        int upper;

        for(upper = ac + 20; ac < upper && ac < 256; ++ac)
            cout <<"    "<< (char)ac       // as character
                 <<setw(10)<<dec << ac
                 <<setw(10) << hex << ac << endl;
        if (upper >= 256) break;

        cout <<"\nGo on -> <return>, Stop -> <q> + <return>";
        char answer;
        cin.get(answer);
        if(answer == 'q'  || answer == 'Q')
            break;
        cin.sync();     //Clear input buffer

    }

    return 0;
}

