#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Quiz(int Question_No)
{
int ans;
int Prize_money=0;
if(Question_No==1)
{
    printf("Which planet is closest to the Sun\n");
    printf("1)Mercury 2)Mars 3)Earth 4)Neptune \n");
    scanf("%d", &ans);
   
    if(ans==1)
    {
        printf("Correct answer\n");
        Prize_money+=10000;
    }
    else{
        printf("Galat hai\n");
    }
}    
else if(Question_No==2)
{
    printf("How many planets are there in our solar system?\n");
    printf("1)five  2)nine 3)six  4)Eight\n");
    scanf("%d",&ans);
   
    if(ans==4)
    {
        printf("correct answer\n");
        Prize_money+=10000;
}
    else
    {
   printf("Galat hai\n");
    }
}
else if(Question_No==3)
{
    printf("Where is Minar-e-Pakistan located?\n");
    printf("1)Delhi  2)Lahore 3)Karachi  4)Islamabad\n");
    scanf("%d",&ans);
   
    if(ans==2)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
   printf("Galat hai\n");
    }
}
else if(Question_No==4)
{
    printf("How many countries are there in Asia\n");
    printf("1)40  2)102 3)48 4) 59\n");
    scanf("%d",&ans);
   
    if(ans==3)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==5)
{
    printf("How many Arab countries are in the world?\n");
    printf("1)40 2)15 3)21 4)22\n");
    scanf("%d",&ans);
   
    if(ans==4)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==6)
{
    printf("Which city is the capital of SaudiaArabia\n");
    printf("1) Al Riyadh 2) Taif 3) Jeddah 4) Mehran\n");

    scanf("%d",&ans);
   
    if(ans==1)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}

else if(Question_No==7)
{
    printf("Which programming language was originally called Oak?\n");
    printf("1)Java  2)Python  3)C++  4)Ruby \n");

    scanf("%d",&ans);
   
    if(ans==1)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==8)
{
    printf("Which of the following is a real programming language?\n");
    printf("1)LOLCODE  2)Klingon  3)Elvish  4)Dothraki \n");

    scanf("%d",&ans);
   
    if(ans==1)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==9)
{
    printf("What is the boundary around a black hole beyond which nothing can escape,not even light?\n");
    printf("1)Ergosphere  2)Singularity  3)Photon sphere  4)Event horizon \n");

    scanf("%d",&ans);
   
    if(ans==4)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==10)
{
    printf("Who is credited with introducing the use of Indian numerals (0 to 9) to the Islamic world, which later spread to Europe?\n");
    printf("1)Al-Farabi  2)Al-Battani  3)Al-Khwarizmi  4)Al-Haytham \n");

    scanf("%d",&ans);
   
    if(ans==3)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==11)
{
    printf("Which Muslim scientist and polymath made significant contributions to fields such as medicine, chemistry, philosophy, and music?\n");
    printf("1)Ibn Rushd  2)Al-Farabi 3)Ibn al-Haytham  4)Al-Kindi \n");

    scanf("%d",&ans);
   
    if(ans==1)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==12)
{
    printf("Who is often referred to as the Father of Optics and made significant contributions to the understanding of light and vision?\n");
    printf("1)Ibn al-Haytham  2)Ibn Sina  3)Al-Razi  4)Al-Farabi \n");

    scanf("%d",&ans);
   
    if(ans==1)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==13)
{
    printf("Who is often referred to as the First Pharmacologist for his work in the field of pharmacy and pharmacology\n");
    printf("1)Al-Razi  2)Al-Farabi  3)Ibn al-Haytham  4)Al-Kindi \n");

    scanf("%d",&ans);
   
    if(ans==1)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}

