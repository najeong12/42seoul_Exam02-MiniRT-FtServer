#include "../../includes/minirt.h"

int        sp_parse(t_cntl *cntl, char **one_line)
{
    char **tmp;
    char **tmp2;

    if (cal_cmd_len(one_line) != 4)
    {
        printf("Error: camera 인수 개수 오류\n");
        return (0);
    }
    if ((tmp = ft_split_char(one_line[1], ',')) == NULL)
    {
        printf("Error: split 오류!\n");
        return (0);
    }
    if (ft_atoi(tmp[0]) == -1 || ft_atoi(tmp[1]) == -1 || ft_atoi(tmp[2]) == -1)
    {
        return (0);
    }
    if ((tmp2 = ft_split_char(one_line[2], ',')) == NULL)
    {
        printf("Error: split 오류!\n");
        return (0);
    }
    if (ft_atoi(tmp2[0]) == -1 || ft_atoi(tmp2[1]) == -1 || ft_atoi(tmp2[2]) == -1)
    {
        return (0);
    }
    oadd(&cntl->scene->world, object(SP, sphere(point3(ft_atoi(tmp[0]), ft_atoi(tmp[1]), ft_atoi(tmp[2])), 
            ft_atof(one_line[2])), color(ft_atoi(tmp2[0]), ft_atoi(tmp2[1]), ft_atoi(tmp2[2]))));

    free(tmp);
    free(tmp2);

    return (1);
}
int        pl_parse(t_cntl *cntl, char **one_line)
{
    char **tmp;
    char **tmp2;
    char **tmp3;

    if (cal_cmd_len(one_line) != 4)
    {
        printf("Error: camera 인수 개수 오류\n");
        return (0);
    }
    if ((tmp = ft_split_char(one_line[1], ',')) == NULL)
    {
        printf("Error: split 오류!\n");
        return (0);
    }
    if (ft_atoi(tmp[0]) == -1 || ft_atoi(tmp[1]) == -1 || ft_atoi(tmp[2]) == -1)
    {
        return (0);
    }
    if ((tmp2 = ft_split_char(one_line[2], ',')) == NULL)
    {
        printf("Error: split 오류!\n");
        return (0);
    }
    if (ft_atoi(tmp2[0]) == -1 || ft_atoi(tmp2[1]) == -1 || ft_atoi(tmp2[2]) == -1)
    {
        return (0);
    }
    if ((tmp3 = ft_split_char(one_line[3], ',')) == NULL)
    {
        printf("Error: split 오류!\n");
        return (0);
    }
    if (ft_atoi(tmp3[0]) == -1 || ft_atoi(tmp3[1]) == -1 || ft_atoi(tmp3[2]) == -1)
    {
        return (0);
    }
    oadd(&cntl->scene->world, object(PL, plane(point3(ft_atoi(tmp[0]), ft_atoi(tmp[1]), ft_atoi(tmp[2])), 
            vec(ft_atoi(tmp2[0]), ft_atoi(tmp2[1]), ft_atoi(tmp2[2]))), color(ft_atoi(tmp3[0])/255.99, ft_atoi(tmp3[1])/255.99, ft_atoi(tmp3[2])/255.99)));
    free(tmp);
    free(tmp2);
    free(tmp3);
    return (1);
}

int        sq_parse(t_cntl *cntl, char **one_line)
{
    cntl = 0;
    one_line = 0;

    return (1);
}

int        cy_parse(t_cntl *cntl, char **one_line)
{
    cntl = 0;
    one_line = 0;

    return (1);
}

int        tr_parse(t_cntl *cntl, char **one_line)
{
    cntl = 0;
    one_line = 0;

    return (1);
}