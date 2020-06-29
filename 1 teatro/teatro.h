#ifndef TEATRO_H_INCLUDED
#define TEATRO_H_INCLUDED

struct Lugares
{
    bool ocupado;

    Lugares(int vi)
    {
        ocupado=false;
    }

    void cadeiras()
    {
        ocupado=true;
    }
};
#endif // TEATRO_H_INCLUDED
