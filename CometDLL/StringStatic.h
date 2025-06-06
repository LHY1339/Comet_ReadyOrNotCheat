#pragma once
#include <string>

std::string ToUtf8(const std::wstring& wstr);
bool FindString(const std::string& find_in, const std::string sub_str);
bool FindStringIgnore(const std::string& find_in, const std::string sub_str);