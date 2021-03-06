﻿#pragma once
#include <utility>
#include <vector>
#include <string>
#include <cstdint>

struct ScriptItem
{
	// Parameters are passed by value and we "move" them into our members. This is apparently the "Modern" way...
	ScriptItem(std::string text, std::vector<uint8_t> data, std::vector<int> offsets, std::string label)
		: text(std::move(text)),
		  data(std::move(data)),
		  offsets(std::move(offsets)),
      label(std::move(label))
	{
	}

	std::string text;
	std::vector<uint8_t> data;
	std::vector<int> offsets;
	std::string label;
};
