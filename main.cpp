#include"libOne.h"
let h = 1.7320508f;
let w = 1.0f;
void rightTri() {
    strokeWeight(4);
    stroke(0, 153, 221);
    mathLine(0, 0, w, 0);
    mathLine(0, 0, w, h);
    mathLine(w, 0, w, h);
}
void text() {
    let l = 0;
    let angle = 0;
    let ts = 30;
    let line = 0;
    textSize(ts);
    mathText("íÍï”=" + w, (float)w/2,0);
    mathText("çÇÇ≥=" + h, w, (float)h/2);
    l = sqrt(w * w + h * h);
    mathText("éŒï”=" + l, 0, (float)h/2);
    angle = atan2(h, w);
    text("äpìx=" + angle, 0, ts);
}

program() {
    window(1920, 1080, full);
    angleMode(DEGREES);
    repeat() {
        clear(200);
        mathAxis(4.0f);
        rightTri();
        text();
    }
}