#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int jmlSimpulFahri_2311102024;
    cout << "Silahkan masukkan jumlah simpul = ";
    cin >> jmlSimpulFahri_2311102024;

    vector<string> namaSimpulFahri_2311102024(jmlSimpulFahri_2311102024);
    vector<vector<int>> bobot(jmlSimpulFahri_2311102024, vector<int>(jmlSimpulFahri_2311102024));

    for (int i = 0; i < jmlSimpulFahri_2311102024; ++i) {
        cout << "Silahkan masukkan nama simpul " << i + 1 << " = ";
        cin >> namaSimpulFahri_2311102024[i];
    }

    cout << "Silahkan masukkan bobot antar simpul\n";

    for (int i = 0; i < jmlSimpulFahri_2311102024; ++i) {
        for (int j = 0; j < jmlSimpulFahri_2311102024; ++j) {
            cout << namaSimpulFahri_2311102024[i] << "-->" << namaSimpulFahri_2311102024[j] << " = ";
            cin >> bobot[i][j];
        }
    }

    cout << "\n\t";
    for (int i = 0; i < jmlSimpulFahri_2311102024; ++i) {
        cout << namaSimpulFahri_2311102024[i] << "\t";
    }
    cout << "\n";

    for (int i = 0; i < jmlSimpulFahri_2311102024; ++i) {
        cout << namaSimpulFahri_2311102024[i] << "\t";
        for (int j = 0; j < jmlSimpulFahri_2311102024; ++j) {
            cout << bobot[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}