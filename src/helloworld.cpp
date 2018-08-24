#include "helloworld.hpp"

int main(int argc, char* argv[])
{
	std::cout << "Hello World, now with Tensorflow version:\t" << TF_Version() << std::endl;
	return 0;
}
