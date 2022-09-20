#include <algorithm>

#include "observer_hexadecimal.h"
#include "subject_concrete.h"

observer_hexadecimal::observer_hexadecimal()
{
}

observer_hexadecimal::~observer_hexadecimal()
{
}

void observer_hexadecimal::update(subject * sub)
{
    if (subject_concrete * con = dynamic_cast<subject_concrete *>(sub))
    {
        int dec = con->get_decimal();
        printf("%-30s %d %s %x\n", "decimal to hexadecimal:", dec, "to", dec);
    }
}