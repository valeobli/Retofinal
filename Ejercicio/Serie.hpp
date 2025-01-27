#ifndef SERIE_HPP
#define SERIE_HPP

#include "Video.hpp"

class Serie : public Video {
private:
    int cantEpisodios;

public:
    Serie(string nom, string gene, int cali, int ano, int dura, int episodios);
    void setCantEpisodios(int episodios);
    int getCantEpisodios() const;

    void muestraDatos() const override;
};

#endif
