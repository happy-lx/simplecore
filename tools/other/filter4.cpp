#include <stdio.h>
#include <assert.h>
#include <stdint.h>

int main(int argc,char** argv)
{
    assert(argc == 3);

    FILE* in = fopen(argv[1],"rb");
    assert(in != NULL);

    FILE* out = fopen(argv[2],"w");
    assert(in != NULL);

    uint8_t bytes[4];
    int ret;
    while ((ret = fread(&bytes, 4, 1, in)) != 0) {
        for(int i=3;i>=0;i--)
        {
            fprintf(out, "%1x%1x\n", bytes[i] >> 4, bytes[i] & 0xf);
        }
        fprintf(out, "\n");
  }

    fclose(in);
    fclose(out);

    return 0;
}