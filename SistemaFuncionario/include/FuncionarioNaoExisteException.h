#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <exception>
#include <iostream>

class FuncionarioNaoExisteException: public std::exception
{
    public:
        FuncionarioNaoExisteException() throw();
        virtual ~FuncionarioNaoExisteException() throw();
        virtual std::string what();

    private:
        std::string error = "Funcionario nao existe";
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
