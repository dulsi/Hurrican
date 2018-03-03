#ifndef _TRIGGER_TUBE_H
#define _TRIGGER_TUBE_H

#include "GegnerClass.hpp"
#include "Gegner_Stuff.hpp"

class GegnerTube : public GegnerClass
{
private :
    float	SinOff;
public :

    GegnerTube(int  Wert1, int Wert2,					// Konstruktor
               bool Light);
    void GegnerExplode (void);							// Gegner explodiert
    void DoKI		   (void);							// Gegner individuell mit seiner eigenen kleinen KI bewegen
    void DoDraw		   (void);							// Zeichnen
};

#endif