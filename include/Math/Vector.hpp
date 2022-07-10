#ifndef VECTOR_HPP
#define VECTOR_HPP
struct Vector2 {
  union {
    float x;
  };
  union {
    float y;
  };
  Vector2() { x = y = 0.0; }
  Vector2(float _val) { x = y = _val; }
  Vector2(float val1, float val2) {
    x = val1;
    y = val2;
  }
};
struct Vector3 {
  union {
    float x;
  };
  union {
    float y;
  };
  union {
    float z;
  };
  Vector3() { x = y = z = 0.0; }
  Vector3(float _val) { x = y = z = _val; }
  Vector3(float val1, float val2, float val3) {
    x = val1;
    y = val2;
    z = val3;
  }
};
struct Vector4 {
  union {
    float x;
  };
  union {
    float y;
  };
  union {
    float z;
  };
  union {
    float w;
  };
  Vector4() { x = y = z = w = 0.0; }
  Vector4(float _val) { x = y = z = w = _val; }
  Vector4(Vector2 vec1, Vector2 vec2) {
    x = vec1.x;
    y = vec1.y;
    z = vec2.x;
    w = vec2.y;
  }
  Vector4(float val1, float val2, float val3, float val4) {
    x = val1;
    y = val2;
    z = val3;
    w = val4;
  }
};

#endif