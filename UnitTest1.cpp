#include "pch.h"
#include "CppUnitTest.h"
#include <assert.h>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 5;
			int aa[5] = { 1,2,3,4,5 };
			int sum = 0, b = 0;
			for (int i = 0; i < n; i++) {
				if (b > 0) {
					b += aa[i];
				}
				else b = aa[i];
				if (b > sum) {
					sum = b;
				}
			}
			int real = 15;
			Assert::AreEqual(sum, real);
		}
		TEST_METHOD(TestMethod2)
		{
			int n = 5;
			int a[5] = { -1,-2,-3,-4,-8 };
			int sum = 0, b = 0;
			for (int i = 0; i < n; i++) {
				if (b > 0) {
					b += a[i];
				}
				else b = a[i];
				if (b > sum) {
					sum = b;
				}
			}
			int real = 0;
			Assert::AreEqual(sum, real);
		}
		TEST_METHOD(TestMethod3)
		{
			int n = 5;
			int a[5] = { -1,11,-4,13,-5 };
			int sum = 0, b = 0;
			for (int i = 0; i < n; i++) {
				if (b > 0) {
					b += a[i];
				}
				else b = a[i];
				if (b > sum) {
					sum = b;
				}
			}
			int real = 20;
			Assert::AreEqual(sum, real);
		}
	};
}
