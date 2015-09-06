#include <iostream>
#include "Net.h"

int main()
{
	std::vector<unsigned int> topology;

	topology.push_back(3);
	topology.push_back(2);
	topology.push_back(1);

	Net myNet(topology);

	std::vector<double> inputValues;
	std::vector<double> targetValues;
	std::vector<double> resultValues;

	myNet.FeedForward(inputValues);
	myNet.BackProp(targetValues);
	myNet.GetResults(resultValues);

	system("pause");

	return 0;
}