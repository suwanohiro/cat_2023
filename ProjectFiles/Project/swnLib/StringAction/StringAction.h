#pragma once
#include "Mof.h"

#include <regex>

class StringAction
{
public:
	static Vector2 getStringSize(LPCMofChar pText);
	static Vector2 getStringSize(LPCMofChar pText, CFont* font);

	/// <summary>
	/// ���������萔�ŋ�؂�z�񉻂���
	/// </summary>
	/// <param name="baseStr">�ϊ�������������</param>
	/// <param name="step">�Ԋu������</param>
	/// <returns>�ϊ������z��f�[�^</returns>
	static std::vector<std::string> split(std::string baseStr, int step);

	/// <summary>
	/// ����������̕����ŋ�؂�z�񉻂���
	/// </summary>
	/// <param name="baseStr">�ϊ�������������</param>
	/// <param name="cutStr">��؂肽������</param>
	/// <returns>�ϊ������z��f�[�^</returns>
	static std::vector<std::string> split(std::string baseStr, std::string cutStr);

	/// <summary>
	/// ������𐳋K�\�����g�p���Ĕz�񉻂���
	/// </summary>
	/// <param name="baseStr">�ϊ�������������</param>
	/// <param name="regex">���K�\��</param>
	/// <returns>�ϊ������z��f�[�^</returns>
	static std::vector<std::string> split(std::string baseStr, std::regex regex);
};

