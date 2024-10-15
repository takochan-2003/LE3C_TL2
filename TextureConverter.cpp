#include "TextureConverter.h"
#include <windows.h>

//TextureConverter::TextureConverter() {
//}
//TextureConverter::~TextureConverter() {
//}


void TextureConverter::ConverterTextureWICToDDS(const std::string& filePath) {
	LoadWICTextureFromFile(filePath);
}

void TextureConverter::LoadWICTextureFromFile(const std::string& filePath)
{
	//�t�@�C���p�X�����C�h������ɕϊ�����
	std::wstring wfilePath = ConvertMultiByteStringToWideString(filePath);
}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mString) {

	//���C�h������ɕϊ������ۂ̕��������v�Z
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, nullptr, 0);

	//���C�h������
	std::wstring wString;
	wString.resize(filePathBufferSize);

	//���C�h������ɕϊ�
	MultiByteToWideChar(CP_ACP, 0, mString.c_str(), -1, &wString[0], filePathBufferSize);

	return wString;
}