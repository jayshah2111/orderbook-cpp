#pragma once

// #include "gtest/gtest.h"

#include <filesystem>
#include <iostream>
#include <fstream>

#include "../Orderbook.cpp"

namespace googletest = ::testing;

enum class ActionType
{
    Add,
    Cancel,
    Modify,
};

struct Information
{
    ActionType type_;
    OrderType orderType_;
    Side side_;
    Price price_;
    Quantity quantity_;
    OrderId orderId_;
};

using Informations = std::vector<Information>;

struct Result
{
    std::size_t allCount_;
    std::size_t bidCount_;
    std::size_t askCount_;
};

using Results = std::vector<Result>;