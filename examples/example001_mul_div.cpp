///////////////////////////////////////////////////////////////////
//  Copyright Christopher Kormanyos 2018.                        //
//  Distributed under the Boost Software License,                //
//  Version 1.0. (See accompanying file LICENSE_1_0.txt          //
//  or copy at http://www.boost.org/LICENSE_1_0.txt)             //
///////////////////////////////////////////////////////////////////

#include <cstdint>
#include <iomanip>
#include <iostream>

#include "generic_template_uintwide_t.h"

namespace local
{
  using uint256_t = wide_integer::generic_template::uint256_t;
}

int main()
{
  // Construction from string. Other constructors are available from built-in types.
  const local::uint256_t a("0xF4DF741DE58BCB2F37F18372026EF9CBCFC456CB80AF54D53BDEED78410065DE");
  const local::uint256_t b("0x166D63E0202B3D90ECCEAA046341AB504658F55B974A7FD63733ECF89DD0DF75");

  // Elementary arithmetic operations.
  const local::uint256_t c = (a * b);
  const local::uint256_t d = (a / b);

  // Logical comparison.
  const bool result_is_ok = (   (c == "0xE491A360C57EB4306C61F9A04F7F7D99BE3676AAD2D71C5592D5AE70F84AF076")
                             && (d == "0xA"));

  // String output.
  std::cout << std::hex << std::uppercase << c << std::endl;
  std::cout << std::hex << std::uppercase << d << std::endl;

  // Visualize the result.
  std::cout << "result_is_ok: " << std::boolalpha << result_is_ok << std::endl;
}
