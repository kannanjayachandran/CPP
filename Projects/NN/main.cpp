#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// Sigmoid activation function
double sigmoid(double x)
{
    return 1.0 / (1.0 + exp(-x));
}

// Derivative of the sigmoid function
double sigmoidDerivative(double x)
{
    double sigmoid_x = sigmoid(x);
    return sigmoid_x * (1.0 - sigmoid_x);
}

class NeuralNetwork
{
public:
    NeuralNetwork(int inputSize, int hiddenSize, int outputSize)
        : inputSize(inputSize), hiddenSize(hiddenSize), outputSize(outputSize)
    {
        // Initialize weights and biases with random values
        srand(static_cast<unsigned int>(time(nullptr)));

        // Initialize input to hidden layer weights and biases
        weightsInputToHidden.resize(inputSize, vector<double>(hiddenSize));
        for (int i = 0; i < inputSize; ++i)
        {
            for (int j = 0; j < hiddenSize; ++j)
            {
                weightsInputToHidden[i][j] = static_cast<double>(rand()) / RAND_MAX;
            }
        }

        biasHidden.resize(hiddenSize);
        for (int i = 0; i < hiddenSize; ++i)
        {
            biasHidden[i] = static_cast<double>(rand()) / RAND_MAX;
        }

        // Initialize hidden to output layer weights and biases
        weightsHiddenToOutput.resize(hiddenSize, vector<double>(outputSize));
        for (int i = 0; i < hiddenSize; ++i)
        {
            for (int j = 0; j < outputSize; ++j)
            {
                weightsHiddenToOutput[i][j] = static_cast<double>(rand()) / RAND_MAX;
            }
        }

        biasOutput.resize(outputSize);
        for (int i = 0; i < outputSize; ++i)
        {
            biasOutput[i] = static_cast<double>(rand()) / RAND_MAX;
        }
    }

    // Forward pass through the neural network
    vector<double> forward(const vector<double> &input)
    {
        // Calculate hidden layer outputs
        vector<double> hidden(hiddenSize);
        for (int j = 0; j < hiddenSize; ++j)
        {
            double sum = 0.0;
            for (int i = 0; i < inputSize; ++i)
            {
                sum += input[i] * weightsInputToHidden[i][j];
            }
            hidden[j] = sigmoid(sum + biasHidden[j]);
        }

        // Calculate output layer outputs
        vector<double> output(outputSize);
        for (int j = 0; j < outputSize; ++j)
        {
            double sum = 0.0;
            for (int i = 0; i < hiddenSize; ++i)
            {
                sum += hidden[i] * weightsHiddenToOutput[i][j];
            }
            output[j] = sigmoid(sum + biasOutput[j]);
        }

        return output;
    }

private:
    int inputSize;
    int hiddenSize;
    int outputSize;
    vector<vector<double>> weightsInputToHidden;
    vector<double> biasHidden;
    vector<vector<double>> weightsHiddenToOutput;
    vector<double> biasOutput;
};

int main()
{
    // Create a simple neural network with 2 input nodes, 2 hidden nodes, and 1 output node
    NeuralNetwork nn(2, 2, 1);

    // Example input
    vector<double> input = {0.1, 0.9};

    // Perform a forward pass through the neural network
    vector<double> output = nn.forward(input);

    // Display the input and output values
    cout << "Input: ";
    for (double val : input)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "Output: ";
    for (double val : output)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
