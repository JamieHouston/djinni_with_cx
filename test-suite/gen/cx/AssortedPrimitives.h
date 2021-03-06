// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from primtypes.djinni

#pragma once

#include "../cpp/assorted_primitives.hpp"

namespace Cxns {

public ref class AssortedPrimitives sealed : public Platform::Object {
public:
    property bool B;
    property uint8 Eight;
    property int16_t Sixteen;
    property int32_t Thirtytwo;
    property int64_t Sixtyfour;
    property float Fthirtytwo;
    property double Fsixtyfour;
    property Platform::IBox<bool>^ OB;
    property Platform::IBox<uint8>^ OEight;
    property Platform::IBox<short>^ OSixteen;
    property Platform::IBox<int>^ OThirtytwo;
    property Platform::IBox<int64_t>^ OSixtyfour;
    property Platform::IBox<float>^ OFthirtytwo;
    property Platform::IBox<double>^ OFsixtyfour;

    AssortedPrimitives(bool B,
                       uint8 Eight,
                       int16_t Sixteen,
                       int32_t Thirtytwo,
                       int64_t Sixtyfour,
                       float Fthirtytwo,
                       double Fsixtyfour,
                       Platform::IBox<bool>^ OB,
                       Platform::IBox<uint8>^ OEight,
                       Platform::IBox<short>^ OSixteen,
                       Platform::IBox<int>^ OThirtytwo,
                       Platform::IBox<int64_t>^ OSixtyfour,
                       Platform::IBox<float>^ OFthirtytwo,
                       Platform::IBox<double>^ OFsixtyfour) {
        this->B = B;
        this->Eight = Eight;
        this->Sixteen = Sixteen;
        this->Thirtytwo = Thirtytwo;
        this->Sixtyfour = Sixtyfour;
        this->Fthirtytwo = Fthirtytwo;
        this->Fsixtyfour = Fsixtyfour;
        this->OB = OB;
        this->OEight = OEight;
        this->OSixteen = OSixteen;
        this->OThirtytwo = OThirtytwo;
        this->OSixtyfour = OSixtyfour;
        this->OFthirtytwo = OFthirtytwo;
        this->OFsixtyfour = OFsixtyfour;
    }
    AssortedPrimitives() {}
internal:
    ::AssortedPrimitives toCpp();
    static AssortedPrimitives^ fromCpp(const ::AssortedPrimitives& value);

    bool Equals(AssortedPrimitives^ rhs);
};

}  // namespace Cxns
