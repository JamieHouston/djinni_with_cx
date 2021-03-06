// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from constants.djinni

#pragma once

#include "../cpp/constants.hpp"

namespace Cxns {

public ref class Constants sealed : public Platform::Object {
public:
    property static bool Constants::BoolConstant {bool get() {return true;} } 

    property static uint8 Constants::I8Constant {uint8 get() {return 1;} } 

    property static int16_t Constants::I16Constant {int16_t get() {return 2;} } 

    property static int32_t Constants::I32Constant {int32_t get() {return 3;} } 

    property static int64_t Constants::I64Constant {int64_t get() {return 4;} } 

    property static float Constants::F32Constant {float get() {return 5.0f;} } 

    property static double Constants::F64Constant {double get() {return 5.0;} } 

    property static Platform::String^ Constants::StringConstant {Platform::String^ get() {return "string-constant";} } 

    property static Platform::IBox<int>^ Constants::OptionalIntegerConstant {Platform::IBox<int>^ get() {return 1;} } 

    property static Constants^ Constants::ObjectConstant {Constants^ get() {return ref new Constants(
        Constants::I32Constant /* SomeInteger */ ,
        Constants::StringConstant /* SomeString */ );} } 
    property int32_t SomeInteger;
    property Platform::String^ SomeString;

    Constants(int32_t SomeInteger,
              Platform::String^ SomeString) {
        this->SomeInteger = SomeInteger;
        this->SomeString = SomeString;
    }
    Constants() {}
internal:
    ::Constants toCpp();
    static Constants^ fromCpp(const ::Constants& value);
};

}  // namespace Cxns
