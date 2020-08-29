
  

//basic func
int simplefunc() {
    return 100;
}

int main() {
    int i = simplefunc();
    printf("%d\n", i);
    int (*simplefuncfn) = simplefunc();
    printf("%d\n", i);
}