#include "Video.hpp"

Video::Video(string nom, string gene, int cali, int ano, int dura)
    : nombreVideo(nom), genero(gene), calificacion(cali), anioLanzamiento(ano), duracion(dura) {}

void Video::setNombreVideo(string nom) { nombreVideo = nom; }
string Video::getNombreVideo() const { return nombreVideo; }

void Video::setGenero(string gen) { genero = gen; }
string Video::getGenero() const { return genero; }

void Video::setCalificacion(int cali) { calificacion = cali; }
int Video::getCalificacion() const { return calificacion; }

void Video::setAnioLanzamiento(int ano) { anioLanzamiento = ano; }
int Video::getAnioLanzamiento() const { return anioLanzamiento; }

void Video::setDuracion(int dura) { duracion = dura; }
int Video::getDuracion() const { return duracion; }
