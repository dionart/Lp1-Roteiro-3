#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException()throw()
{
    //ctor
}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException()throw()
{

}

std::string FuncionarioNaoExisteException::what()
{
    return error;
}
