#pragma once
#include <string>
#include <d3d12.h>
#include "DirectXTex.h"

//�e�N�X�`���R���o�[�^�[
class TextureConverter {

private:
	//�e�N�X�`���t�@�C���ǂݍ���
	void LoadWICTextureFromFile(const std::string& filePath);

	//�}���`�o�C�g����������C�h������ɕϊ�
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

	//�摜�̏��
	

public:
	//�e�N�X�`����WIC����DDS�ɕϊ�����
	void ConverterTextureWICToDDS(const std::string& filepath);

};