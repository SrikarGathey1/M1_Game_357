void display_circle(int three, int five, int seven)
{
    char *three_top = "O O";
    char *three_bottom = " O";
    char *five_top = "O O O"; 
    char *five_bottom = " O O";
    char *seven_top = "O O O O"; 
    char *seven_bottom = " O O O";
    if(three < 3)
    {
        three_bottom = " X";
    }
    if(three == 1)
    {
        three_top = "O X";
    }
    if(three == 0)
    {
        three_top = "X X";
    }
    if(five == 4)
    {
        five_bottom = " O X";
    }
    if(five <= 3)
    {
        five_bottom = " X X";
        if(five == 2)
        {
            five_top = "O O X";
        }
        if(five == 1)
        {
            five_top = "O X X";
        }
        if(five == 0)
        {
            five_top = "X X X";
        }
    }
    if(seven == 6)
    {
        seven_bottom = " O O X";
    }
    if(seven == 5)
    {
        seven_bottom = " O X X";
    }
    if(seven <= 4)
    {
        seven_bottom = " X X X";
        if(seven == 3)
        {
            seven_top = "O O O X";
        }
        if(seven == 2)
        {
            seven_top = "O O X X";
        }
        if(seven == 1)
        {
            seven_top = "O X X X";
        }
        if(seven == 0)
        {
            seven_top = "X X X X";
        }
    }
    printf("\n");
    printf("\t%s\t %s \t%s\n", three_top, five_top, seven_top);
    printf("\t%s\t %s \t%s\n\n", three_bottom, five_bottom, seven_bottom);
}

void invalid()
{
    printf("Enter a valid value");
    return;
}