#pragma once

#include <iostream>
#include <string>
#include <vector>

namespace dvcs::App {

  enum class ReturnStatus {
    Ok = 0,
    ErrorKnown = 1,
    ErrorUnknown = 2
  };

}
