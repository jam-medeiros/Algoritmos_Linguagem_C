void main()
{
    int dados[10][4], i, curso, crMaior = 0, iMaior;
    for (i = 0; i < 10; i++)
    {
        printf("Informe os dados do aluno %d: \n", i + 1);
        printf("Informe a matricula <aascccnnn>:");
        scanf("%d", &dados[i][0]);
        printf("Informe o sexo <0-Feminino / 1-Masculino>:");
        scanf("%d", &dados[i][1]);
        printf("Informe o codigo do curso:");
        scanf("%d", &dados[i][2]);
        printf("Informe o CR:");
        scanf("%d", &dados[i][3]);
    }
    //consultando a premiada
    printf("Informe o curso para premiacao:\n");
    scanf("%d", &curso);

    for (i = 0; i < 10; i++)
    {
        if (dados[i][2] == curso)
        {
            if (dados[i][3] > crMaior && dados[i][1] == 0)
            {
                crMaior = dados[i][3];
                iMaior = i;
            }
        }
    }
    //imprimindo a aluna premiada
    printf("Dados da aluna premiada\n");
    printf("Matricula \t Sexo \t Curso \t CR \n");
    printf("%d \t\t", dados[iMaior][0]);
    printf("Fem. \t");
    printf("%d \t", dados[iMaior][2]);
    printf("%d \n", dados[iMaior][3]);
}
