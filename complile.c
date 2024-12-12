// this script for comple the other script you can use --all flag to comple all other wise use the name or names of the script you want to compile
// for example: ./compile --all
// or : ./compile script1.c script2.c script3.c
//
//

int int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    printf("Usage: %s <file1> <file2> ... <fileN>\n", argv[0]);
    printf("Usage: %s --all\n", argv[0]);
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
