#include "utils.h"
#include "primality_test.h"
#include "print_numbers.h"
#include "quick_custom_pow.h"

#define ERR_ARGS_COUNT  (-1)
#define ERR_WRONG_FLG   (-2)

#define TST_FOO_FIX       1
#define TST_FOO_IMPL      2
#define TST_MOD_IMPL      3
#define TST_REC_IMPL      4
#define TST_ADD_IMPL      5

int main(int argc, const char** argv) {
    if (argc < 3) {
	   return ERR_ARGS_COUNT;
    }
    char* end = NULL;
    int test_case = (int) strtol(argv[1], &end, 0);
    if (*end != '\0') {
	   printf("ERROR! Please, input correct data.\n");
	   return 0;
    }
    const char* data;
    data = argv[2];
    switch (test_case) {
	case TST_FOO_FIX: {
	    int to = (int) strtol(data, &end, 0);
	    if (*end != '\0') {
		    printf("ERROR! Please, input correct data.\n");
		    return 0;
	    }
            int ticks_count = timer_from(to);
            printf("%i", ticks_count);
            break;
        }
	case TST_FOO_IMPL: {
            if (argc == 4) {
		    int base = (int) strtol(data, &end, 0);
		    if (*end != '\0') {
			    printf("ERROR! Please, input correct data.\n");
			    return 0;
		    }
		    int pow = (int) strtol(argv[3], &end, 0);
		    if (*end != '\0') {
			    printf("ERROR! Please, input correct data.\n");
			    return 0;
		    }
		    int res = custom_pow(base, pow);
		    printf("%i\n", res);
            } else {
		    return ERR_ARGS_COUNT;
            }
	    break;
         }
         case TST_MOD_IMPL: {
	      int num = (int) strtol(data, &end, 0);
		    if (*end != '\0') {
			    printf("ERROR! Please, input correct data.\n");
		            return 0;
		    }
	      int res = primality_test(num);
	      printf("%i\n", res);
	      break;
         }
	 case TST_REC_IMPL: {
	      int num = (int) strtol(data, &end, 0);
	      if (*end != '\0') {
		      printf("ERROR! Please, input correct data.\n");
		      return 0;
	      }
	      print_numbers(num);
	      break;
	 }
	 case TST_ADD_IMPL: {
	      if (argc == 4) {
		      int base = (int) strtol(data, &end, 0);
		      if (*end != '\0') {
			    printf("ERROR! Please, input correct data.\n");
			    return 0;
		      }
	              int pow = (int) strtol(argv[3], &end, 0);
	              if (*end != '\0') {
			    printf("ERROR! Please, input correct data.\n");
			    return 0;
		      }
		      int res = quick_custom_pow(base, pow);
		      printf("%i\n", res);
               } else {
		      return ERR_ARGS_COUNT;
               }
	      break;
	    }
         default: {
	      return ERR_WRONG_FLG;
         }
    }
}
