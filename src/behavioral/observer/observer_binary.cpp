#include <algorithm>

#include "observer_binary.h"
#include "subject_concrete.h"

observer_binary::observer_binary()
{
}

observer_binary::~observer_binary()
{
}

void observer_binary::update(subject * sub)
{
    if (subject_concrete * con = dynamic_cast<subject_concrete *>(sub))
    {
        int dec = con->get_decimal();
        while (dec)
        {
            m_bin.push_back((dec % 2) ? '1' : '0');
            dec >>= 1;
        }
        std::reverse(m_bin.begin(), m_bin.end());
        printf("%-30s %d %s %s\n", "decimal to binary:", con->get_decimal(), "to", m_bin.c_str());
    }
}