#include <iostream>
#include "header.h"

void TEST_SUM()
{
	std::cout << "\n+-------------------------------------+";	
	std::cout << "\n Now testing sum of 2 numbers! ";
	
	int numOfTests = 0;
	int numOfTestsPassed = 0;
	int numOfTestsFailed = 0;
	
	// Test 1
	int testResult1 = GetSum(2, 2);
	if (testResult1 == 4)
	{
		std::cout << "\nTEST 1 PASSED! 2 + 2 = 4";
		numOfTestsPassed++;
	}else{
		std::cout << "\nTEST 1 FAILED! The result is " << testResult1
			<< "But it should be 4";
		numOfTestsFailed++;
	}
	numOfTests++;
	
	// Test 2
	int testResult2 = GetSum(100, 55);
	if (testResult2 == 155)
	{
		std::cout << "\nTEST 2 PASSED! 100 + 55 = 155";
		numOfTestsPassed++;
	}else{
		std::cout << "\nTEST 2 FAILED! The result is " << testResult2
			<< "But it should be 155";
		numOfTestsFailed++;
	}
	numOfTests++;

	int testResult3 = GetSum(1000, 2000);
	if (testResult3 == 3000)
	{
		std::cout << "\nTEST 3 PASSED! 1000 + 2000 = 3000";
		numOfTestsPassed++;
	}else{
		std::cout << "\nTEST 3 FAILED! The result is " << testResult3
			<< "But it should be 3000";
		numOfTestsFailed++;
	}
	numOfTests++;

	std::cout << "\nNumber of tests: " << numOfTests;
	std::cout << "\nPassed: " << numOfTestsPassed;
	std::cout << "\nFailed: " << numOfTestsFailed;
	std::cout << "\n+-------------------------------------+";	
}

void TEST_PRODUCT()
{
	std::cout << "\n+-------------------------------------+";	
 	std::cout << "\n Now testing product of 2 numbers! ";
        
        int numOfTests = 0;
        int numOfTestsPassed = 0;
        int numOfTestsFailed = 0;
        
        // Test 1
        int testResult1 = GetProduct(2, 2);
        if (testResult1 == 4)
        {
        	std::cout << "\nTEST 1 PASSED! 2 * 2 = 4";
        	numOfTestsPassed++;
        }else{
        	std::cout << "\nTEST 1 FAILED! The result is " << testResult1
        		<< "But it should be 4";
        	numOfTestsFailed++;
        }
        numOfTests++;
        
        // Test 2
        int testResult2 = GetProduct(100, 55);
        if (testResult2 == 5500)
        {
        	std::cout << "\nTEST 2 PASSED! 100 * 55 = 5500";
        	numOfTestsPassed++;
        }else{
        	std::cout << "\nTEST 2 FAILED! The result is " << testResult2
        		<< "But it should be 5500";
        	numOfTestsFailed++;
        }
        numOfTests++;
                                                                         
        int testResult3 = GetProduct(1000, 2000);
        if (testResult3 == 2000000)
        {
        	std::cout << "\nTEST 3 PASSED! 1000 * 2000 = 2000000";
        	numOfTestsPassed++;
        }else{
        	std::cout << "\nTEST 3 FAILED! The result is " << testResult3
        		<< "But it should be 2000000";
        	numOfTestsFailed++;
        }
        numOfTests++;
                                                                         
        std::cout << "\nNumber of tests: " << numOfTests;
        std::cout << "\nPassed: " << numOfTestsPassed;
        std::cout << "\nFailed: " << numOfTestsFailed;
        std::cout << "\n+-------------------------------------+";
}

void TEST_DIFFERENCE()
{
	std::cout << "\n+-------------------------------------+";	
 	std::cout << "\n Now testing difference of 2 numbers! ";
        
        int numOfTests = 0;
        int numOfTestsPassed = 0;
        int numOfTestsFailed = 0;
        
        // Test 1
        int testResult1 = GetDifference(10, 5);
        if (testResult1 == 5)
        {
        	std::cout << "\nTEST 1 PASSED! 10 - 5 = 5";
        	numOfTestsPassed++;
        }else{
        	std::cout << "\nTEST 1 FAILED! The result is " << testResult1
        		<< "But it should be 5";
        	numOfTestsFailed++;
        }
        numOfTests++;
        
        // Test 2
        int testResult2 = GetDifference(100, 55);
        if (testResult2 == 45)
        {
        	std::cout << "\nTEST 2 PASSED! 100 - 55 = 45";
        	numOfTestsPassed++;
        }else{
        	std::cout << "\nTEST 2 FAILED! The result is " << testResult2
        		<< "But it should be 45";
        	numOfTestsFailed++;
        }
        numOfTests++;
                                                                         
        int testResult3 = GetDifference(2000, 500);
        if (testResult3 == 1500)
        {
        	std::cout << "\nTEST 3 PASSED! 2000 * 500 = 1500";
        	numOfTestsPassed++;
        }else{
        	std::cout << "\nTEST 3 FAILED! The result is " << testResult3
        		<< "But it should be 1500";
        	numOfTestsFailed++;
        }
        numOfTests++;
                                                                         
        std::cout << "\nNumber of tests: " << numOfTests;
        std::cout << "\nPassed: " << numOfTestsPassed;
        std::cout << "\nFailed: " << numOfTestsFailed;
        std::cout << "\n+-------------------------------------+";
}

void TEST_QUOTIENT()
{
	std::cout << "\n+-------------------------------------+";	
 	std::cout << "\n Now testing quotient of 2 numbers! ";
        
        int numOfTests = 0;
        int numOfTestsPassed = 0;
        int numOfTestsFailed = 0;
        
        // Test 1
        float testResult1 = GetQuotient(10, 5);
        if (testResult1 == 2)
        {
        	std::cout << "\nTEST 1 PASSED! 10 / 5 = 2";
        	numOfTestsPassed++;
        }else{
        	std::cout << "\nTEST 1 FAILED! The result is " << testResult1
        		<< "But it should be 2";
        	numOfTestsFailed++;
        }
        numOfTests++;
        
        // Test 2
        float testResult2 = GetQuotient(100, 5);
        if (testResult2 == 20)
        {
        	std::cout << "\nTEST 2 PASSED! 100 / 5 = 20";
        	numOfTestsPassed++;
        }else{
        	std::cout << "\nTEST 2 FAILED! The result is " << testResult2
        		<< "But it should be 20";
        	numOfTestsFailed++;
        }
        numOfTests++;
                                                                         
        float testResult3 = GetQuotient(2000, 500);
        if (testResult3 == 4)
        {
        	std::cout << "\nTEST 3 PASSED! 2000 / 500 = 4";
        	numOfTestsPassed++;
        }else{
        	std::cout << "\nTEST 3 FAILED! The result is " << testResult3
        		<< "But it should be 4";
        	numOfTestsFailed++;
        }
        numOfTests++;
                                                                         
        std::cout << "\nNumber of tests: " << numOfTests;
        std::cout << "\nPassed: " << numOfTestsPassed;
        std::cout << "\nFailed: " << numOfTestsFailed;
        std::cout << "\n+-------------------------------------+";
}
