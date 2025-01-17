#include <iostream>
#include "Pelicula.hpp"
#include "Serie.hpp"

using namespace std;

void mostrarMenu();
void consultarPorTipo(Video* videos[], int cantidad);
void calificarVideo(Video* videos[], int cantidad);

int main () {

    Pelicula pelicula1("Wicked", "Musical", 5, 2024, 125, "Jon M. Chu");
    Pelicula pelicula2("El Rey León", "Aventura", 5, 1994, 88, "Roger Allers");

    Serie serie1("Friends", "Comedia", 5, 1994, 22, 24, 10);
    Serie serie2("Hora de Aventura", "Aventura", 5, 2010, 11, 12, 9);
    Serie serie3("The Office", "Comedia", 9, 2005, 22, 24, 8);

    Video* videos[5] = { &pelicula1, &pelicula2, &serie1, &serie2, &serie3};

    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "\nLista de videos:" << endl;
                for (int i = 0; i < 5; i++) {
                    cout << "\nVideo " << i + 1 << ":" << endl;
                    videos[i]->muestraDatos();
                }
                break;
            case 2:
                consultarPorTipo(videos, 5);
                break;
            case 3:
                calificarVideo(videos, 5);
                break;
            case 4:
                cout << "salir" << endl;
                break;
            default:
                cout << "invalido" << endl;
        }
    } while (opcion != 4);

    return 0;
}

void mostrarMenu() {
    cout << "\nmenu:\n";
    cout << "1 ver videos\n";
    cout << "2 buscar por tipo\n";
    cout << "3 calificar video\n";
    cout << "4 salir\n";
    cout << "seleccionar: ";
}

void consultarPorTipo(Video* videos[], int cantidad) {
    string tipo;
    cout << "\ningrese el tipo de video: ";
    cin >> tipo;

    cout << "\nVideos de tipo " << tipo << ":" << endl;
    for (int i = 0; i < cantidad; i++) {
        if (videos[i]->getTipo() == tipo) {
            videos[i]->muestraDatos();
        }
    }
}

void calificarVideo(Video* videos[], int cantidad) {
    int indice;
    int nuevaCalificacion;

    cout << "\ncual numero de video cambiaras: (1-" << cantidad << "): ";
    cin >> indice;
    if (indice < 1 || indice > cantidad) {
        cout << "invalido" << endl;
        return;
    }

    cout << "ingresa la nueva calificacion hasta el 10: ";
    cin >> nuevaCalificacion;
    if (nuevaCalificacion < 1 || nuevaCalificacion > 10) {
        cout << "calificacion ivanlida" << endl;
        return;
    }

    videos[indice - 1]->calificaVideo(nuevaCalificacion);
    cout << "Calificación actualizada." << endl;
}
