#ifndef VERTICE_H
#define VERTICE_H


class Vertice
{
    public:
        Vertice();
        virtual ~Vertice();
        int getNumero();
        void setNumero(int);
        bool getFoiVisitado();
        void setFoiVisitado(bool);
    protected:
    private:
        int numero;
        bool foiVisitado;
};

#endif // VERTICE_H
