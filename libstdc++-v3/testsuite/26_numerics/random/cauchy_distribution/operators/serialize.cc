// { dg-do run { target c++11 } }
// { dg-require-cstdint "" }
//
// 2009-08-14  Edward M. Smith-Rowland  <3dw4rd@verizon.net>
//
// Copyright (C) 2009-2020 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// 26.4.4.1 class template discard_block_engine [rand.adapt.disc]
// 26.4.2.3 concept RandomNumberEngineAdaptor [rand.concept.adapt]

#include <random>
#include <sstream>

void
test01()
{
  std::stringstream str;
  std::cauchy_distribution<double> u(5.0, 2.0), v;
  std::minstd_rand0 rng;

  u(rng); // advance
  str << u;

  str >> v;
}

int main()
{
  test01();
  return 0;
}
