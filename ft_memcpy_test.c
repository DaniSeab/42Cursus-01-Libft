int main()
{
    char dest1[] = "alor";
    char src1[] = "";
    char dest2[] = "alor";
    char src2[] = "";
    char dest3[] = "1111111111";
    char src3[] = "456";
    char dest4[] = "1111111111";
    char src4[] = "456";
    char dest5[] = "1111111111";
    char src5[] = "olaeai777777yolo";
    char dest6[] = "1111111111";
    char src6[] = "olaeai777777yolo";

    memcpy(dest1, src1, 2);
    ft_memcpy(dest2, src2, 2);
    printf("Real func = %s \n", dest1);
    printf("My func   = %s \n\n", dest2);
    
    memcpy(dest3, src3, 3);
    ft_memcpy(dest4, src4, 3);
    printf("Real func = %s \n", dest3);
    printf("My func   = %s \n\n", dest4);

    memcpy(dest5, src5, 12);
    ft_memcpy(dest6, src6, 12);
    printf("Real func = %s \n", dest5);
    printf("My func   = %s \n\n", dest6);

    return (0);
}