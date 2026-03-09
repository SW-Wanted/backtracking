```c
void solve(int pos)
{
    if (solucao_completa)
    {
        print();
        return;
    }

    for (cada escolha possível)
    {
        if (escolha_valida)
        {
            fazer_escolha();

            solve(pos + 1);

            desfazer_escolha();
        }
    }
}
```