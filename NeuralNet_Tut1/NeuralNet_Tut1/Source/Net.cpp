#include "Net.h"
#include <iostream>

Net::Net(const std::vector<unsigned int> &_topology)
{
	uint numLayers = _topology.size();

	for (uint layerNum = 0; layerNum < numLayers; ++layerNum)
	{
		//creaitng a layer
		m_layers.push_back(Layer());

		for (uint neuronNum = 0; neuronNum <= _topology[layerNum]; ++neuronNum)
		{
			m_layers.back().push_back(Neuron());
			std::cout << "New Neuron created." << std::endl;
		}
	}
}