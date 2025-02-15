int main() {
    char a[50];  // Name
    int b;       // Age
    char c[50];  // Hobby

    printf("Name: ");
    scanf("%s", a);  // Reads only one word (use fgets() for multi-word input)

    printf("Age: ");
    scanf("%d", &b);  

    printf("Hobby: ");
    scanf("%s", c);  // Reads only one word (use fgets() for multi-word input)

    printf("\n--- User Details ---\n");
    printf("Name: %s\n", a);
    printf("Age: %d\n", b);
    printf("Hobby: %s\n", c);

    return 0;
}
