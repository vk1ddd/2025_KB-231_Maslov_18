#ifndef SMART_PTR_H
#define SMART_PTR_H

template <typename T>
class smart_ptr {
    T* ptr;
public:
    explicit smart_ptr(T* _ptr = nullptr)
        : ptr(_ptr) { }

    ~smart_ptr() {
        delete ptr;
    }

    T* operator->() {
        return ptr;
    }

    T& operator*() {
        return *ptr;
    }

    smart_ptr(const smart_ptr<T>&) = delete;
    smart_ptr& operator=(const smart_ptr<T>&) = delete;

    smart_ptr(smart_ptr<T>&& other) noexcept
        : ptr(other.ptr) {
        other.ptr = nullptr;
    }
    smart_ptr& operator=(smart_ptr<T>&& other) noexcept {
        if (this != &other) {
            delete ptr;
            ptr = other.ptr;
            other.ptr = nullptr;
        }
        return *this;
    }
};

#endif // SMART_PTR_H
