// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from example.djinni

#include "SortItems.h"  // my header
#include "CppWrapperCache.h"
#include "ItemList.h"
#include "ItemList_convert.h"
#include "Marshal.h"
#include "SortItems_convert.h"
#include "SortOrder.h"
#include "TextboxListener.h"
#include "TextboxListener_convert.h"
#include "sort_items.hpp"
#include <memory>

namespace djinni {

SortItems::SortItems(const std::shared_ptr<::SortItems>& cppRef)
{
    m_cppRef.assign(cppRef);
}

void SortItems::Sort(SortOrder Order, ItemList^ Items)
{
    m_cppRef.get()->sort(::djinni::Enum<::SortOrder, ::djinni::SortOrder>::toCpp(Order),
                         ::djinni_generated::ItemList::toCpp(Items));
}

SortItems^ SortItems::CreateWithListener(ITextboxListener^ Listener)
{
    auto r = ::SortItems::create_with_listener(::djinni_generated::TextboxListener::toCpp(Listener));
    return ::djinni_generated::SortItems::fromCpp(r);
}

}  // namespace djinni
