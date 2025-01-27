#include <iostream>
#include <list>
#include "Video.hpp"
#include "Pelicula.hpp"
#include "Serie.hpp"

using namespace std;

int main() {
    list<Video*> listaVideos;


    Pelicula* pelicula1 = new Pelicula("Wicked", "Musical", 5, 2024, 125, 3);
    Pelicula* pelicula2 = new Pelicula("El Rey León", "Aventura", 5, 1994, 88, 2);
    Pelicula* pelicula3 = new Pelicula("La Monja", "Terror", 7, 2018, 96, 3);


    Serie* serie1 = new Serie("Friends", "Comedia", 5, 1994, 22, 24);
    Serie* serie2 = new Serie("Hora de Aventura", "Aventura", 5, 2010, 11, 12);


    listaVideos.push_back(pelicula1);
    listaVideos.push_back(pelicula2);
    listaVideos.push_back(pelicula3);
    listaVideos.push_back(serie1);
    listaVideos.push_back(serie2);


    cout << "\n Videos \n";
    for (const auto& video : listaVideos) {
        video->muestraDatos();
    }


    for (const auto& video : listaVideos) {
        delete video;
    }

    return 0;
}
