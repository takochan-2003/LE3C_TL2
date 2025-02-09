#pragma once
#include <string>
#include "DirectXTex/DirectXTex.h"

//�e�N�X�`���R���o�[�^�[
class TextureConverter {

private:
	//�e�N�X�`���t�@�C���ǂݍ���
	void LoadWICTextureFromFile(const std::string& filePath);

	//�}���`�o�C�g����������C�h������ɕϊ�
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

	//�摜�̏��
	DirectX::TexMetadata metadata_;
	//�摜�C���[�W�̃R���e�i
	DirectX::ScratchImage scrachImage_;

private:
	void SeparateFilePath(const std::wstring& filePath);

	void SaveDDSTextureToFile();

private:
	//�f�B���N�g���p�X
	std::wstring directoryPath_;
	//�t�@�C����
	std::wstring fileName_;
	//�t�@�C���g���q
	std::wstring fileExt_;

public:
	//�e�N�X�`����WIC����DDS�ɕϊ�����
	void ConverterTextureWICToDDS(const std::string& filepath);

};