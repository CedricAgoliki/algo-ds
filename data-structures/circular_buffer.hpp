#include <vector>

template <typename T> class circular_buffer {
  std::size_t start;
  std::size_t end;
  std::size_t count;
  std::vector<T> data;

public:
  circular_buffer(std::size_t size) {
    start = 0;
    end = 0;
    count = 0;
    data.resize(size);
  }

  void put(T e) {
    data[end++] = e;
    end %= data.size();
    count++;
  }

  T get() {
    if (count == 0) {
      throw "Empty buffer";
    }
    T e = data[start++];
    start %= data.size();
    count--;
    return e;
  }
};
