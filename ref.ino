void enemy_ship(int place, int phase) //Place the enemy_ship in the new place and phase

{

  if (place==1)

  display.drawBitmap(2, phase, enemy, 15, 15, BLACK);



  if (place==2)

  display.drawBitmap(18, phase, enemy, 15, 15, BLACK);



  if (place==3)

  display.drawBitmap(34, phase, enemy, 15, 15, BLACK);

}
