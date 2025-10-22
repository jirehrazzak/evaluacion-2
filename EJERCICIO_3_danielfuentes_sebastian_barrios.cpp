#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "¿numero de deportistas? ";
    cin >> n;

    vector<string> nombres(n);
    vector<double> pesos(n);

    
    for (int i = 0; i < n; i++) {
        cout << "Nombre del deportista " << (i+1) << ": ";
        cin >> nombres[i];
        cout << "Peso del deportista " << nombres[i] << ": ";
        cin >> pesos[i];
    }

   
    cout << "\nEstadisticas de deportistas y sus pesos::\n";
    for (int i = 0; i < n; i++) {
        cout << nombres[i] << " pesa " << pesos[i] << " kg\n";
    }

    
    double pesoMax = pesos[0];
    double pesoMin = pesos[0];
    string nombreMax = nombres[0];
    string nombreMin = nombres[0];
    double sumaPesos = 0;

    for (int i = 0; i < n; i++) {
        if (pesos[i] > pesoMax) {
            pesoMax = pesos[i];
            nombreMax = nombres[i];
        }
        if (pesos[i] < pesoMin) {
            pesoMin = pesos[i];
            nombreMin = nombres[i];
        }
        sumaPesos += pesos[i];
    }

    double promedio = sumaPesos / n;


    cout << "\nEl deportista con mas peso es:" << nombreMax << " con " << pesoMax << " kg." << endl;
    cout << "El deportista con el peso menos peso es: " << nombreMin << " con " << pesoMin << " kg." << endl;
    cout << "El promedio de peso del gym es:" << promedio << " kg." << endl;

    return 0;
}

