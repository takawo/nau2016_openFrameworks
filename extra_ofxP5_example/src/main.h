
void setup() {

}

void draw() {
    translate(width/2,height/2);
    for(float angle = 0; angle < 360; angle += 10){
        float theta = radians(angle);
        float x = cos(theta)* 200;
        float y = sin(theta)* 200;
        pushMatrix();
        translate(x,y);
        ellipse(0,0,10,10);
        popMatrix();
    }
}

void mousePressed() {

}

void keyPressed() {

}
