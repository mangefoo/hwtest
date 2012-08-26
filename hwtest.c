#include <math.h>
#include <signal.h>
#include <sys/time.h>
#include <sys/resource.h>

#include <system/audio.h>
#include <hardware/audio.h>

int main(int argc, char *argv[])
{
    int rc;
    hw_module_t *mod;

    if (argc != 2) {
	printf("Usage: %s class\n", argv[0]);
        return 255;
    }

    rc = hw_get_module(argv[1], (const struct hw_module_t **) &mod);
    printf("Result: %d\n", rc);

    return 0;
}
