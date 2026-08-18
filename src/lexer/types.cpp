#include <cstdint>
#include <string>
#include <variant>

namespace Core {
	// --- Integer Types ---
	struct Int16 { int16_t value; };
	struct Int32 { int32_t value; };
	struct Int64 { int64_t value; };

	// --- Floating-Point Types ---
	struct Float { float value; };
	struct Double { double value; };
	
	// --- Text Types ---
	struct String { std::string value; };
	struct Character { char32_t value; };

	// --- Define ---
	using Types = std::variant<
		Core::Int16,
		Core::Int32,
		Core::Int64,
		Core::Float,
		Core::Double,
		Core::String,
		Core::Character,
	>;
}