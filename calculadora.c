#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int interface(){

    int a;

    printf("\t1 - Produto vetorial\n");
    printf("\t2 - Raizes funcao qudratica\n");
    printf("\t3 - Produto escalar\n");
    printf("\t4 - Angulo de vetores\n");
    printf("\t5 - Vetor unitario\n");

    scanf("%d", &a);

    return a;
}

int matriz() {
    float a[3], b[3];
    float c[3], m ;

    system("cls");

    printf("\t|i  j  k|\n");
    printf("\t|");
    scanf("%f %f %f", &a[0], &a[1], &a[2]);
    printf("\t|");
    scanf("%f %f %f", &b[0], &b[1], &b[2]);

    system("cls");

    printf("\t|i      j      k|\n");
    printf("\t|%f  %f  %f|\n", a[0], a[1], a[2]);
    printf("\t|%f  %f  %f|\n", b[0], b[1], b[2]);
    printf("\t------------------\n");

    c[0] = a[1]*b[2] - a[2]*b[1];
    c[1] = a[2]*b[0] - a[0]*b[2];
    c[2] = a[0]*b[1] - a[1]*b[0];

    m = sqrt(c[0]*c[0] + c[1]*c[1] + c[2]*c[2]);

    printf("\t|%.2fi  %.2fj  %.2fk|", c[0], c[1], c[2]);
    printf("\n\t modulo: %f", m);
    printf("\t\n\n\n");
    system("pause");


    return 0;
}

int raizes(){
    float delta, a, b, c, x, xx;

    printf("Digite a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = b*b - 4*a*c;

    if(delta < 0){
        printf("Não existe raizes reais\n");
        printf("Delta = %.2f", delta);
    }if(delta >= 0){
        x = (-b + sqrt(delta))/(2*a);
        xx = (-b - sqrt(delta))/(2*a);

        printf("x = %f\nxx = %f\n", x, xx);
    }

    system("pause");
    return 0;
}

int escalar(){
    float a[3], b[3], r[4];

    system("cls");

    printf("                 i  j  k\n");
    printf("Primeiro vetor:");
    scanf("%f %f %f", &a[0], &a[1], &a[2]);
    printf(" Segundo vetor:");
    scanf("%f %f %f", &b[0], &b[1], &b[2]);

    r[0] = a[0]*b[0];
    r[1] = a[1]*b[1];
    r[2] = a[2]*b[2];
    r[3] = r[0] + r[1] + r[2];

    printf("          :%f, %f, %f  =", r[0], r[1], r[2]);
    printf(" %f\n\n", r[3]);

    system("pause");

    return 0;
}

int angulo(){
    float a[3], b[3], r[4];
    float norm[2];
    float cos;

    system("cls");

    printf("                 i  j  k\n");
    printf("Primeiro vetor:");
    scanf("%f %f %f", &a[0], &a[1], &a[2]);
    printf(" Segundo vetor:");
    scanf("%f %f %f", &b[0], &b[1], &b[2]);

    r[0] = a[0]*b[0];
    r[1] = a[1]*b[1];
    r[2] = a[2]*b[2];
    r[3] = r[0] + r[1] + r[2];
    r[3] = r[0] + r[1] + r[2];

    norm[0] = sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
    norm[1] = sqrt(b[0] * b[0] + b[1] * b[1] + b[2] * b[2]);

    printf("\n%f = %f * %f *cos0\n\n", r[3], norm[0], norm[1]);

    cos = r[3] / norm[0] / norm[1];
    printf("cos0 = %f\n\n", cos);

    system("pause");
    return 0;
}

int vetuni(){
     float a[3], r, v[3];

    system("cls");

    printf("\t\tDigite os 3 numeros: ");
    scanf("%f %f %f", &a[0], &a[1], &a[2]);

    r = sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);

    v[0] = a[0]/r;
    v[1] = a[1]/r;
    v[2] = a[2]/r;

    printf("\n \tNorma: %f", r);
    printf("\n\t Vetor unitario: %f i, %f j,  %f k\n\n", v[0], v[1], v[2]);

    system("pause");
    return 0;

    return 0;
}

int prodtriplesc(){

    float a[3], r, v[3];

    system("cls");

    printf("\t\tDigite o eixo de rotacao: ");
    scanf("%f %f %f", &a[0], &a[1], &a[2]);

    r = sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);

    v[0] = a[0]/r;
    v[1] = a[1]/r;
    v[2] = a[2]/r;


    printf("\n\t       |i  j  k|\n");
    printf("\tvetor r|");
    scanf("%f %f %f", &a[0], &a[1], &a[2]);
    printf("\tvetor f|");
    scanf("%f %f %f", &b[0], &b[1], &b[2]);

    system("cls");

    printf("\t|i      j      k|\n");
    printf("\t|%f  %f  %f|\n", a[0], a[1], a[2]);
    printf("\t|%f  %f  %f|\n", b[0], b[1], b[2]);
    printf("\t------------------\n");

    c[0] = a[1]*b[2] - a[2]*b[1];
    c[1] = a[2]*b[0] - a[0]*b[2];
    c[2] = a[0]*b[1] - a[1]*b[0];

    m = sqrt(c[0]*c[0] + c[1]*c[1] + c[2]*c[2]);



    return 0;
}

int main (){
    int a;

    do{
        system("cls");
        a = interface();

        switch  (a) {

            case 1:
                matriz();
            break;
            case 2:
                raizes();
            break;
            case 3:
                escalar();
            break;
            case 4:
                angulo();
            break;
            case 5:
                vetuni();
            break;
        }
    }while(a!=0);
    return 0;
}
