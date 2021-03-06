#pragma once

#include "Name.h"
#include <string>
#include <vector>

namespace jsock {

class Endpoint {
public:
  virtual void write(const std::vector<unsigned char> &) const = 0;
  virtual std::vector<unsigned char> read() const = 0;
  virtual Name getRemoteName() const = 0;
  virtual Name getLocalName() const = 0;
};

} // namespace jsock
