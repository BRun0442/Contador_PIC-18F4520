int count = 0;

void main() {
  PORTB.RB0 = 1;
  PORTB.RB1 = 1;

  adcon1 = 15;

  TRISD = 0;
  LATD = 0;

  while(1)
  {
    if(PORTB.rb0 == 0)
    {
            delay_ms(500);
            count >> 1;
            LATD = (LATD - 1)/2;
    }

    if(PORTB.rb1 == 0)
    {
            delay_ms(500);
            count << 1;
            LATD = LATD + LATD + 1;
    }
  }
}