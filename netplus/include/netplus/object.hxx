#ifndef _NETPLUS_OBJECT_HXX
#define _NETPLUS_OBJECT_HXX

#include "config.hxx"

#if _NETPLUS_HAS_CXX20_MINIMUM_SUPPORT
#include <cstddef>
#include <memory>
#include <string>
#include <typeinfo>

namespace System
{
   class _NETPLUS_EXPORT Object
   {
    public:
      virtual ~Object();
      virtual auto ToString() const -> std::string;
      virtual auto Equals(const Object &__other) const -> bool;
      virtual auto GetHashCode() const -> std::size_t;
      virtual auto GetType() const -> const std::type_info &;
      auto MemberwiseClone() const -> std::shared_ptr<Object>;
   };
} // namespace System
#endif

#endif