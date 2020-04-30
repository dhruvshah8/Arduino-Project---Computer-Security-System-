/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package delete;

import java.awt.AWTException;
import java.awt.Robot;
import java.awt.event.KeyEvent;

/**
 *
 * @author jeffsun
 */
public class Delete {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws AWTException {
        // TODO code application logic here
        
        switchTabs();
    }
    
    public static void switchTabs() throws AWTException {
        Robot robot = new Robot();
        robot.keyPress(KeyEvent.VK_ALT);
        robot.keyPress(KeyEvent.VK_TAB);
        robot.keyRelease(KeyEvent.VK_TAB);
        robot.keyRelease(KeyEvent.VK_ALT);
    }    
    
    
}
