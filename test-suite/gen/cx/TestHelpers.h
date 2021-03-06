// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from test.djinni

#pragma once

#include "../cpp/test_helpers.hpp"
#include "AssortedPrimitives.h"
#include "ClientInterfaceProxy.h"
#include "Color.h"
#include "DateRecord.h"
#include "MapListRecord.h"
#include "NestedCollection.h"
#include "PrimitiveList.h"
#include "SetRecord.h"
#include "Token.h"
#include <memory>

namespace Cxns {

public ref class TestHelpers sealed : public Platform::Object
{
public:
    static SetRecord^ GetSetRecord ();
    static bool CheckSetRecord (SetRecord^ Rec);
    static PrimitiveList^ GetPrimitiveList ();
    static bool CheckPrimitiveList (PrimitiveList^ Pl);
    static NestedCollection^ GetNestedCollection ();
    static bool CheckNestedCollection (NestedCollection^ Nc);
    static Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^ GetMap ();
    static bool CheckMap (Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^ M);
    static Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^ GetEmptyMap ();
    static bool CheckEmptyMap (Windows::Foundation::Collections::IMap<Platform::String^, int64_t>^ M);
    static MapListRecord^ GetMapListRecord ();
    static bool CheckMapListRecord (MapListRecord^ M);
    static void CheckClientInterfaceAscii (ClientInterface^ I);
    static void CheckClientInterfaceNonascii (ClientInterface^ I);
    static void CheckEnumMap (Windows::Foundation::Collections::IMap<Color, Platform::String^>^ M);
    static void CheckEnum (Color C);
    static Token^ TokenId (Token^ T);
    static Token^ CreateCppToken ();
    static void CheckCppToken (Token^ T);
    static int64_t CppTokenId (Token^ T);
    static void CheckTokenType (Token^ T, Platform::String^ Type);
    static Platform::IBox<int>^ ReturnNone ();
    static AssortedPrimitives^ AssortedPrimitivesId (AssortedPrimitives^ I);
    static Platform::Array<uint8_t>^ IdBinary (const Platform::Array<uint8_t>^ B);
    static DateRecord^ GetDateRecord ();
    static bool CheckDateRecord (DateRecord^ Rec);
internal:
    TestHelpers(std::shared_ptr<::TestHelpers> cppRef) : _cppRef(cppRef) {}
    std::shared_ptr<::TestHelpers> cppRef() {return _cppRef;}
private:
    std::shared_ptr<::TestHelpers> _cppRef;
};

}  // namespace Cxns
