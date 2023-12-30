//WAP to draw rectangle and another rectangle within it and display your name in the center
import java.applet.*;
import java.awt.*;
public class Q2 extends Applet{
    public void paint(Graphics g){
        g.setColor(Color.BLUE);
        g.drawRect(350, 350, 400, 300);
        g.setColor(Color.RED);
        g.drawRect(400, 400, 300, 200);
        g.setColor(Color.DARK_GRAY);
        g.drawString("Nikhil Kumar Chaudhary",480,500);
    }
}
/*
 <html>
 <applet code=Q2 height=500 width=500></applet>
 </html>
*/