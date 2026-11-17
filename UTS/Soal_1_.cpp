#include <iostream>
using namespace std;

int main() {
    int nilai [5] [4] = {
        {80, 70, 81, 90},
        {70, 50, 20, 90},
        {30, 40, 50, 30},
        {80, 75, 90, 85},
        {70, 60, 90, 89}
    
    };
    float rata;


    for (int i = 0; i <5; i++) {
        cout <<"Mahasiswa " << i+1 << ": ";
        for (int j = 0; j<4; j++ ) {
            cout <<nilai[i] [j] << " ";
        }
        cout <<endl;

    }
    rata = 75;
    cout << "Rata-rata = " << rata << endl;
    return 0;
}