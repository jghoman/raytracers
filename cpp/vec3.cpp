#include "vec3.h"

inline vec3 operator+(const vec3 &v1, const vec3 &v2) {
  return vec3(v1.e[0] + v2.e[0], v1.e[1] + v2.e[1], v1.e[2] + v2.e[2]);
}

inline vec3 operator-(const vec3 &v1, const vec3 &v2) {
  return vec3(v1.e[0] - v2.e[0], v1.e[1] - v2.e[1], v1.e[2] - v2.e[2]);
}

inline vec3 operator*(const vec3 &v1, const vec3 &v2) {
  return vec3(v1.e[0] * v2.e[0], v1.e[1] * v2.e[1], v1.e[2] * v2.e[2]);
}

inline vec3 operator/(const vec3 &v1, const vec3 &v2) {
  return vec3(v1.e[0] / v2.e[0], v1.e[1] / v2.e[1], v1.e[2] / v2.e[2]);
}

inline vec3 operator*=(const vec3 &v1, const float t) {
  return vec3(v1.e[0] * t, v1.e[1] * t, v1.e[2] * t);
}

inline vec3 operator/=(const vec3 &v1, const float t) {
  return vec3(v1.e[0] / t, v1.e[1] / t, v1.e[2] /t);
}

inline vec3 operator/(const vec3 &v1, const float t) {
  return vec3(v1.e[0] / t, v1.e[1] / t, v1.e[2] /t);
}


inline float dot(const vec3 &v1, const vec3 &v2) {
  return v1.e[0] * v2.e[0] + v1.e[1] * v2.e[1] + v1.e[2] * v2.e[2];
}

inline vec3 cross(const vec3 &v1, const vec3 &v2) {
  return vec3( (v1.e[1] * v2.e[2] - v1.e[2] * v2.e[1]),
               (-(v1.e[0] * v2.e[2] - v1.e[2] * v2.e[0])),
               (v1.e[0] * v2.e[1] - v1.e[1] * v2.e[0]));
}

inline vec3 unit_vector(vec3 v) {
  return v / v.length();
}
