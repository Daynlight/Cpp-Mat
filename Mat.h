#pragma once
#include <string>

namespace Mat {
	template<typename T>
	struct Vec2 {
		T x = (T)0;
		T y = (T)0;

		Vec2() {};
		Vec2(T a): x(a),y(a) {};
		Vec2(T x, T y) : x(x), y(y) {};

		// Vec to String
		const std::string const VTS() {
			return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
		}
	};

	template<typename T>
	struct Vec3 {
		T x = (T)0;
		T y = (T)0;
		T z = (T)0;

		Vec3() {};
		Vec3(T a) : x(a), y(a), z(a) {};
		Vec3(T x, T y) : x(x), y(y) {};
		Vec3(T x, T y, T z) : x(x), y(y), z(z) {};

		// Vec to String
		const std::string const VTS() {
			return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + std::to_string(z) + ")";
		}
	};

	template<typename T>
	struct Vec4 {
		T x = (T)0;
		T y = (T)0;
		T z = (T)0;
		T h = (T)0;

		Vec4() {};
		Vec4(T a) : x(a), y(a), z(a), h(a) {};
		Vec4(T x, T y) : x(x), y(y) {};
		Vec4(T x, T y, T z) : x(x), y(y), z(z) {};
		Vec4(T x, T y, T z, T h) : x(x), y(y), z(z), h(h) {};

		// Vec to String
		const std::string const VTS() {
			return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + 
						 std::to_string(z) + ", " + std::to_string(h) + ")";
		}
	};

}