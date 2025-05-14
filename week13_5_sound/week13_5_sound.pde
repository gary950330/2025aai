// week13_5_sound
// 要先安裝 Sketch-Libarary-Manage Libraries...
// 找 sound 下載 Sound 的函式 點install 安裝
import processing.sound.*;
SoundFile mySound, monkey, sword;
void setup(){
  size(400, 400);
  monkey = new SoundFile(this, "Monkey 1.mp3");
  sword = new SoundFile(this, "sword slash.mp3");
  mySound = new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();
}
void mousePressed(){
  if(mouseButton==LEFT) monkey.play();
  if(mouseButton==RIGHT) sword.play();
}
void draw(){
  
}
   
