#pragma once

#include <cstdint>
#include <string>

namespace Core {
	struct Int16 { int16_t value; };
    struct Int32 { int32_t value; };
    struct Int64 { int64_t value; };
    struct Float { float value; };
    struct Double { double value; };
    struct String { std::string value; };
    struct Character { char32_t value; };
}