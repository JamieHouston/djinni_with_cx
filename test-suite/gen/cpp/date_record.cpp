// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#include "date_record.hpp"  // my header


bool operator==(const DateRecord& lhs, const DateRecord& rhs) {
    return lhs.created_at == rhs.created_at;
}

bool operator!=(const DateRecord& lhs, const DateRecord& rhs) {
    return !(lhs == rhs);
}

bool operator<(const DateRecord& lhs, const DateRecord& rhs) {
    if (lhs.created_at < rhs.created_at) {
        return true;
    }
    if (rhs.created_at < lhs.created_at) {
        return false;
    }
    return false;
}

bool operator>(const DateRecord& lhs, const DateRecord& rhs) {
    return rhs < lhs;
}

bool operator<=(const DateRecord& lhs, const DateRecord& rhs) {
    return !(rhs < lhs);
}

bool operator>=(const DateRecord& lhs, const DateRecord& rhs) {
    return !(lhs < rhs);
}