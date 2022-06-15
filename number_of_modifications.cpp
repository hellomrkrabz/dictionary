#include "number_of_modifications.h"

number_of_modifications::number_of_modifications(int _modi)
{
    modifications = 0;
}

void number_of_modifications::operator+=(int a)
{
    modifications+=a;
}
