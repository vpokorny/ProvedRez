/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/07/2016 10:52:38 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include "cstdlib"
#include "mesh.h"
#include "PLT.h"

using namespace std;

int main (int argc, char *argv[])
{

    PLT plt;
    Mesh mesh = plt.PLTNactiSoubor(argc, argv);

    return 0;
}
