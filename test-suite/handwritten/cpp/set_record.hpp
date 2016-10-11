// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from set.djinni

#pragma once

#include <cstdint>
#include <string>
#include <unordered_set>
#include <utility>

namespace cppns {

struct SetRecord final {
    std::unordered_set<std::string> set;
    std::unordered_set<int32_t> iset;

    SetRecord(std::unordered_set<std::string> set,
              std::unordered_set<int32_t> iset)
    : set(std::move(set))
    , iset(std::move(iset))
    {}
    SetRecord() {}
};

}  // namespace cppns