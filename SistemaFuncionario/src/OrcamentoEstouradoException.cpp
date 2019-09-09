#include "OrcamentoEstouradoException.h"

OrcamentoEstouradoException::OrcamentoEstouradoException()throw()
{
    //ctor
}

OrcamentoEstouradoException::~OrcamentoEstouradoException()throw()
{

}

std::string OrcamentoEstouradoException::what()
{
    return error;
}
