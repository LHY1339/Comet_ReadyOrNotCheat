#include "StringStatic.h"

#include <codecvt>
#include <algorithm>

#pragma warning(disable:4996)

std::string ToUtf8(const std::wstring& wstr)
{
    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
    return converter.to_bytes(wstr);
}

bool FindString(const std::string& find_in, const std::string sub_str)
{
    if (find_in.find(sub_str) != std::string::npos)
    {
        return true;
    }
    return false;
}

bool FindStringIgnore(const std::string& find_in, const std::string sub_str)
{
    std::string lowerStr = find_in;
    std::string lowerSubstr = sub_str;

    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    std::transform(lowerSubstr.begin(), lowerSubstr.end(), lowerSubstr.begin(), ::tolower);

    return lowerStr.find(lowerSubstr) != std::string::npos;
}