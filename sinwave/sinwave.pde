float angle=0.0;
float offset=300.0;
float scaleValue=50.0;
float angleincre=PI/360;
void setup()
{
  size(1200,760);
  frameRate(60);
}
void draw()
{
  background(200);
  for(float x=0;x<=width;x+=1)
  {
    float y= offset+(sin(angle)*scaleValue);
    rect(x,y,1,1);
    angle+=angleincre;
  }
  delay(1000);
}