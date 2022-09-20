#include <algorithm>

#include "observer_octal.h"
#include "subject_concrete.h"

observer_octal::observer_octal()
{
}

observer_octal::~observer_octal()
{
}

void observer_octal::update(subject * sub)
{
    if (subject_concrete * con = dynamic_cast<subject_concrete *>(sub))
    {
        int dec = con->get_decimal();
        printf("%-30s %d %s %o\n", "decimal to octal:", dec, "to", dec);
    }
}