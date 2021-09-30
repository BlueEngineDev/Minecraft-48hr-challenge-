#ifndef EXIT_H

	#include<iostream>

	class exitCode
	{
		public:
			void getReturns(int returnInt)
			{
				std::cout<<"Window Name Test Exited with code: ";
				std::cout<<returnInt;
				std::cin.get();
			}
	};
			
	#define EXIT_H
#endif