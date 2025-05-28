// week15_3_zongzi_Plmage_imgae_falling_part2
PImage zongzi;
void setup(){
  size(600, 400);
  zongzi = loadImage("zongzi.png");
  imageMode(CENTER);
}
float [] x = new float[100];
float [] y = new float[100];
int N = 0;
void draw(){
  background(#C0ffee);
  for(int i=0; i<N; i++){
    image(zongzi, x[i], y[i], 60, 50);
    y[i]++;
  }
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;
}
