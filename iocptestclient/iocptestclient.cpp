#include "stdafx.h"
#include <httplib.h>

int main(void)
{
	httplib::Client cli("localhost", 1234);

	auto res = cli.Get("/home");
	system("pause");
	return 0;
}