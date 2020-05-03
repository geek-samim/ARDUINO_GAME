void   Level_Controller() //Increase the speed of game based on the score.
{
  if (score>=0 && score<=10) //If score 0-10
  {
    game_speed = 0; delay(80); //slow the game by 80ms
  }
    if (score>10 && score<=20) //If score 10-40
  {
    game_speed = 1; delay(70); //slow the game by 70ms
  }
    if (score>20 && score<=30) //If score 20-40
  {
    game_speed = 2; delay(60); //slow the game by 60ms
  }
    if (score>30 && score<=40) //If score 30-40
  {
    game_speed = 3; delay(50); //slow the game by 50ms
  }
}
