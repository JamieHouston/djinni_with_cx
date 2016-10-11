// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include "../cpp/client_returned_record.hpp"

namespace Cxns {

public ref class ClientReturnedRecord sealed : public Platform::Object {
public:
    property int64_t RecordId;
    property Platform::String^ Content;
    property Platform::String^ Misc;

    ClientReturnedRecord(int64_t RecordId,
                         Platform::String^ Content,
                         Platform::String^ Misc) {
        this->RecordId = RecordId;
        this->Content = Content;
        this->Misc = Misc;
    }
    ClientReturnedRecord() {}
internal:
    ::ClientReturnedRecord toCpp();
    static ClientReturnedRecord^ fromCpp(const ::ClientReturnedRecord& value);
};

}  // namespace Cxns