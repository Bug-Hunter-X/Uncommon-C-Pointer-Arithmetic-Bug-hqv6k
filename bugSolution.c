int main() { int x = 10; int *ptr = &x; if (ptr != NULL){*ptr = 20;}  printf("%d", x); return 0; }