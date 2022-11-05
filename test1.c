#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main() {
	if (fork() > 0) {
	 	for (int i = 0; i < 2000; ++i)
	 		printf(1, "\n");
		wait();
	    getpinfo(getpid());
	} else {

	 	int j = 0;
		for (int i = 0; i < 200000; ++i)
			j += (i % 69) * 7 / 42;
		j %= ((1 << 16) + 1);
		for (int i = 0; i < 200000; ++i)
			j += (i % 9381) * 3 / 17;
		j %= ((1 << 16) + 1);
		for (int i = 0; i < 200000; ++i)
			j += (i % 197) * 7 / 29;
		j %= ((1 << 16) + 1);
	 
	 	printf(1, "%d,\n", j);
	    getpinfo(getpid());
	}

    exit();
}