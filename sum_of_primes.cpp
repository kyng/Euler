/*
	Name: sum_of_primes
	Copyright: 
	Author: Mart Küng
	Date: 06.04.15 09:40
	Description: 
	Problem 10 from The Euler project:
	The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17. Find the sum of all the primes below two million.
	
	Prime number -  natural number greater than 1 that has no positive divisors other than 1 and itself.
*/
#include <iostream>
using namespace std;

bool test_prime(unsigned long num) {
	//Find oyut if a number is prime or not
	bool isPrime = true;
	for(long i = 2; i < num; i++){
		if(num % i == 0){ isPrime = false; }
		
	}
	return isPrime;
	
}

unsigned long sum_of_primes(unsigned long num){
	unsigned long sum, i;
	for (i = 2;i <= num; i++ ){
		if(test_prime(i) == true){
			cout << i << endl;
			sum = sum + i;
		}
	}
	return sum;
}
int main(){
	unsigned long question= 2000000;
	unsigned long answer;
	
	answer = sum_of_primes(question);
	
	cout << answer << endl;
	return 0;
}
