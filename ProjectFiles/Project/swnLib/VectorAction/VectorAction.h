#pragma once

#include <vector>
#include <string>

class VectorAction
{
public:
	static const short NotFound = -1;

	template<typename T>
	static int indexOf(std::vector<T> array, T searchTarget)
	{
		for (int cnt = 0; cnt < array.size(); cnt++) {
			//��v���Ă���ΑΏۂ̓Y����Ԃ��ď����I��
			if (array[cnt] == searchTarget) return cnt;
		}

		return -1;
	}

	template<typename T>
	static std::string join(std::vector<T> array)
	{
		std::string result = "";

		for (int cnt = 0; cnt < array.size(); cnt++) {
			result += std::to_string(array[cnt]);
		}

		return result;
	}
};