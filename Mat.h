#pragma once
#include <string>
#include <math.h>

//[TODO]
// Matrixes
// Oprators for Matrixes
// VEC * Matrix

namespace Mat {
	template<typename T>
	struct Vec2 {
		T x = (T)0;
		T y = (T)0;

		Vec2() {};
		Vec2(T a): x(a),y(a) {};
		Vec2(T x, T y) : x(x), y(y) {};

		bool operator ==(Vec2 Vec) {
			return (x == Vec.x && y == Vec.y);
		}
		bool operator !=(Vec2 Vec) {
			return !(this->operator==(Vec));
		}
		bool operator >(Vec2 Vec) {
			return (Distance() > Vec.Distance());
		}
		bool operator >=(Vec2 Vec) {
			return (Distance() >= Vec.Distance());
		}
		bool operator <(Vec2 Vec) {
			return (Distance() < Vec.Distance());
		}
		bool operator <=(Vec2 Vec) {
			return (Distance() <= Vec.Distance());
		}
		void operator +=(Vec2 Vec) {
			x = x + Vec.x;
			y = y + Vec.y;
		}
		void operator -=(Vec2 Vec) {
			x = x - Vec.x;
			y = y - Vec.y;
		}
		void operator *=(Vec2 Vec) {
			x = x * Vec.x;
			y = y * Vec.y;
		}
		void operator /=(Vec2 Vec) {
			x = x / Vec.x;
			y = y / Vec.y;
		}
		void operator %=(Vec2 Vec) {
			x = x % Vec.x;
			y = y % Vec.y;
		}
		Vec2 operator +(Vec2 Vec) {
			T xR = x + Vec.x;
			T yR = y + Vec.y;
			return Vec2(xR, yR);
		}
		Vec2 operator -(Vec2 Vec) {
			T xR = x - Vec.x;
			T yR = y - Vec.y;
			return Vec2(xR, yR);
		}
		Vec2 operator *(Vec2 Vec) {
			T xR = x * Vec.x;
			T yR = y * Vec.y;
			return Vec2(xR, yR);
		}
		Vec2 operator /(Vec2 Vec) {
			T xR = x / Vec.x;
			T yR = y / Vec.y;
			return Vec2(xR, yR);
		}
		Vec2 operator %(Vec2 Vec) {
			T xR = x % Vec.x;
			T yR = y % Vec.y;
			return Vec2(xR, yR);
		}

		double Distance(Vec2 Vec = 0) {
			return sqrt(pow(x - Vec.x, 2) + pow(y - Vec.y, 2));
		}
		
