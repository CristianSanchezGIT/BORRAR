/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package proyecto.vopec.mysql;

import java.sql.Connection;
import java.sql.DriverManager;

public class ProyectoVOPECMysql {

  Connection conectar=null;
  
  public Connection ProyectoVOPECMysql(){
  
      try{
Class.forName("com.mysql.jdbc.Driver");
conectar=DriverManager.getConnection("jdbc:mysql://localhost/vopec","root","");
}catch (Exception e) {
System.out.print(e.getMessage());
}
return conectar;
  
  
  }
}
