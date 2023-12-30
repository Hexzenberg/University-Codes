import java.awt.*;
import java.applet.*;
public class Q19 extends Applet{
    public void paint(Graphics g){
        setBackground(Color.lightGray);
        int[]x={0,350,700,700,350,0},y={150,50,150,350,450,350};
        int[]x1={50,345,345},y1={145,60,145},x2={650,355,355},y2={145,60,145};
        int[]x3={50,345,345},y3={355,440,355},x4={650,355,355},y4={355,440,355};
        int[]x5={25,345,345},y5={155,340,155},x6={675,355,355},y6={155,340,155};
        int[]x7={10,340,10},y7={155,345,345},x8={360,690,690},y8={345,155,345};
        g.fillPolygon(x,y,6);
        g.setColor(Color.red);
        g.fillPolygon(x1,y1,3);
        g.setColor(Color.yellow);
        g.fillPolygon(x2,y2,3);
        g.setColor(Color.yellow);
        g.fillPolygon(x3,y3,3);
        g.setColor(Color.red);
        g.fillPolygon(x4,y4,3);
        g.setColor(Color.blue);
        g.fillPolygon(x5,y5,3);
        g.setColor(Color.green);
        g.fillPolygon(x6,y6,3);
        g.setColor(Color.green);
        g.fillPolygon(x7,y7,3);
        g.setColor(Color.blue);
        g.fillPolygon(x8,y8,3);
    }
}
//<html><applet code=Q19 width=700 height=500></applet></html>