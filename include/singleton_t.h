#pragma once
namespace chamber1999 {
template <typename T> class singleton_t {
public:
  static T &instance() {
    static T instance;
    return instance;
  }

private:
  singleton_t() = default;
  ~singleton_t() = default;
  singleton_t(const singleton_t &) = delete;
  singleton_t &operator=(const singleton_t &) = delete;
};
} // namespace chamber1999