		// Vec to String
		const std::string const str() {
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

		bool operator ==(Vec3 Vec) {
			return (x == Vec.x && y == Vec.y && z == Vec.z);
		}
		bool operator !=(Vec3 Vec) {
			return !(this->operator==(Vec));
		}
		bool operator >(Vec3 Vec) {
			return (Distance() > Vec.Distance());
		}
		bool operator >=(Vec3 Vec) {
			return (Distance() >= Vec.Distance());
		}
		bool operator <(Vec3 Vec) {
			return (Distance() < Vec.Distance());
		}
		bool operator <=(Vec3 Vec) {
			return (Distance() <= Vec.Distance());
		}
		void operator +=(Vec3 Vec) {
			x = x + Vec.x;
			y = y + Vec.y;
			z = z + Vec.z;
		}
		void operator -=(Vec3 Vec) {
			x = x - Vec.x;
			y = y - Vec.y;
			z = z - Vec.z;
		}
		void operator *=(Vec3 Vec) {
			x = x * Vec.x;
			y = y * Vec.y;
			z = z * Vec.z;
		}
		void operator /=(Vec3 Vec) {
			x = x / Vec.x;
			y = y / Vec.y;
			z = z / Vec.z;
		}
		void operator %=(Vec3 Vec) {
			x = x % Vec.x;
			y = y % Vec.y;
			z = z % Vec.z;
		}
		Vec3 operator +(Vec3 Vec) {
			T xR = x + Vec.x;
			T yR = y + Vec.y;
			T zR = z + Vec.z;
			return Vec3(xR, yR, zR);
		}
		Vec3 operator -(Vec3 Vec) {
			T xR = x - Vec.x;
			T yR = y - Vec.y;
			T zR = z - Vec.z;
			return Vec3(xR, yR, zR);
		}
		Vec3 operator *(Vec3 Vec) {
			T xR = x * Vec.x;
			T yR = y * Vec.y;
			T zR = z * Vec.z;
			return Vec3(xR, yR, zR);
		}
		Vec3 operator /(Vec3 Vec) {
			T xR = x / Vec.x;
			T yR = y / Vec.y;
			T zR = z / Vec.z;
			return Vec3(xR, yR, zR);
		}
		Vec3 operator %(Vec3 Vec) {
			T xR = x % Vec.x;
			T yR = y % Vec.y;
			T zR = z % Vec.z;
			return Vec3(xR, yR, zR);
		}

		double Distance(Vec3 Vec = 0) {
			return sqrt(pow(x - Vec.x, 2) + pow(y - Vec.y, 2) + pow(z - Vec.z, 2));
		}

		// Vec to String
		const std::string const str() {
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

		bool operator ==(Vec4 Vec) {
			return (x == Vec.x && y == Vec.y && z == Vec.z && h == Vec.h);
		}
		bool operator !=(Vec4 Vec) {
			return !(this->operator==(Vec));
		}
		bool operator >(Vec4 Vec) {
			return (Distance() > Vec.Distance());
		}
		bool operator >=(Vec4 Vec) {
			return (Distance() >= Vec.Distance());
		}
		bool operator <(Vec4 Vec) {
			return (Distance() < Vec.Distance());
		}
		bool operator <=(Vec4 Vec) {
			return (Distance() <= Vec.Distance());
		}
		void operator +=(Vec4 Vec) {
			x = x + Vec.x;
			y = y + Vec.y;
			z = z + Vec.z;
			h = h + Vec.h;
		}
		void operator -=(Vec4 Vec) {
			x = x - Vec.x;
			y = y - Vec.y;
			z = z - Vec.z;
			h = h - Vec.h;
		}
		void operator *=(Vec4 Vec) {
			x = x * Vec.x;
			y = y * Vec.y;
			z = z * Vec.z;
			h = h * Vec.h;
		}
		void operator /=(Vec4 Vec) {
			x = x / Vec.x;
			y = y / Vec.y;
			z = z / Vec.z;
			h = h / Vec.h;
		}
		void operator %=(Vec4 Vec) {
			x = x % Vec.x;
			y = y % Vec.y;
			z = z % Vec.z;
			h = h % Vec.h;
		}
		Vec4 operator +(Vec4 Vec) {
			T xR = x + Vec.x;
			T yR = y + Vec.y;
			T zR = z + Vec.z;
			T hR = h + Vec.h;
			return Vec4(xR, yR, zR, hR);
		}
		Vec4 operator -(Vec4 Vec) {
			T xR = x - Vec.x;
			T yR = y - Vec.y;
			T zR = z - Vec.z;
			T hR = h - Vec.h;
			return Vec4(xR, yR, zR, hR);
		}
		Vec4 operator *(Vec4 Vec) {
			T xR = x * Vec.x;
			T yR = y * Vec.y;
			T zR = z * Vec.z;
			T hR = h * Vec.h;
			return Vec4(xR, yR, zR, hR);
		}
		Vec4 operator /(Vec4 Vec) {
			T xR = x / Vec.x;
			T yR = y / Vec.y;
			T zR = z / Vec.z;
			T hR = h / Vec.h;
			return Vec4(xR, yR, zR, hR);
		}
		Vec4 operator %(Vec4 Vec) {
			T xR = x % Vec.x;
			T yR = y % Vec.y;
			T zR = z % Vec.z;
			T hR = h % Vec.h;
			return Vec4(xR, yR, zR, hR);
		}

		double Distance(Vec4 Vec = 0) {
			return sqrt(pow(x - Vec.x, 2) + pow(y - Vec.y, 2) + pow(z - Vec.z, 2) + pow(h - Vec.h, 2));
		}

		// Vec to String
		const std::string const str() {
			return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " + 
						 std::to_string(z) + ", " + std::to_string(h) + ")";
		}
	};

}