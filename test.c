#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#include <ripemd160.h>

int main()
{
	char payload[32], hash[20];
	memset(payload, 0, sizeof(payload));
	memset(hash, 0, sizeof(hash));

	RIPEMD160_CTX *ctx;
	ripemd160_Init(ctx);
	ripemd160_Update(ctx, payload, 32);
	ripemd160_Final(ctx, hash);

	for (int i=0; i<20; i++) {
		printf("%02hhx", hash[i]);
	}
	printf("\n");

	return 0;
}
