#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int nyawa = 3, tebak;
    int nilai;
    int random;
    int rand();
    srand(time(NULL));
    int nilaimin = 10, nilaimax = 0;
    // int jarak = (nilaimax-nilaimin)+1;

    cout << "masukkan maksimal nilai (10-100) : "; // batasan nilai game
    cin >> nilai ;

    nilaimax = nilai;

    //    random = nilaimin + int(jarak*rand()/(RAND_MAX +1.0));
    random = nilaimin + (rand()%nilaimax)+1;
    // cout << random << endl;

    // mulai permainan
    cout << "Silahkan tebak nilai antara 0 sampai " <<nilai << endl;
    cout << " #cheat Ini adalah angka yang akan ditebak " <<random << endl;
        // looping
        while(nyawa>=0){
            cout << "masukkan tebakan anda : ";
            cin >> tebak ;
            if(tebak==random) {
                cout << "selamat anda benar" << endl;
                break;
            } else if(nyawa == 0) {
                cout << "nyawa anda habis \n" ;
                cout << "game over" ;
                break;
            }else if(tebak<random){
                cout << "tebakan anda telalu kecil" << endl;
                cout << "tebakan anda salah" << endl;
                cout << "nyawa " << nyawa << endl;
                nyawa=nyawa-1;
            } else if(tebak>random){
                cout << "tebakan anda telalu besar" << endl;
                cout << "tebakan anda salah" << endl;
                cout << "nyawa " << nyawa << endl;
                nyawa=nyawa-1;
                }
        }

    return 0;
}
