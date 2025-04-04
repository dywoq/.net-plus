#include "../../include/netplus/object.hxx"
#include <functional>
#include <memory>
#include <typeindex>
#include <typeinfo>

namespace System
{
   _NETPLUS_EXPORT Object::~Object() {}

   _NETPLUS_EXPORT auto Object::ToString() const -> std::string {
      return typeid(*this).name();
   }

   _NETPLUS_EXPORT auto Object::Equals(const Object &__other) const -> bool {
      return this == &__other;
   }

   _NETPLUS_EXPORT auto Object::GetHashCode() const -> std::size_t {
      return std::hash<std::type_index>{}(typeid(*this));
   }

   _NETPLUS_EXPORT auto Object::GetType() const -> const std::type_info & {
      return typeid(*this);
   }

   _NETPLUS_EXPORT auto Object::MemberwiseClone() const
       -> std::shared_ptr<Object> {
      return nullptr;
   }
} // namespace System