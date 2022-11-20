#ifndef GAMEL_H
#define GAMEL_H

#include "blocks.h"

class gamel: public dot, public heap
{
public:
    gamel();
    void letsplay();
    void end();
private:
    dot a;
    heap b;
};

#endif // GAMEL_H
