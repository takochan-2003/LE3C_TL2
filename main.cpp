#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <windows.h>
#include <cassert>
#include "TextureConverter.h"

enum Argument {
	kApplicationPath,//�A�v���P�[�V�����̃p�X
	kFilePath,//�n���ꂽ�t�@�C���̃p�X

	NumArgument
};

int main(int argc,char* argv[]) {

	assert(argc >= NumArgument);

	//COM���C�u�����̏�����
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//�e�N�X�`���R���o�[�^�[
	TextureConverter converter;

	//�e�N�X�`���ϊ�
	converter.ConverterTextureWICToDDS(argv[kFilePath]);

	//COM���C�u�����̏I��
	CoUninitialize();

	////argc�̐������J��Ԃ�
	//for (int i = 0; i < argc; i++) {
	//	//������argv��i�Ԃ�\��
	//	printf(argv[i]);
	//	//���s
	//	printf("\n");
	//}


	system("pause");
	return 0;
}