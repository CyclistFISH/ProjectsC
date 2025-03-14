#include <stdio.h>


int recursiveFunction(int n) {
    printf("%d", n++);
    if (n > 100)
        return n;
}
int main(void) {

recursiveFunction(0);

}