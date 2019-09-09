#ifndef OFTAMOLOGISTA_H
#define OFTAMOLOGISTA_H
#include "Medico.h"

class Oftamologista : public Medico{

    private:
        std::string especializacao = "oftamologista";
    public:
        Oftamologista(std::string, double, double);
        virtual void realizarOperacao();
        virtual std::string getEspecializacao();
};

#endif // OFTAMOLOGISTA_H
