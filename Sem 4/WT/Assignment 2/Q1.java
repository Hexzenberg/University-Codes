//WAP to draw rectangle using line
import java.applet.*;
import java.awt.*;
public class Q1 extends Applet{
    public void paint(Graphics obj){ 
        obj.drawLine(350,350,700,350); 
        obj.drawLine(700,350,700,600); 
        obj.drawLine(700,600,350,600); 
        obj.drawLine(350,600,350,350); 
    } 
}
/*
 <html>
 <applet code=Q1 height=1000 width=1000></applet>
 </html>
*/
