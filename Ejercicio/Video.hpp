#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <iostream>

using namespace std;

class Video {
public:
    Video(string nom, string gene, int cali, int ano, int dura);
    virtual ~Video() {}

    void setNombreVideo(string nom);
    string getNombreVideo() const;

    void setGenero(string gen);
    string getGenero() const;

    void setCalificacion(int cali);
    int getCalificacion() const;

    void setAnioLanzamiento(int ano);
    int getAnioLanzamiento() const;

    void setDuracion(int dura);
    int getDuracion() const;

    virtual void muestraDatos() const = 0; // Método virtual puro

protected:
    string nombreVideo;
    string genero;
    int calificacion;
    int anioLanzamiento;
    int duracion;
};

#endif