else if(Question_No==14)
{
    printf("Which car company produced the first production car with a top speed exceeding 400 km per hour?\n");
    printf("1)Bugatti  2)Ferrari  3)Lamborghini  4)McLaren \n");

    scanf("%d",&ans);
   
    if(ans==1)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==15)
{
    printf("Which Muslim scientist is known for his pioneering work in algebra and is often called the Father of Algebra?\n");
    printf("1)Al-Razi  2)Al-Kindi  3)Al-Khwarizmi  4) Ibn Sina \n");

    scanf("%d",&ans);
   
    if(ans==3)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==16)
{
    printf("What is the capital city of Australia?\n");
    printf("1)Sydney  2)Melbourne  3)Canberra  4)Brisbane \n");

    scanf("%d",&ans);
   
    if(ans==3)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==17)
{
    printf("Which planet is known as the Red Planet?\n");
    printf("1)Mars  2)Venus  3)Jupiter  4)Saturn \n");

    scanf("%d",&ans);
   
    if(ans==1)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==18)
{
    printf(" In which year did World War II end?\n");
    printf("1)1943  2)1945  3)1947  4)1950 \n");

    scanf("%d",&ans);
   
    if(ans==2)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==19)
{
    printf("What is the largest ocean on Earth?\n");
    printf("1)Atlantic Ocean  2)Indian Ocean  3) Southern Ocean  4)Pacific Ocean \n");

    scanf("%d",&ans);
   
    if(ans==4)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==20)
{
    printf("Who is known as the Father of Modern Physics?\n");
    printf("1)Isaac Newton  2)Galileo Galilei  3)Albert Einstein  4)Nikola Tesla \n");

    scanf("%d",&ans);
   
    if(ans==3)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==21)
{
    printf("Which country is known as the Land of the Rising Sun?\n");
    printf("1)China  2)Japan 3)South Korea  4)Vietnam \n");

    scanf("%d",&ans);
   
    if(ans==2)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==22)
{
    printf("What is the currency of Brazil?\n");
    printf("1)Peso  2)Real  3)Euro  4)Rupee \n");

    scanf("%d",&ans);
   
    if(ans==2)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==23)
{
    printf("What is the largest mammal in the world?\n");
    printf("1)Elephant  2)Blue Whale  3)Giraffe 4)Gorilla \n");

    scanf("%d",&ans);
   
    if(ans==2)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==24)
{
    printf("What is the currency of Japan?\n");
    printf("1)Yen  2)Won  3)Ringgit  4)Baht \n");

    scanf("%d",&ans);
   
    if(ans==1)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==25)
{
    printf(" Which planet is known as the Morning Star or Evening Star?\n");
    printf("1)Jupiter  2)Saturn  3)Earth  4)Venus \n");

    scanf("%d",&ans);
   
    if(ans==4)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==26)
{
    printf("In what year did the Berlin Wall fall, leading to the reunification of Germany?\n");
    printf("1)1985  2)1989  3)1991  4)1995 \n");

    scanf("%d",&ans);
   
    if(ans==2)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==27)
{
    printf(" Who wrote the novel 1984?\n");
    printf("1)Aldous Huxley  2)George Orwell  3)J.R.R. Tolkien  4)Ray Bradbury \n");

    scanf("%d",&ans);
   
    if(ans==2)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==28)
{
    printf("In what year did Christopher Columbus first reach the Americas?\n");
    printf("1)1607  2)1510  3)1620  4)1492  \n");

    scanf("%d",&ans);
   
    if(ans==4)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==29)
{
    printf("Which planet is known as the Gas Giant?\n");
    printf("1)Saturn  2)Uranus  3)Jupiter  4)Neptune \n");

    scanf("%d",&ans);
   
    if(ans==3)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
else if(Question_No==30)
{
    printf("What is the currency of Mexico?\n");
    printf("1)Real  2)Peso  3)Dollar  4)Euro \n");

    scanf("%d",&ans);
   
    if(ans==2)
    {
        printf("correct answer\n");
        Prize_money+=10000;
    }
    else
    {
        printf("Galat hai\n");
    }
}
return Prize_money;
}
int main()
{
int Prize_money=0;
char yes_or_no,y;
printf("This is a Quiz game. Do you wanna take part in it?(if so press Y)\n");
scanf(" %c",&yes_or_no);
if(yes_or_no=='y'||yes_or_no=='Y')
{
    printf("\nNote:To answer the Question you should only use its choice number\n\n");
    srand(time(NULL));
    for(int i=1;i<=10;i++)
    {
int randomQuestion = rand()%30+1;
    Prize_money+=Quiz(randomQuestion);
    }
     printf("you earned Rs. %d\n",Prize_money);
     printf("You are not getting anything.You just got scammed");
}
else
{
    printf("Please play our Quiz game-_-");
    return 0;
}
}