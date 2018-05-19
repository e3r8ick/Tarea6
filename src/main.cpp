/**
 * Copyright (C) 2018
 * Área Académica de Ingeniería en Computadoras, TEC, Costa Rica
 *
 * This file is part of the CE3102 Numerical Analysis lecture at TEC
 *
 * @Author: 
 * @Date  : 24.02.2018
 */

#include <cstdlib>
#include "RandomSymmetricSqr.hpp"
int main(int ac, char *av[])
{
  anpi::Matrix<double> M;
  M = anpi::randomSymmetricSqr<double>(3);
  return 0;
}