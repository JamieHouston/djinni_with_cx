// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from set.djinni

#pragma once

#include "../cpp/set_record.hpp"

namespace Cxns {

public ref class SetRecord sealed : public Platform::Object {
public:
    property Windows::Foundation::Collections::IIterable<Platform::String^>^ Set;
    property Windows::Foundation::Collections::IIterable<int32_t>^ Iset;

    SetRecord(Windows::Foundation::Collections::IIterable<Platform::String^>^ Set,
              Windows::Foundation::Collections::IIterable<int32_t>^ Iset) {
        this->Set = Set;
        this->Iset = Iset;
    }
    SetRecord() {}
internal:
    ::SetRecord toCpp();
    static SetRecord^ fromCpp(const ::SetRecord& value);
};

}  // namespace Cxns
