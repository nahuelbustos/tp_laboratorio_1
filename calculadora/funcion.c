float suma(float resultado)
{
    float x,y;
    printf(" Ingresar 1er operando (A=x)\n");
    scanf("%f",&x);
    printf(" Ingresar 2do operando (B=y)\n");
    scanf("%f",&y);
    resultado=x+y;

    printf("%f + %f es: %f\n",x,y,resultado);


}

float resta(float resultado)
{
    float x,y;
    printf(" Ingresar 1er operando (A= %x)\n",x);
    scanf("%f",&x);
    printf(" Ingresar 2do operando (B=y)\n");
    scanf("%f",&y);
    resultado= x-y;
    printf(" %f - %f es %f\n",x,y,resultado);
}

float multiplicacion(float resultado)
{
    float x,y;
    printf(" Ingresar 1er operando (A=x)\n");
    scanf("%f",&x);
    printf(" Ingresar 2do operando (B=y)\n");
    scanf("%f",&y);
    resultado=x*y;
    printf("%f x %f es %f\n",x,y,resultado);
}
float division(float resultado)
{
    float x,y;
    printf("ingrese el 1er operando(A=x)\n");
    scanf("%f",&x);
    do
    {
        printf("ingrese el 2do operando(B=y\n");
        scanf("%f",&y);
        if(y==0)
        {
            printf("error, ingrese numero distinto de cero\n");
        }
    }
    while(y==0);
    resultado=x/y;
    printf("%f / %f es %f\n", x,y,resultado);
}

int factorial(int resultado)
{


    int x, y, fact = 1;

    printf("Escribe 1er operando \n");
    scanf("%d", &x);

    for (y = x; y > 1; y--)
    {
        fact = fact * y;
    }
    printf("El factorial de %d = %d\n", x, fact);

    return 0;

}


float allOper(float resultado)
{
    float x,y, rs,rr,rm,rd,rf; //resultado suma, resultado resta...


    printf(" Ingresar 1er operando (A=x)\n");
    scanf("%f",&x);
    printf(" Ingresar 2do operando (B=y)\n");
    scanf("%f",&y);
   rs=x+y;
        rr=x-y;
        rm=x*y;
        rd=x/y;
        int fact = 1;

        {




        for (y = x; y > 1; y--)
        {
            fact = fact * y;
        }



        printf("%f + %f es: %f\n",x,y,rs);
        printf(" %f - %f es %f\n",x,y,rr);
        printf("%f x %f es %f\n",x,y,rm);
        printf("%f / %f es %f\n", x,y,rd);
        printf("El factorial de %d = %d\n", x, rf);



        return 0;


    }}


































