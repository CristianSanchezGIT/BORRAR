package Audio;

import java.io.File;
import java.io.IOException;
import javax.sound.sampled.AudioSystem;
import javax.sound.sampled.LineUnavailableException;
import javax.sound.sampled.UnsupportedAudioFileException;

public class AudioJuego {

    public static javax.sound.sampled.Clip sonido;
   
    public AudioJuego() {
        this.sonido = null;
    }

    //solo usaremos este metodo estatico para evitar lainstancia de un objeto inesseario de esta clase
    // Y se llamara cada ves que lampelota golpee una raqueta
    public static void sonidoBeepMenu() {
        try {
            sonido = AudioSystem.getClip();
            sonido.open(AudioSystem.getAudioInputStream(new File("D:/Programacion/Proyectos/java/C-Pong/Sonidos/Beep menu.wav")));

        } catch (LineUnavailableException | UnsupportedAudioFileException | IOException ee) {
            System.out.println(ee);
        }
            sonido.start();
    }        
}
