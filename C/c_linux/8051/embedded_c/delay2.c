void delay_sec(unsigned char delay)

{
	unsigned int i;
	for(;delay;delay--)
	for(i=1;i<=1000;i++);
}
main()
{
delay_sec(1);
while(1);
}
