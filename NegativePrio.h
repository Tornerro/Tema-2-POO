#include <exception>
#pragma once
class NegativePrio : public std::exception
{
public:
    NegativePrio () noexcept {}
    NegativePrio (const NegativePrio&) noexcept = default;
    NegativePrio& operator= (const NegativePrio&) noexcept = default;
    virtual ~NegativePrio() noexcept = default;
    virtual const char* what() const noexcept
    {
        return "NegativePrio";
    }
};

