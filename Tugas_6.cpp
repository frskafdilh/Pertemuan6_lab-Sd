#include <iostream>
#include <string>
using namespace std;

int main() {
    string data[100];
    int n;

    cout << "Masukkan jumlah kata: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Kata ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << "Proses Insertion Sort:" << endl;

    for (int i = 1; i < n; i++) {
        string key = data[i];
        int j = i - 1;

        while (j >= 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }

        data[j + 1] = key;

        cout << "Langkah " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << data[k] << " ";
        }
        cout << endl;
    }

    cout << "Hasil pengurutan A-Z: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}
