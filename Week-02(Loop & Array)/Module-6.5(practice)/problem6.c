/*
        G. Katryoshka
    The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

    Two eyes and one body.
    Two eyes, one mouth, and one body.
    One eye, one mouth, and one body.
    If the king has n
    eyes, m
    mouths and k
    bodies, what is the largest number of Katryoshkas he can make?

    Sample Input:       Output:
    1 2 3               1
    0 11 2              0
    90 24 89            57
*/
#include <stdio.h>
int main()
{
    long long int eye, mouth, body, kat1 = 0, kat2 = 0;
    scanf("%lld %lld %lld", &eye, &mouth, &body);
    if (eye > 0 && mouth > 0 && body > 0)
    {
        if (eye < mouth && eye < body)
        {
            kat1 = eye;
        }
        else if (mouth < eye && mouth < body)
        {
            kat1 = mouth;
        }
        else
        {
            kat1 = body;
        }
    }
    eye = eye - kat1;
    body = body - kat1;
    if (eye > 1 && body > 0)
    {
        if ((eye / 2) <= body)
        {
            kat2 = eye / 2;
        }
        else
        {
            kat2 = body;
        }
    }
    printf("%lld\n", kat1 + kat2);
    return 0;
}