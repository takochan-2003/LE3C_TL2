#pragma once
#include <string>
#include "DirectXTex/DirectXTex.h"

//テクスチャコンバーター
class TextureConverter {

private:
	//テクスチャファイル読み込み
	void LoadWICTextureFromFile(const std::string& filePath);

	//マルチバイト文字列をワイド文字列に変換
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

	//画像の情報
	DirectX::TexMetadata metadata_;
	//画像イメージのコンテナ
	DirectX::ScratchImage scrachImage_;

private:
	void SeparateFilePath(const std::wstring& filePath);

	void SaveDDSTextureToFile();

private:
	//ディレクトリパス
	std::wstring directoryPath_;
	//ファイル名
	std::wstring fileName_;
	//ファイル拡張子
	std::wstring fileExt_;

public:
	//テクスチャをWICからDDSに変換する
	void ConverterTextureWICToDDS(const std::string& filepath);

};