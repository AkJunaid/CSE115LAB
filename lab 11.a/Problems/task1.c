
#include <stdio.h>

struct Shape{
    double length;
    double width;
};

int findArea(struct Shape R){
    return R.length*R.width;

}

int findPerimeter(struct Shape R){
    return 2*(R.length+R.width);

}

int main()
{
    struct Shape x;
    int p, area;
    scanf("%lf", &x.length);
    scanf("%lf", &x.width);
    p = findPerimeter(x);
    area = findArea(x);
    printf("%d %d", p, area);

    return 0;
}
