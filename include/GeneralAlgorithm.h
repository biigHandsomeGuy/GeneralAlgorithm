#pragma once
#include <vector>
#include <random>

namespace GA
{
	inline int randomInt(int i)
	{
		std::random_device rd;                                // Ӳ�������������
		std::mt19937 gen(rd());                               // ÷ɭ��ת�㷨��α�������������
		std::uniform_int_distribution<> dis(0, i);           // ���巶Χ [0, i]
		return dis(gen);
	}

	// shuffle algorithm
	template<class T>
	std::vector<T> ShuffleAlgorithm(std::vector<T> element)
	{
		for (int i = element.size() - 1; i >= 0; i--)
		{
			std::swap(element[i], element[randomInt(i)]);
		}

		return element;
	}
}