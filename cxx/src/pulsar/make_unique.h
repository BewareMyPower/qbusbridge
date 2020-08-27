#pragma once

#include <memory>

#if __cplusplus < 201402L

namespace std {

template <typename T, typename... Args>
inline std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

}  // namespace std

#endif
