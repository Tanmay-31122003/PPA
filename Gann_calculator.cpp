#include<iostream>
#include<cmath>
using namespace std;

class Resistance {
public:
    float Deg[9] = {0, 0.125, 0.25, 0.375, 0.5, 0.625, 0.75, 0.875, 1};
    float Resistance[9];

    void Cal_Resistance(float CP) 
    {
        for (int i = 0; i < 9; i++) 
        {
            float Res = pow(sqrt(CP) + Deg[i], 2);
            Resistance[i] = Res;
        }
    }
};

int main() {
    Resistance robj;
    float CP;
    cout << "Enter the closing price: ";
    cin >> CP;

    robj.Cal_Resistance(CP);

    cout << "Resistance values: \n";
    for (int i = 0; i < 9; i++) {
        cout << robj.Resistance[i] << "\n";
    }
    cout << endl;

    return 0;
}
