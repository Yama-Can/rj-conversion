#pragma once
#include <string>
#include <vector>
#include <utility>
#include <regex>
namespace rj_conversion {
    const std::vector<std::string> val1 = { "tya", "tyu", "tyo", "cha", "chu", "cho", "ja", "ju", "je", "jo", "fa", "fi", "fe", "fo", "qa", "qi", "qe", "qo", "ka", "ki", "ku", "ke", "ko", "ji","qu","fu","ca", "ci", "cu", "ce", "co", "sa", "si", "su", "se", "so", "ta", "ti", "tu", "te", "to", "na", "ni", "nu", "ne", "no", "ha", "hi", "hu", "he", "ho", "ma", "mi", "mu", "me", "mo", "ya", "yu", "yo", "ra", "ri", "ru", "re", "ro", "wa", "wi", "wu", "we", "wo", "nn", "ga", "gi", "gu", "ge", "go", "da", "di", "du", "de", "do","xa", "xi", "xu", "xe", "xo","xwa", "a", "i", "u", "e", "o", "n" };
    const std::vector<std::string> val2 = { "ちゃ", "ちゅ", "ちょ", "ちゃ", "ちゅ", "ちょ", "じゃ", "じゅ", "じぇ", "じょ", "ふぁ", "ふぃ", "ふぇ", "ふぉ", "くぁ", "くぃ", "くぇ", "くぉ", "じ","く","ふ","か", "き", "く", "け", "こ", "か", "し", "く", "せ", "こ", "さ", "し", "す", "せ", "そ", "た", "ち", "つ", "て", "と", "な", "に", "ぬ", "ね", "の", "は", "ひ", "ふ", "へ", "ほ", "ま", "み", "む", "め", "も", "や", "ゆ", "よ", "ら", "り", "る", "れ", "ろ", "わ", "うぃ", "う", "うぇ", "を", "ん", "が", "ぎ", "ぐ", "げ", "ご", "だ", "ぢ", "づ", "で", "ど","ぁ", "ぃ", "ぅ", "ぇ", "ぉ","ゎ", "あ", "い", "う", "え", "お", "ん"};
    std::string r_to_j(std::string romaji)
    {
        for (int i = 0; i < val1.size(); i++)
        {
            romaji = std::regex_replace(romaji, std::regex(val1.at(i)), val2.at(i));
        }
        return romaji;
    }
    std::string j_to_r(std::string japanese)
    {
        for (int i = 0; i < val1.size(); i++)
        {
            japanese = std::regex_replace(japanese, std::regex(val2.at(i)), val1.at(i));
        }
        return japanese;
    }
}