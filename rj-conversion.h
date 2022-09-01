#pragma once
#include <string>
#include <vector>
#include <utility>
#include <regex>
#define RJ_CONVERSION_VAL_SIZE 92
namespace rj_conversion {
    const std::vector<std::string> valr = { "tya", "tyu", "tyo", "cha", "chu", "cho", "ja", "ju", "je", "jo", "fa", "fi", "fe", "fo", "qa", "qi", "qe", "qo", "ka", "ki", "ku", "ke", "ko", "ji","qu","fu","ca", "ci", "cu", "ce", "co", "sa", "si", "su", "se", "so", "ta", "ti", "tu", "te", "to", "na", "ni", "nu", "ne", "no", "ha", "hi", "hu", "he", "ho", "ma", "mi", "mu", "me", "mo", "ya", "yu", "yo", "ra", "ri", "ru", "re", "ro", "wa", "wi", "wu", "we", "wo", "nn", "ga", "gi", "gu", "ge", "go", "da", "di", "du", "de", "do","xa", "xi", "xu", "xe", "xo","xwa", "a", "i", "u", "e", "o", "n" };
    const std::vector<std::string> valh = { "ちゃ", "ちゅ", "ちょ", "ちゃ", "ちゅ", "ちょ", "じゃ", "じゅ", "じぇ", "じょ", "ふぁ", "ふぃ", "ふぇ", "ふぉ", "くぁ", "くぃ", "くぇ", "くぉ", "じ","く","ふ","か", "き", "く", "け", "こ", "か", "し", "く", "せ", "こ", "さ", "し", "す", "せ", "そ", "た", "ち", "つ", "て", "と", "な", "に", "ぬ", "ね", "の", "は", "ひ", "ふ", "へ", "ほ", "ま", "み", "む", "め", "も", "や", "ゆ", "よ", "ら", "り", "る", "れ", "ろ", "わ", "うぃ", "う", "うぇ", "を", "ん", "が", "ぎ", "ぐ", "げ", "ご", "だ", "ぢ", "づ", "で", "ど","ぁ", "ぃ", "ぅ", "ぇ", "ぉ","ゎ", "あ", "い", "う", "え", "お", "ん" };
    const std::vector<std::string> valk = { "チャ", "チュ", "チョ", "チャ", "チュ", "チョ", "ジャ", "ジュ", "ジェ", "ジョ", "ファ", "フィ", "フェ", "フォ", "クァ", "クィ", "クェ", "クォ", "ジ","ク","ブ","カ", "キ", "ク", "ケ", "コ", "カ", "キ", "ク", "セ", "コ", "サ", "シ", "ス", "セ", "ソ", "タ", "チ", "ツ", "テ", "ト", "ナ", "ニ", "ヌ", "ネ", "ノ", "ハ", "ヒ", "フ", "ヘ", "ホ", "マ", "ミ", "ム", "メ", "モ", "ヤ", "ユ", "ヨ", "ラ", "リ", "ル", "レ", "ロ", "ワ", "ウィ", "ウ", "ウェ", "ヲ", "ン", "ガ", "ギ", "グ", "ゲ", "ゴ", "ダ", "ヂ", "ヅ", "デ", "ド","ァ", "ィ", "ゥ", "ェ", "ォ","ヮ", "ア", "イ", "ウ", "エ", "オ", "ン" };

    std::string r_to_h(std::string romaji)
    {
        for (int i = 0; i < RJ_CONVERSION_VAL_SIZE; i++)
        {
            romaji = std::regex_replace(romaji, std::regex(valr.at(i)), valh.at(i));
        }
        return romaji;
    }
    std::string r_to_k(std::string romaji)
    {
        for (int i = 0; i < RJ_CONVERSION_VAL_SIZE; i++)
        {
            romaji = std::regex_replace(romaji, std::regex(valr.at(i)), valk.at(i));
        }
        return romaji;
    }
    std::string h_to_r(std::string hiragana)
    {
        for (int i = 0; i < RJ_CONVERSION_VAL_SIZE; i++)
        {
            hiragana = std::regex_replace(hiragana, std::regex(valh.at(i)), valr.at(i));
        }
        return hiragana;
    }
    std::string k_to_r(std::string katakana)
    {
        for (int i = 0; i < RJ_CONVERSION_VAL_SIZE; i++)
        {
            katakana = std::regex_replace(katakana, std::regex(valk.at(i)), valr.at(i));
        }
        return katakana;
    }
}