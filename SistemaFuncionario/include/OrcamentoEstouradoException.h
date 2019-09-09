#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H
#include <iostream>

class OrcamentoEstouradoException:public std::exception
{
    public:
        OrcamentoEstouradoException()throw();
        virtual ~OrcamentoEstouradoException() throw();
        virtual std::string what();

    private:
        std::string error = "Orcamento estourado";
};

#endif // ORCAMENTOESTOURADOEXCEPTION_H
