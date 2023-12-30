import java.awt.*;
import java.applet.*;
public class Q15 extends Applet{
    public void paint(Graphics g){
        int[] x={300,500,500,300,100,100},y={50,200,400,550,400,200};
        int[] x1={110,295,295},y1={200,65,250};
        int[] x2={305,490,305},y2={65,200,250};
        int[] x3={310,490,490},y3={255,390,205};
        int[] x4={110,110,295},y4={205,390,255};
        int[] x5={120,295,295},y5={400,535,265};
        int[] x6={305,490,305},y6={535,400,265};
        g.fillPolygon(x,y,6);
        g.setColor(Color.red);
        g.fillPolygon(x1,y1,3);
        g.setColor(Color.yellow);
        g.fillPolygon(x2,y2,3);
        g.setColor(Color.green);
        g.fillPolygon(x3,y3,3);
        g.setColor(Color.green);
        g.fillPolygon(x4,y4,3);
        g.setColor(Color.yellow);
        g.fillPolygon(x5,y5,3);
        g.setColor(Color.cyan);
        g.fillPolygon(x6,y6,3);
    }
}
//<html><applet code=Q15 width=600 height=600></applet></html>