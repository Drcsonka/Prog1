#ifndef SEJTSZAL_H
#define SEJTSZAL_H

#include <QThread>
#include "sejtablak.h"

class SejtAblak;

class SejtSzal : public QThread
{
    Q_OBJECT

public:
    SejtSzal(bool ***racsok, int szelesseg, int magassag,
             int varakozas, SejtAblak *sejtAblak);
    ~SejtSzal();
    void run();

protected:
    bool ***racsok;
    int szelesseg, magassag;
    // Megmutatja melyik r�cs az aktu�lis: [r�csIndex][][]
    int racsIndex;
    // A sejtt�r k�t egym�st k�vet� t_n �s t_n+1 diszkr�t id�pillanata
    // k�z�tti val�s id�.
    int varakozas;
    void idoFejlodes();
    int szomszedokSzama(bool **racs,
                        int sor, int oszlop, bool allapot);
    SejtAblak* sejtAblak;

};

#endif // SEJTSZAL_H