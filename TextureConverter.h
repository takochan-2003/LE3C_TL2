#pragma once
#include <string>

//テクスチャコンバーター
class TextureConverter {

private:
	//テクスチャファイル読み込み
	void LoadWICTextureFromFile(const std::string& filePath);

	//マルチバイト文字列をワイド文字列に変換
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

public:
	//テクスチャをWICからDDSに変換する
	void ConverterTextureWICToDDS(const std::string& filepath);

};