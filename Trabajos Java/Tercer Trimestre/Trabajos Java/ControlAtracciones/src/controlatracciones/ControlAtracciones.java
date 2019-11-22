/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package controlatracciones;

/**
 *
 * @author Cristian
 */
public class ControlAtracciones {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        // Objetos
        Atraccion ExprimeCerebros=new Atraccion();
        Atraccion MachacaEstomagos=new Atraccion();
 
        // Propiedades
        ExprimeCerebros.nombre="Exprime_Cerebros";
        ExprimeCerebros.lugar="Sector Este, Plaza 12";
        ExprimeCerebros.encendido=false;
        ExprimeCerebros.velocidad=0;
        
        MachacaEstomagos.nombre="Machaca_Estomagos";
        MachacaEstomagos.lugar="Sector Oeste, Plaza 25";
        MachacaEstomagos.encendido=false;
        MachacaEstomagos.velocidad=0;
        
        // Información Del ExprimeCerebros
        
        ExprimeCerebros.nombre();
        ExprimeCerebros.estado();
        ExprimeCerebros.encender();
        ExprimeCerebros.masrapido();
        ExprimeCerebros.estado();
        ExprimeCerebros.masrapido();
        ExprimeCerebros.estado();
        ExprimeCerebros.masrapido();
        ExprimeCerebros.estado();
        ExprimeCerebros.maslento();
        ExprimeCerebros.estado();
        ExprimeCerebros.maslento();
        ExprimeCerebros.estado();
        ExprimeCerebros.maslento();
        ExprimeCerebros.apagar();
        ExprimeCerebros.estado();
        // Información Del MachacaEstomagos
        
        MachacaEstomagos.nombre();
        MachacaEstomagos.estado();
        MachacaEstomagos.encender();
        MachacaEstomagos.masrapido();
        MachacaEstomagos.estado();
        MachacaEstomagos.masrapido();
        MachacaEstomagos.estado();
        MachacaEstomagos.masrapido();
        MachacaEstomagos.estado();
        MachacaEstomagos.maslento();
        MachacaEstomagos.estado();
        MachacaEstomagos.maslento();
        MachacaEstomagos.estado();
        MachacaEstomagos.maslento();
        MachacaEstomagos.apagar();
        MachacaEstomagos.estado();
    }
    
}
