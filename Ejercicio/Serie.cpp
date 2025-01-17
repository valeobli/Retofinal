#include "Serie.hpp"
#include <iostream>

Serie::Serie(string nom, string gene, int cali, int ano, int dura, int episodios, int temporadas)
    : Video("Serie", nom, gene, cali, ano, dura), numEpisodios(episodios), numTemporadas(temporadas) {}

void Serie::setNumEpisodios(int episodios) {
    numEpisodios = episodios;
}

int Serie::getNumEpisodios() {
    return numEpisodios;
}

void Serie::setNumTemporadas(int temporadas) {
    numTemporadas = temporadas;
}

int Serie::getNumTemporadas() {
    return numTemporadas;
}

void Serie::muestraDatos() {
    Video::muestraDatos();
    cout << "Cantidad de temporadas: " << numTemporadas << endl;
    cout << "Cantidad de episodios: " << numEpisodios << endl;
}

// Implementación del método getTipo para "Serie"
string Serie::getTipo() const {
    return "Serie";
}
