#include <mega32.h>
#include <alcd.h>

    int putkey(void)
{
    PORTC.0=0; PORTC.1=1; PORTC.2=1; PORTC.3=1;
    if(!PINC.4) return 1;
    if(!PINC.5) return 2;
    if(!PINC.6) return 3;
    if(!PINC.7) return 10;

    PORTC.0=1; PORTC.1=0; PORTC.2=1; PORTC.3=1;
    if(!PINC.4) return 4;
    if(!PINC.5) return 5;
    if(!PINC.6) return 6;
    if(!PINC.7) return 11;

    PORTC.0=1; PORTC.1=1; PORTC.2=0; PORTC.3=1;
    if(!PINC.4) return 7;
    if(!PINC.5) return 8;
    if(!PINC.6) return 9;
    if(!PINC.7) return 12;

    PORTC.0=1; PORTC.1=1; PORTC.2=1; PORTC.3=0;
    if(!PINC.4) return 15;
    if(!PINC.5) return 0;
    if(!PINC.6) return 14;
    if(!PINC.7) return 13;
    
    return 16; //اگه کليدي فشرده نشه مقدار 16 ارسال ميشه
    //if dont put the key return the 16
}


void readkey(int key)
{
    if(key==0)  lcd_puts("0");
    if(key==1)  lcd_puts("1");
    if(key==2)  lcd_puts("2");
    if(key==3)  lcd_puts("3");
    if(key==4)  lcd_puts("4");
    if(key==5)  lcd_puts("5");
    if(key==6)  lcd_puts("6");
    if(key==7)  lcd_puts("7");
    if(key==8)  lcd_puts("8");
    if(key==9)  lcd_puts("9");
    if(key==10) lcd_puts("/");
    if(key==11) lcd_puts("*");
    if(key==12) lcd_puts("+");
    if(key==13) lcd_puts("-");
    if(key==14) lcd_puts("=");
    if(key==15) lcd_clear();
}
