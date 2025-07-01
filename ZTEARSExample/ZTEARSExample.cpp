/**
 * \brief example of ZTEARS usage
 * \author dovezp (github.com/dovezp)
 * \version 26/APR/2025
 * \license Apache License 2.0
 */

#include <string>
#include <cstdlib>
#include <iostream>

#include "../ZTEARS/ZTEARS.h"
#include "../ZTEARS/ZBADTEARS.h"


void main()
{

    utilities::ztears<int> int_trs;
    int int_encoded = int_trs.encrypt(0x100);
    std::cout << "0x100 == 0x" << std::hex << int_trs.decrypt(int_encoded) << std::endl;

    utilities::zbadtears<uint32_t> uint_trs;
    uint32_t uint_encoded = uint_trs.encrypt(0x1A1);
    std::cout << "0x1a1 == 0x" << std::hex << uint_trs.decrypt(uint_encoded) << std::endl;

    system("pause");
}
