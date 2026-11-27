#pragma once
#include <exception>

// Базовое исключение программы
class AppException : public std::exception {
public:
    AppException();
    explicit AppException(const char* message);
    AppException(const AppException& other);
    ~AppException() override;
    AppException& operator=(const AppException& other);

    const char* what() const noexcept override;   // 
    void setMessage(const char* message);

private:
    char* message_;
};