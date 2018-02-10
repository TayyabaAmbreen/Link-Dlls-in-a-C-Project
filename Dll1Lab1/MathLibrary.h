#pragma once
#ifdef MATHLIBRARY_EXPORTS  
#define MATHLIBRARY_API __declspec(dllexport)   
#else  
#define MATHLIBRARY_API __declspec(dllimport)   
#endif  

namespace MathLibrary
{  
	 MATHLIBRARY_API void multiplication();
	 MATHLIBRARY_API void mattranspose();
	 MATHLIBRARY_API void sum();
	 MATHLIBRARY_API void subtract();	 
}