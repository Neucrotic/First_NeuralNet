#pragma once
#include <vector>

typedef unsigned int uint;

class Net
{
	class Neuron;

	typedef std::vector<Neuron> Layer;

public:

	Net(const std::vector<unsigned int> &_topology);

	std::vector<double> inputValues;

	void FeedForward(const std::vector<double> &_inputValues) {}; //not changing _inputValues in this function
	void BackProp(const std::vector<double> &_targetValues) {};
	void GetResults(std::vector<double> &_resultValues) const {};

private:
	std::vector<Layer> m_layers;
};