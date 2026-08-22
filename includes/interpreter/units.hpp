#ifndef BYTES_UNITS_HPP
#define BYTES_UNITS_HPP

namespace Dairyshake::BytesUnits {
	constexpr unsigned long long operator"" _kb(unsigned long long v) { return v * 1024; };
	constexpr unsigned long long operator"" _mb(unsigned long long v) { return v * 1_kb; };
	constexpr unsigned long long operator"" _gb(unsigned long long v) { return v * 1_mb; };
}

#endif