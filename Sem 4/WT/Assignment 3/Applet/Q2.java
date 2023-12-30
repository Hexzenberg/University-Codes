import java.awt.*;
import java.applet.*;
public class Q2 extends Applet{
    int x[]={25,75,50},y[]={30,80,50};
    public void paint(Graphics o){
        o.setColor(Color.black);
        o.drawPolygon(x,y,3);
    }
}
// <html><applet code=Q2 width=500 height=500></applet></html>