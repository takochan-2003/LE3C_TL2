#pragma once
#include <string>

//�e�N�X�`���R���o�[�^�[
class TextureConverter {

private:
	//�e�N�X�`���t�@�C���ǂݍ���
	void LoadWICTextureFromFile(const std::string& filePath);

	//�}���`�o�C�g����������C�h������ɕϊ�
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

public:
	//�e�N�X�`����WIC����DDS�ɕϊ�����
	void ConverterTextureWICToDDS(const std::string& filepath);

};