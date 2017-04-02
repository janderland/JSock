#ifndef Endpoint_h
#define Endpoint_h

#include <vector>

namespace jsock {

class Endpoint {
	public:
		virtual void write(const std::vector<unsigned char>&) = 0;
		virtual std::vector<unsigned char> read() = 0;
};

} // namespace jsock

#endif // Endpoint_h
