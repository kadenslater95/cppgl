// Copyright 2025 Kaden Slater

#ifndef INCLUDE_DATA_TYPES_H_
#define INCLUDE_DATA_TYPES_H_

#ifdef __cplusplus
namespace cppgl {
extern "C" {
#endif


struct Point2f {
    float x;
    float y;
};
typedef struct Point2f Point2f;


struct Point3f {
  float x;
  float y;
  float z;
};
typedef struct Point3f Point3f;


#ifdef __cplusplus
}  // extern "C"
}  // namespace cppgl
#endif

#endif  // INCLUDE_DATA_TYPES_H_
