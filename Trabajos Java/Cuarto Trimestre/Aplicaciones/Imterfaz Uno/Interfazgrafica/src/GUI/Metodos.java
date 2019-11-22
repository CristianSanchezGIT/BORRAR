package GUI;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Nueva Cuenta
 */

//import java.sql.Connection;
//import java.sql.PreparedStatement;
//import java.sql.ResultSet;
//import java.sql.SQLException;
//import javax.swing.JOptionPane;
//import javax.swing.JTable;
//import javax.swing.table.DefaultTableModel; 

public class Metodos {
    
//   Pool metodospool = new Pool();
//DefaultTableModel ModeloTabla;
//    
//public void Buscar(String valor, String filtro, JTable tablacontactos){
//
//    String [] columnas={"ID","Nombres","Apellidos","Email","Celular", "Dirección", "Ciudad"};
//    String [] registro=new String[7];
//    ModeloTabla=new DefaultTableModel(null,columnas);      
//    String SSQL;
//    Connection conect = null;
//    
//    if(filtro.equals("Apellidos")){
//    
//        SSQL= "SELECT id_contacto, nombres, apellidos, email, celular, direccion, ciudad "
//                 + "FROM contacto WHERE apellidos LIKE '%"+valor+"%'";
//        
//    }else if(filtro.equals("Email")){
//    
//        SSQL= "SELECT id_contacto, nombres, apellidos, email, celular, direccion, ciudad "
//                 + "FROM contacto WHERE email LIKE '%"+valor+"%'";
//    
//    }else{
//    
//        SSQL= "SELECT id_contacto, nombres, apellidos, email, celular, direccion, ciudad "
//                 + "FROM contacto WHERE celular LIKE '%"+valor+"%'";
//    
//    }
//        
//         
//    try {
//
//        conect = metodospool.dataSource.getConnection();
//        PreparedStatement st = conect.prepareStatement(SSQL);
//        ResultSet rs = st.executeQuery();
//
//        while (rs.next()){
//          
//            registro[0]=rs.getString("id_contacto");
//            registro[1]=rs.getString("nombres");
//            registro[2]=rs.getString("apellidos");
//            registro[3]=rs.getString("email");
//            registro[4]=rs.getString("celular");
//            registro[5]=rs.getString("direccion");
//            registro[6]=rs.getString("ciudad");
//          
//            ModeloTabla.addRow(registro);
//           
//        }
//        
//        tablacontactos.setModel(ModeloTabla);
//
//    } catch (SQLException e) {
//
//
//        JOptionPane.showMessageDialog(null, e, "Error durante el procedimiento", JOptionPane.ERROR_MESSAGE);
//    
//    
//    }finally{
//
//        if(conect!=null){
//        
//            try {
//
//                conect.close();
//
//            } catch (SQLException ex) {
//
//                JOptionPane.showMessageDialog(null, ex, "Error de desconexión", JOptionPane.ERROR_MESSAGE);
//
//            }
//        
//        }
//        
//    }
//
//}



    
}
