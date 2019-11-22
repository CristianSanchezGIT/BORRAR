Proceso juego
	Repetir
		Borrar Pantalla
		Escribir "";
		Escribir "";
		Escribir "";
		Escribir "    //////////////////////////////////////////////////////////////////////////////////";
		Escribir "    //                                                                              //";
		Escribir "    //  MMMMM   MMMMM  MMMMMMM  MMMMM   MMMMM  MMMMMMMM  MMMMMMM  MMMMMM  MMMMMMMM  //";
		Escribir "    //  MM  MM MM  MM  MM       MM  MM MM  MM  MM    MM  MM   MM    MM    MM    MM  //";
		Escribir "    //  MM    MM   MM  MMMMMMM  MM    MM   MM  MM    MM  MMMMMMM    MM    MMMMMMMM  //";
		Escribir "    //  MM         MM  MM       MM         MM  MM    MM  MM MM      MM    MM    MM  //";
		Escribir "    //  MM         MM  MMMMMMM  MM         MM  MMMMMMMM  MM   MM  MMMMMM  MM    MM  //";
		Escribir "    //                                                                              //";
		Escribir "    //                         Pulse Una Tecla Para Iniciar                         //";
		Esperar Tecla
		a=AZAR(9)+1
		Escribir "    //                  XXXX                                     XXXX               //";
		Escribir "    //               XXXXXXXXXX         .............         XXXXXXXXXX            //";
		Escribir "    //              XXXXXXXXXXXX        .  .......  .        XXXXXXXXXXXX           //";
		Escribir "    //             XX_|_XXXX_|_XX       .     " a "     .       XX_|_XXXX_|_XX          //";
		Escribir "    //              XXXXXXXXXXXX        .  .......  .        XXXXXXXXXXXX           //";
		Escribir "    //               XX______XX         .............         XX______XX            //";
		Escribir "    //                  XXXX                                     XXXX               //";
		Escribir "    //                                                                              //";
		Escribir "    //////////////////////////////////////////////////////////////////////////////////";
		Esperar 2 Segundos
		Borrar Pantalla
		Escribir "";
		Escribir "";
		Escribir "";
		Escribir "    //////////////////////////////////////////////////////////////////////////////////";
		Escribir "    //                                                                              //";
		Escribir "    //  MMMMM   MMMMM  MMMMMMM  MMMMM   MMMMM  MMMMMMMM  MMMMMMM  MMMMMM  MMMMMMMM  //";
		Escribir "    //  MM  MM MM  MM  MM       MM  MM MM  MM  MM    MM  MM   MM    MM    MM    MM  //";
		Escribir "    //  MM    MM   MM  MMMMMMM  MM    MM   MM  MM    MM  MMMMMMM    MM    MMMMMMMM  //";
		Escribir "    //  MM         MM  MM       MM         MM  MM    MM  MM MM      MM    MM    MM  //";
		Escribir "    //  MM         MM  MMMMMMM  MM         MM  MMMMMMMM  MM   MM  MMMMMM  MM    MM  //";
		Escribir "    //                                                                              //";
		Escribir "    //                             --------------------                             //";
		Escribir "    //                             - Digite El Numero -                             //";
		Escribir "    //                             --------------------                             //";
		Leer z;
		
		
		Si z<>a Entonces
			Escribir "    //                                                               °°°°°°         //";
			Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MMMM   MMMMMMMM  MMMMMMMM     °°°°°°°°°°       //";
			Escribir "    //     MM   MM  MM      MM   MM  MM  M     MM     MM    MM    °°°°°°°°°°°°      //";
			Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MM   M    MM     MM    MM   °°_X_°°°°_X_°°     //";
			Escribir "    //     MM       MM      MMMM     MM   M    MM     MM    MM    °°°°°°°°°°°°      //";
			Escribir "    //     MM       MM      MM MM    MM  M     MM     MM    MM     °°______°°       //";
			Escribir "    //     MM       MMMMMM  MM   MM  MMMM   MMMMMMMM  MMMMMMMM        °°°°          //";
			Escribir "    //                                                                              //";
			Escribir "    //                           La Secuencia Correcta Era " a "                        //";
			Escribir "    //                                                                              //";
			Escribir "    //////////////////////////////////////////////////////////////////////////////////";
	   Sino
		   b=AZAR(9)+1
		    Escribir "    //                                                                              //";
			Escribir "    //                 XXXXXX           .............           XXXXXX              //";
			Escribir "    //               XXXXXXXXXX         .  .......  .         XXXXXXXXXX            //";
			Escribir "    //              XXXXXXXXXXXX        .     " a "     .        XXXXXXXXXXXX           //";
			Escribir "    //             XX_|_XXXX_|_XX       .  .......  .       XX_|_XXXX_|_XX          //";
			Escribir "    //              XXXXXXXXXXXX        .     " b "     .        XXXXXXXXXXXX           //";
			Escribir "    //               XX______XX         .  .......  .         XX______XX            //";
			Escribir "    //                  XXXX            .............            XXXX               //";
			Escribir "    //                                                                              //";
			Escribir "    //////////////////////////////////////////////////////////////////////////////////";
		   Esperar 2 Segundos
		   Borrar Pantalla
		   Escribir "";
		   Escribir "";
		   Escribir "";
		   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
		   Escribir "    //                                                                              //";
		   Escribir "    //  MMMMM   MMMMM  MMMMMMM  MMMMM   MMMMM  MMMMMMMM  MMMMMMM  MMMMMM  MMMMMMMM  //";
		   Escribir "    //  MM  MM MM  MM  MM       MM  MM MM  MM  MM    MM  MM   MM    MM    MM    MM  //";
		   Escribir "    //  MM    MM   MM  MMMMMMM  MM    MM   MM  MM    MM  MMMMMMM    MM    MMMMMMMM  //";
		   Escribir "    //  MM         MM  MM       MM         MM  MM    MM  MM MM      MM    MM    MM  //";
		   Escribir "    //  MM         MM  MMMMMMM  MM         MM  MMMMMMMM  MM   MM  MMMMMM  MM    MM  //";
		   Escribir "    //                                                                              //";
		   Escribir "    //                               --------------------                           //";
		   Escribir "    //                               - Digite Los Numero -                          //";
		   Escribir "    //                               --------------------                           //";
			Leer z;
			Leer w;
			
			Si z<>a o w<>b Entonces
				Escribir "    //                                                               °°°°°°         //";
				Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MMMM   MMMMMMMM  MMMMMMMM     °°°°°°°°°°       //";
				Escribir "    //     MM   MM  MM      MM   MM  MM  M     MM     MM    MM    °°°°°°°°°°°°      //";
				Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MM   M    MM     MM    MM   °°_X_°°°°_X_°°     //";
				Escribir "    //     MM       MM      MMMM     MM   M    MM     MM    MM    °°°°°°°°°°°°      //";
				Escribir "    //     MM       MM      MM MM    MM  M     MM     MM    MM     °°______°°       //";
				Escribir "    //     MM       MMMMMM  MM   MM  MMMM   MMMMMMMM  MMMMMMMM        °°°°          //";
				Escribir "    //                                                                              //";
				Escribir "    //                         La Secuencia Correcta Era " a " , " b "                      //";
				Escribir "    //                                                                              //";
				Escribir "    //////////////////////////////////////////////////////////////////////////////////";
				
			Sino
				c=AZAR(9)+1
				Escribir "    //                                                                              //";                                                                          //";
				Escribir "    //                                  .............                               //";
				Escribir "    //                 XXXXXX           .  .......  .           XXXXXX              //";
				Escribir "    //               XXXXXXXXXX         .     " a "     .         XXXXXXXXXX            //";
				Escribir "    //              XXXXXXXXXXXX        .  .......  .        XXXXXXXXXXXX           //";
				Escribir "    //             XX_|_XXXX_|_XX       .     " b "     .       XX_|_XXXX_|_XX          //";
				Escribir "    //              XXXXXXXXXXXX        .  .......  .        XXXXXXXXXXXX           //";
				Escribir "    //               XX______XX         .     " c "     .         XX______XX            //";
				Escribir "    //                  XXXX            .  .......  .           XXXXXX              //";
				Escribir "    //                                  .............                               //";
				Escribir "    //                                                                              //";
				Escribir "    //////////////////////////////////////////////////////////////////////////////////";
				Esperar 2 Segundos
			   Borrar Pantalla
			   Escribir "";
			   Escribir "";
			   Escribir "";
			   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
			   Escribir "    //                                                                              //";
			   Escribir "    //  MMMMM   MMMMM  MMMMMMM  MMMMM   MMMMM  MMMMMMMM  MMMMMMM  MMMMMM  MMMMMMMM  //";
			   Escribir "    //  MM  MM MM  MM  MM       MM  MM MM  MM  MM    MM  MM   MM    MM    MM    MM  //";
			   Escribir "    //  MM    MM   MM  MMMMMMM  MM    MM   MM  MM    MM  MMMMMMM    MM    MMMMMMMM  //";
			   Escribir "    //  MM         MM  MM       MM         MM  MM    MM  MM MM      MM    MM    MM  //";
			   Escribir "    //  MM         MM  MMMMMMM  MM         MM  MMMMMMMM  MM   MM  MMMMMM  MM    MM  //";
			   Escribir "    //                                                                              //";
			   Escribir "    //                               --------------------                           //";
			   Escribir "    //                               - Digite Los Numero -                          //";
			   Escribir "    //                               --------------------                           //";
				Leer z;
				Leer w;
				Leer v;
				
				Si z<>a o w<>b o v<>c Entonces
					Escribir "    //                                                                              //";
					Escribir "    //                                                               °°°°°°         //";
					Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MMMM   MMMMMMMM  MMMMMMMM     °°°°°°°°°°       //";
					Escribir "    //     MM   MM  MM      MM   MM  MM  M     MM     MM    MM    °°°°°°°°°°°°      //";
					Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MM   M    MM     MM    MM   °°_X_°°°°_X_°°     //";
					Escribir "    //     MM       MM      MMMM     MM   M    MM     MM    MM    °°°°°°°°°°°°      //";
					Escribir "    //     MM       MM      MM MM    MM  M     MM     MM    MM     °°______°°       //";
					Escribir "    //     MM       MMMMMM  MM   MM  MMMM   MMMMMMMM  MMMMMMMM        °°°°          //";
					Escribir "    //                                                                              //";
					Escribir "    //                       La Secuencia Correcta Era " a " , " b " , " c "                    //";
					Escribir "    //                                                                              //";
					Escribir "    //////////////////////////////////////////////////////////////////////////////////";
					
			    Sino
					d=AZAR(9)+1
					Escribir "    //                                                                              //";
					Escribir "    //                                .............                                 //";
					Escribir "    //                                .  .......  .                                 //";
					Escribir "    //               XXXXXX           .     " a "     .           XXXXXX                //";
					Escribir "    //             XXXXXXXXXX         .  .......  .         XXXXXXXXXX              //";
					Escribir "    //            XXXXXXXXXXXX        .     " b "     .        XXXXXXXXXXXX             //";
					Escribir "    //           XX_|_XXXX_|_XX       .  .......  .       XX_|_XXXX_|_XX            //";
					Escribir "    //            XXXXXXXXXXXX        .     " c "     .        XXXXXXXXXXXX             //";
					Escribir "    //             XX______XX         .  .......  .         XX______XX              //";
					Escribir "    //                XXXX            .     " d "     .            XXXX                 //";
					Escribir "    //                                .  .......  .                                 //";
					Escribir "    //                                .............                                 //";
					Escribir "    //                                                                              //";
					Escribir "    //////////////////////////////////////////////////////////////////////////////////";
					Esperar 3 Segundos
				   Borrar Pantalla
				   Escribir "";
				   Escribir "";
				   Escribir "";
				   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
				   Escribir "    //                                                                              //";
				   Escribir "    //  MMMMM   MMMMM  MMMMMMM  MMMMM   MMMMM  MMMMMMMM  MMMMMMM  MMMMMM  MMMMMMMM  //";
				   Escribir "    //  MM  MM MM  MM  MM       MM  MM MM  MM  MM    MM  MM   MM    MM    MM    MM  //";
				   Escribir "    //  MM    MM   MM  MMMMMMM  MM    MM   MM  MM    MM  MMMMMMM    MM    MMMMMMMM  //";
				   Escribir "    //  MM         MM  MM       MM         MM  MM    MM  MM MM      MM    MM    MM  //";
				   Escribir "    //  MM         MM  MMMMMMM  MM         MM  MMMMMMMM  MM   MM  MMMMMM  MM    MM  //";
				   Escribir "    //                                                                              //";
				   Escribir "    //                               --------------------                           //";
				   Escribir "    //                               - Digite Los Numero -                          //";
				   Escribir "    //                               --------------------                           //";
				   Leer z;
				    Leer w;
				    Leer v;
				    Leer u;
				   
				   Si z<>a o w<>b o v<>c o u<>d Entonces
					   Escribir "    //                                                               °°°°°°         //";
					   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MMMM   MMMMMMMM  MMMMMMMM     °°°°°°°°°°       //";
					   Escribir "    //     MM   MM  MM      MM   MM  MM  M     MM     MM    MM    °°°°°°°°°°°°      //";
					   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MM   M    MM     MM    MM   °°_X_°°°°_X_°°     //";
					   Escribir "    //     MM       MM      MMMM     MM   M    MM     MM    MM    °°°°°°°°°°°°      //";
					   Escribir "    //     MM       MM      MM MM    MM  M     MM     MM    MM     °°______°°       //";
					   Escribir "    //     MM       MMMMMM  MM   MM  MMMM   MMMMMMMM  MMMMMMMM        °°°°          //";
					   Escribir "    //                                                                              //";
					   Escribir "    //                    La Secuencia Correcta Era " a " , " b " , " c " , " d "                   //";
					   Escribir "    //                                                                              //";
					   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
					   
				    Sino
		                e=AZAR(9)+1
						Escribir "    //                                                                              //";
						Escribir "    //                                .............                                 //";
						Escribir "    //                                .  .......  .                                 //";
						Escribir "    //                                .     " a "     .                                 //";
						Escribir "    //               XXXXXX           .  .......  .               XXXXXX            //";
						Escribir "    //             XXXXXXXXXX         .     " b "     .             XXXXXXXXXX          //";
						Escribir "    //            XXXXXXXXXXXX        .  .......  .            XXXXXXXXXXXX         //";
						Escribir "    //           XX_|_XXXX_|_XX       .     " c "     .           XX_|_XXXX_|_XX        //";
						Escribir "    //            XXXXXXXXXXXX        .  .......  .            XXXXXXXXXXXX         //";
						Escribir "    //             XX______XX         .     " d "     .             XX______XX          //";
						Escribir "    //                XXXX            .  .......  .                XXXX             //";
						Escribir "    //                                .     " e "     .                                 //";
						Escribir "    //                                .  .......  .                                 //";
						Escribir "    //                                .............                                 //";
						Escribir "    //                                                                              //";
						Escribir "    //////////////////////////////////////////////////////////////////////////////////";
					   Esperar 3 Segundos
					   Borrar Pantalla
					   Escribir "";
					   Escribir "";
					   Escribir "";
					   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
					   Escribir "    //                                                                              //";
					   Escribir "    //  MMMMM   MMMMM  MMMMMMM  MMMMM   MMMMM  MMMMMMMM  MMMMMMM  MMMMMM  MMMMMMMM  //";
					   Escribir "    //  MM  MM MM  MM  MM       MM  MM MM  MM  MM    MM  MM   MM    MM    MM    MM  //";
					   Escribir "    //  MM    MM   MM  MMMMMMM  MM    MM   MM  MM    MM  MMMMMMM    MM    MMMMMMMM  //";
					   Escribir "    //  MM         MM  MM       MM         MM  MM    MM  MM MM      MM    MM    MM  //";
					   Escribir "    //  MM         MM  MMMMMMM  MM         MM  MMMMMMMM  MM   MM  MMMMMM  MM    MM  //";
					   Escribir "    //                                                                              //";
					   Escribir "    //                               --------------------                           //";
					   Escribir "    //                               - Digite Los Numero -                          //";
					   Escribir "    //                               --------------------                           //";
				        Leer z;
				        Leer w;
				        Leer v;
				        Leer u;
				        Leer t;
						
				       Si z<>a o w<>b o v<>c o u<>d o t<>e Entonces
						   Escribir "    //                                                               °°°°°°         //";
						   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MMMM   MMMMMMMM  MMMMMMMM     °°°°°°°°°°       //";
						   Escribir "    //     MM   MM  MM      MM   MM  MM  M     MM     MM    MM    °°°°°°°°°°°°      //";
						   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MM   M    MM     MM    MM   °°_X_°°°°_X_°°     //";
						   Escribir "    //     MM       MM      MMMM     MM   M    MM     MM    MM    °°°°°°°°°°°°      //";
						   Escribir "    //     MM       MM      MM MM    MM  M     MM     MM    MM     °°______°°       //";
						   Escribir "    //     MM       MMMMMM  MM   MM  MMMM   MMMMMMMM  MMMMMMMM        °°°°          //";
						   Escribir "    //                                                                              //";
						   Escribir "    //                   La Secuencia Correcta Era " a " , " b " , " c " , " d " , " e "                //";
						   Escribir "    //                                                                              //";
						   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
						   
					   Sino
						   f=AZAR(9)+1
						   Escribir "    //                                                                              //";
						   Escribir "    //               XXXXXX           .............           XXXXX                 //";
						   Escribir "    //             XXXXXXXXXX         .  .......  .         XXXXXXXXX               //";
						   Escribir "    //            XXXXXXXXXXXX        .     " a "     .        XXXXXXXXXXXX             //";
						   Escribir "    //           XX_|_XXXX_|_XX       .  .......  .       XX_|_XXXX_|_XX            //";
						   Escribir "    //            XXXXXXXXXXXX        .     " b "     .        XXXXXXXXXXXX             //";
						   Escribir "    //             XX______XX         .  .......  .         XX______XX              //"; 
						   Escribir "    //                XXXX            .     " c "     .            XXXX                 //";
						   Escribir "    //                                .  .......  .                                 //";
						   Escribir "    //               XXXXXX           .     " d "     .           XXXXXX                //";
						   Escribir "    //             XXXXXXXXXX         .  .......  .         XXXXXXXXXX              //";
						   Escribir "    //            XXXXXXXXXXXX        .     " e "     .        XXXXXXXXXXXX             //";
						   Escribir "    //           XX_|_XXXX_|_XX       .  .......  .       XX_|_XXXX_|_XX            //";
						   Escribir "    //            XXXXXXXXXXXX        .     " f "     .        XXXXXXXXXXXX             //";
						   Escribir "    //             XX______XX         .  .......  .         XX______XX              //";
						   Escribir "    //                XXXX            .............            XXXX                 //";
						   Escribir "    //                                                                              //";
						   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
						  Esperar 4 Segundos
						  Borrar Pantalla
						  Escribir "";
						  Escribir "";
						  Escribir "";
						  Escribir "    //////////////////////////////////////////////////////////////////////////////////";
						  Escribir "    //                                                                              //";
						  Escribir "    //  MMMMM   MMMMM  MMMMMMM  MMMMM   MMMMM  MMMMMMMM  MMMMMMM  MMMMMM  MMMMMMMM  //";
						  Escribir "    //  MM  MM MM  MM  MM       MM  MM MM  MM  MM    MM  MM   MM    MM    MM    MM  //";
						  Escribir "    //  MM    MM   MM  MMMMMMM  MM    MM   MM  MM    MM  MMMMMMM    MM    MMMMMMMM  //";
						  Escribir "    //  MM         MM  MM       MM         MM  MM    MM  MM MM      MM    MM    MM  //";
						  Escribir "    //  MM         MM  MMMMMMM  MM         MM  MMMMMMMM  MM   MM  MMMMMM  MM    MM  //";
						  Escribir "    //                                                                              //";
						  Escribir "    //                               --------------------                           //";
						  Escribir "    //                               - Digite Los Numero -                          //";
						  Escribir "    //                               --------------------                           //";
						   Leer z;
						   Leer w;
						   Leer v;
						   Leer u;
						   Leer t;
						   Leer s;
						   
						   Si z<>a o w<>b o v<>c o u<>d o t<>e o s<>f Entonces
							   Escribir "    //                                                               °°°°°°         //";
							   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MMMM   MMMMMMMM  MMMMMMMM     °°°°°°°°°°       //";
							   Escribir "    //     MM   MM  MM      MM   MM  MM  M     MM     MM    MM    °°°°°°°°°°°°      //";
							   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MM   M    MM     MM    MM   °°_X_°°°°_X_°°     //";
							   Escribir "    //     MM       MM      MMMM     MM   M    MM     MM    MM    °°°°°°°°°°°°      //";
							   Escribir "    //     MM       MM      MM MM    MM  M     MM     MM    MM     °°______°°       //";
							   Escribir "    //     MM       MMMMMM  MM   MM  MMMM   MMMMMMMM  MMMMMMMM        °°°°          //";
							   Escribir "    //                                                                              //";
							   Escribir "    //                La Secuencia Correcta Era " a " , " b " , " c " , " d " , " e " , " f "               //";
							   Escribir "    //                                                                              //";
							   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
							   
						   Sino
							   g=AZAR(9)+1
							   Escribir "    //                                                                              //";
							   Escribir "    //               XXXXXX           .............           XXXXX                 //";
							   Escribir "    //             XXXXXXXXXX         .  .......  .         XXXXXXXXX               //";
							   Escribir "    //            XXXXXXXXXXXX        .     " a "     .        XXXXXXXXXXXX             //";
							   Escribir "    //           XX_|_XXXX_|_XX       .  .......  .       XX_|_XXXX_|_XX            //";
							   Escribir "    //            XXXXXXXXXXXX        .     " b "     .        XXXXXXXXXXXX             //";
							   Escribir "    //             XX______XX         .  .......  .         XX______XX              //"; 
							   Escribir "    //                XXXX            .     " c "     .            XXXX                 //";
							   Escribir "    //                                .  .......  .                                 //";
							   Escribir "    //                                .     " d "     .                                 //";
							   Escribir "    //                                .  .......  .                                 //";
							   Escribir "    //               XXXXXX           .     " e "     .           XXXXXX                //";
							   Escribir "    //             XXXXXXXXXX         .  .......  .         XXXXXXXXXX              //";
							   Escribir "    //            XXXXXXXXXXXX        .     " f "     .        XXXXXXXXXXXX             //";
							   Escribir "    //           XX_|_XXXX_|_XX       .  .......  .       XX_|_XXXX_|_XX            //";
							   Escribir "    //            XXXXXXXXXXXX        .     " g "     .        XXXXXXXXXXXX             //";
							   Escribir "    //             XX______XX         .  .......  .         XX______XX              //";
							   Escribir "    //                XXXX            .............            XXXX                 //";
							   Escribir "    //                                                                              //";
							   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
							   Esperar 4 Segundos
							   Borrar Pantalla
							   Escribir "";
							   Escribir "";
							   Escribir "";
							   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
							   Escribir "    //                                                                              //";
							   Escribir "    //  MMMMM   MMMMM  MMMMMMM  MMMMM   MMMMM  MMMMMMMM  MMMMMMM  MMMMMM  MMMMMMMM  //";
							   Escribir "    //  MM  MM MM  MM  MM       MM  MM MM  MM  MM    MM  MM   MM    MM    MM    MM  //";
							   Escribir "    //  MM    MM   MM  MMMMMMM  MM    MM   MM  MM    MM  MMMMMMM    MM    MMMMMMMM  //";
							   Escribir "    //  MM         MM  MM       MM         MM  MM    MM  MM MM      MM    MM    MM  //";
							   Escribir "    //  MM         MM  MMMMMMM  MM         MM  MMMMMMMM  MM   MM  MMMMMM  MM    MM  //";
							   Escribir "    //                                                                              //";
							   Escribir "    //                               --------------------                           //";
							   Escribir "    //                               - Digite Los Numero -                          //";
							   Escribir "    //                               --------------------                           //";
							   Leer z;
							   Leer w;
							   Leer v;
							   Leer u;
							   Leer t;
							   Leer s;
						       leer r;
							   
							   Si z<>a o w<>b o v<>c o u<>d o t<>e o s<>f o r<>g Entonces
								   Escribir "    //                                                               °°°°°°         //";
								   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MMMM   MMMMMMMM  MMMMMMMM     °°°°°°°°°°       //";
								   Escribir "    //     MM   MM  MM      MM   MM  MM  M     MM     MM    MM    °°°°°°°°°°°°      //";
								   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MM   M    MM     MM    MM   °°_X_°°°°_X_°°     //";
								   Escribir "    //     MM       MM      MMMM     MM   M    MM     MM    MM    °°°°°°°°°°°°      //";
								   Escribir "    //     MM       MM      MM MM    MM  M     MM     MM    MM     °°______°°       //";
								   Escribir "    //     MM       MMMMMM  MM   MM  MMMM   MMMMMMMM  MMMMMMMM        °°°°          //";
								   Escribir "    //                                                                              //";
								   Escribir "    //              La Secuencia Correcta Era " a " , " b " , " c " , " d " , " e " , " f " , " g "             //";
								   Escribir "    //                                                                              //";
								   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
								   
							   Sino
								   h=AZAR(9)+1
								   Escribir "    //                                                                              //";
								   Escribir "    //                                .............                                 //";
								   Escribir "    //               XXXXXX           .  .......  .               XXXXXX            //";
								   Escribir "    //             XXXXXXXXXX         .     " a "     .             XXXXXXXXXX          //";
								   Escribir "    //            XXXXXXXXXXXX        .  .......  .            XXXXXXXXXXXX         //";
								   Escribir "    //           XX_|_XXXX_|_XX       .     " b "     .           XX_|_XXXX_|_XX        //";
								   Escribir "    //            XXXXXXXXXXXX        .  .......  .            XXXXXXXXXXXX         //";
								   Escribir "    //             XX______XX         .     " c "     .             XX______XX          //";
								   Escribir "    //                XXXX            .  .......  .                XXXX             //";
								   Escribir "    //                                .     " d "     .                                 //";
								   Escribir "    //                                .  .......  .                                 //";
								   Escribir "    //                                .     " e "     .                                 //";
								   Escribir "    //               XXXXXX           .  .......  .               XXXXXX            //";
								   Escribir "    //             XXXXXXXXXX         .     " f "     .             XXXXXXXXXX          //";
								   Escribir "    //            XXXXXXXXXXXX        .  .......  .            XXXXXXXXXXXX         //";
								   Escribir "    //           XX_|_XXXX_|_XX       .     " g "     .           XX_|_XXXX_|_XX        //";
								   Escribir "    //            XXXXXXXXXXXX        .  .......  .            XXXXXXXXXXXX         //";
								   Escribir "    //             XX______XX         .     " h "     .             XX______XX          //";
								   Escribir "    //                XXXX            .  .......  .                XXXX             //";
								   Escribir "    //                                .............                                 //";
								   Escribir "    //                                                                              //";
								   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
								   Esperar 5 Segundos
								   Borrar Pantalla
								   Escribir "";
								   Escribir "";
								   Escribir "";
								   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
								   Escribir "    //                                                                              //";
								   Escribir "    //  MMMMM   MMMMM  MMMMMMM  MMMMM   MMMMM  MMMMMMMM  MMMMMMM  MMMMMM  MMMMMMMM  //";
								   Escribir "    //  MM  MM MM  MM  MM       MM  MM MM  MM  MM    MM  MM   MM    MM    MM    MM  //";
								   Escribir "    //  MM    MM   MM  MMMMMMM  MM    MM   MM  MM    MM  MMMMMMM    MM    MMMMMMMM  //";
								   Escribir "    //  MM         MM  MM       MM         MM  MM    MM  MM MM      MM    MM    MM  //";
								   Escribir "    //  MM         MM  MMMMMMM  MM         MM  MMMMMMMM  MM   MM  MMMMMM  MM    MM  //";
								   Escribir "    //                                                                              //";
								   Escribir "    //                               --------------------                           //";
								   Escribir "    //                               - Digite Los Numero -                          //";
								   Escribir "    //                               --------------------                           //";
								   Leer z;
								   Leer w;
								   Leer v;
								   Leer u;
								   Leer t;
								   Leer s;
								   Leer r;
								   leer q;
								   
								   Si z<>a o w<>b o v<>c o u<>d o t<>e o s<>f o r<>g o q<>h Entonces
									   Escribir "    //                                                               °°°°°°         //";
									   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MMMM   MMMMMMMM  MMMMMMMM     °°°°°°°°°°       //";
									   Escribir "    //     MM   MM  MM      MM   MM  MM  M     MM     MM    MM    °°°°°°°°°°°°      //";
									   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MM   M    MM     MM    MM   °°_X_°°°°_X_°°     //";
									   Escribir "    //     MM       MM      MMMM     MM   M    MM     MM    MM    °°°°°°°°°°°°      //";
									   Escribir "    //     MM       MM      MM MM    MM  M     MM     MM    MM     °°______°°       //";
									   Escribir "    //     MM       MMMMMM  MM   MM  MMMM   MMMMMMMM  MMMMMMMM        °°°°          //";
									   Escribir "    //                                                                              //";
									   Escribir "    //            La Secuencia Correcta Era " a " , " b " , " c " , " d " , " e " , " f " , " g " , " h "           //";
									   Escribir "    //                                                                              //";
									   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
									   
								   Sino
									   i=AZAR(9)+1
									   Escribir "    //                                                                              //";
									   Escribir "    //                                .............                                 //";
									   Escribir "    //                                .  .......  .                                 //";
									   Escribir "    //               XXXXXX           .     " a "     .           XXXXX                 //";
									   Escribir "    //             XXXXXXXXXX         .  .......  .         XXXXXXXXX               //";
									   Escribir "    //            XXXXXXXXXXXX        .     " b "     .        XXXXXXXXXXXX             //";
									   Escribir "    //           XX_|_XXXX_|_XX       .  .......  .       XX_|_XXXX_|_XX            //";
									   Escribir "    //            XXXXXXXXXXXX        .     " c "     .        XXXXXXXXXXXX             //";
									   Escribir "    //             XX______XX         .  .......  .         XX______XX              //";
									   Escribir "    //                XXXX            .     " d "     .            XXXX                 //";
									   Escribir "    //                                .  .......  .                                 //";
									   Escribir "    //                                .     " e "     .                                 //";
									   Escribir "    //                                .  .......  .                                 //";
									   Escribir "    //               XXXXXX           .     " f "     .           XXXXXX                //";
									   Escribir "    //             XXXXXXXXXX         .  .......  .         XXXXXXXXXX              //";
									   Escribir "    //            XXXXXXXXXXXX        .     " g "     .        XXXXXXXXXXXX             //";
									   Escribir "    //           XX_|_XXXX_|_XX       .  .......  .       XX_|_XXXX_|_XX            //";
									   Escribir "    //            XXXXXXXXXXXX        .     " h "     .        XXXXXXXXXXXX             //";
									   Escribir "    //             XX______XX         .  .......  .         XX______XX              //";
									   Escribir "    //                XXXX            .     " i "     .            XXXX                 //";
									   Escribir "    //                                .  .......  .                                 //";
									   Escribir "    //                                .............                                 //";
									   Escribir "    //                                                                              //";
									   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
									   Esperar 5 Segundos
									   Borrar Pantalla
									   Escribir "";
									   Escribir "";
									   Escribir "";
									   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
									   Escribir "    //                                                                              //";
									   Escribir "    //  MMMMM   MMMMM  MMMMMMM  MMMMM   MMMMM  MMMMMMMM  MMMMMMM  MMMMMM  MMMMMMMM  //";
									   Escribir "    //  MM  MM MM  MM  MM       MM  MM MM  MM  MM    MM  MM   MM    MM    MM    MM  //";
									   Escribir "    //  MM    MM   MM  MMMMMMM  MM    MM   MM  MM    MM  MMMMMMM    MM    MMMMMMMM  //";
									   Escribir "    //  MM         MM  MM       MM         MM  MM    MM  MM MM      MM    MM    MM  //";
									   Escribir "    //  MM         MM  MMMMMMM  MM         MM  MMMMMMMM  MM   MM  MMMMMM  MM    MM  //";
									   Escribir "    //                                                                              //";
									   Escribir "    //                               --------------------                           //";
									   Escribir "    //                               - Digite Los Numero -                          //";
									   Escribir "    //                               --------------------                           //";
									   Leer z;
									   Leer w;
									   Leer v;
									   Leer u;
									   Leer t;
									   Leer s;
									   Leer r;
									   leer q;
									   leer p;
									   
									   Si z<>a o w<>b o v<>c o u<>d o t<>e o s<>f o r<>g o q<>h o p<>i Entonces
										   Escribir "    //                                                               °°°°°°         //";
										   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MMMM   MMMMMMMM  MMMMMMMM     °°°°°°°°°°       //";
										   Escribir "    //     MM   MM  MM      MM   MM  MM  M     MM     MM    MM    °°°°°°°°°°°°      //";
										   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MM   M    MM     MM    MM   °°_X_°°°°_X_°°     //";
										   Escribir "    //     MM       MM      MMMM     MM   M    MM     MM    MM    °°°°°°°°°°°°      //";
										   Escribir "    //     MM       MM      MM MM    MM  M     MM     MM    MM     °°______°°       //";
										   Escribir "    //     MM       MMMMMM  MM   MM  MMMM   MMMMMMMM  MMMMMMMM        °°°°          //";
										   Escribir "    //                                                                              //";
										   Escribir "    //          La Secuencia Correcta Era " a " , " b " , " c " , " d " , " e " , " f " , " g " , " h " , " i "         //";
										   Escribir "    //                                                                              //";
										   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
										   
									   Sino
										   j=AZAR(9)+1
										   Escribir "    //                                                                              //";
										   Escribir "    //                                .............                                 //";
										   Escribir "    //                                .  .......  .                                 //";
										   Escribir "    //                                .     " a "     .                                 //";
										   Escribir "    //               XXXXXX           .  .......  .               XXXXXX            //";
										   Escribir "    //             XXXXXXXXXX         .     " b "     .             XXXXXXXXXX          //";
										   Escribir "    //            XXXXXXXXXXXX        .  .......  .            XXXXXXXXXXXX         //";
										   Escribir "    //           XX_|_XXXX_|_XX       .     " c "     .           XX_|_XXXX_|_XX        //";
										   Escribir "    //            XXXXXXXXXXXX        .  .......  .            XXXXXXXXXXXX         //";
										   Escribir "    //             XX______XX         .     " d "     .             XX______XX          //";
										   Escribir "    //                XXXX            .  .......  .                XXXX             //";
										   Escribir "    //                                .     " e "     .                                 //";
										   Escribir "    //                                .  .......  .                                 //";
										   Escribir "    //                                .     " f "     .                                 //";
										   Escribir "    //               XXXXXX           .  .......  .               XXXXXX            //";
										   Escribir "    //             XXXXXXXXXX         .     " g "     .             XXXXXXXXXX          //";
										   Escribir "    //            XXXXXXXXXXXX        .  .......  .            XXXXXXXXXXXX         //";
										   Escribir "    //           XX_|_XXXX_|_XX       .     " h "     .           XX_|_XXXX_|_XX        //";
										   Escribir "    //            XXXXXXXXXXXX        .  .......  .            XXXXXXXXXXXX         //";
										   Escribir "    //             XX______XX         .     " i "     .             XX______XX          //";
										   Escribir "    //                XXXX            .  .......  .                XXXX             //";
										   Escribir "    //                                .     " j "     .                                 //";
										   Escribir "    //                                .  .......  .                                 //";
										   Escribir "    //                                .............                                 //";
										   Escribir "    //                                                                              //";
										   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
										   Esperar 6 Segundos
										   Borrar Pantalla
										   Escribir "";
										   Escribir "";
										   Escribir "";
										   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
										   Escribir "    //                                                                              //";
										   Escribir "    //  MMMMM   MMMMM  MMMMMMM  MMMMM   MMMMM  MMMMMMMM  MMMMMMM  MMMMMM  MMMMMMMM  //";
										   Escribir "    //  MM  MM MM  MM  MM       MM  MM MM  MM  MM    MM  MM   MM    MM    MM    MM  //";
										   Escribir "    //  MM    MM   MM  MMMMMMM  MM    MM   MM  MM    MM  MMMMMMM    MM    MMMMMMMM  //";
										   Escribir "    //  MM         MM  MM       MM         MM  MM    MM  MM MM      MM    MM    MM  //";
										   Escribir "    //  MM         MM  MMMMMMM  MM         MM  MMMMMMMM  MM   MM  MMMMMM  MM    MM  //";
										   Escribir "    //                                                                              //";
										   Escribir "    //                               --------------------                           //";
										   Escribir "    //                               - Digite Los Numero -                          //";
										   Escribir "    //                               --------------------                           //";
										   Leer z;
										   Leer w;
										   Leer v;
										   Leer u;
										   Leer t;
										   Leer s;
										   Leer r;
										   leer q;
										   leer p;
										   Leer k;
										   Si z<>a o w<>b o v<>c o u<>d o t<>e o s<>f o r<>g o q<>h o p<>i o k<>j Entonces
											   Escribir "    //                                                               °°°°°°         //";
											   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MMMM   MMMMMMMM  MMMMMMMM     °°°°°°°°°°       //";
											   Escribir "    //     MM   MM  MM      MM   MM  MM  M     MM     MM    MM    °°°°°°°°°°°°      //";
											   Escribir "    //     MMMMMMM  MMMMMM  MMMMMMM  MM   M    MM     MM    MM   °°_X_°°°°_X_°°     //";
											   Escribir "    //     MM       MM      MMMM     MM   M    MM     MM    MM    °°°°°°°°°°°°      //";
											   Escribir "    //     MM       MM      MM MM    MM  M     MM     MM    MM     °°______°°       //";
											   Escribir "    //     MM       MMMMMM  MM   MM  MMMM   MMMMMMMM  MMMMMMMM        °°°°          //";
											   Escribir "    //                                                                              //";
											   Escribir "    //        La Secuencia Correcta Era " a " , " b " , " c " , " d " , " e " , " f " , " g " , " h " , " i " , " j "       //";
											   Escribir "    //                                                                              //";
											   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
											   
										   Sino
											   Para a<-1 Hasta 6 Con Paso 1 Hacer
												   
												   Borrar Pantalla
												   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //   MMMMMMMMM  MMMMMMMM  MMM      MM  MMMMMMM                                  //";             
												   Escribir "    //   MM         MM    MM  MM MM    MM  MM   MM                                  //";
												   Escribir "    //   MM MMMMMM  MM    MM  MM  MM   MM  MM   MM                                  //";
												   Escribir "    //   MM MM  MM  MMMMMMMM  MM   MM  MM  MM   MM                                  //";
												   Escribir "    //   MMMMMMMMM  MM    MM  MM    MM MM  MM   MM                                  //";
												   Escribir "    //      MM      MM    MM  MM      MMM  MMMMMMM                                  //";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                                              //";
												   Escribir "    //////////////////////////////////////////////////////////////////////////////////"; 
												   Esperar 0.5 Segundos
												   
												   
												   Borrar Pantalla
												   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
												   Escribir "    //                                                                              //";
												   Escribir "    //                                                        ¶¶    ¶¶    ¶¶        //";
												   Escribir "    //                                                        ¶¶    ¶¶    ¶¶        //";
												   Escribir "    //                                                 ¶¶      ¶¶    ¶¶    ¶¶       //";
												   Escribir "    //   MMMMMMMMM  MMMMMMMM  MMM      MM  MMMMMMM      ¶¶¶¶     ¶¶    ¶¶    ¶¶     //";
												   Escribir "    //   MM         MM    MM  MM MM    MM  MM   MM ¶¶      ¶¶                 ¶¶    //";
												   Escribir "    //   MM MMMMMM  MM    MM  MM  MM   MM  MM   MM  ¶¶¶¶                        ¶¶  //";
												   Escribir "    //   MM MM  MM  MMMMMMMM  MM   MM  MM  MM   MM   ¶¶¶           ¶¶         ¶¶    //";
												   Escribir "    //   MMMMMMMMM  MM    MM  MM    MM MM  MM   MM    ¶¶     ¶¶    ¶¶      ¶¶       //";
												   Escribir "    //      MM      MM    MM  MM      MMM  MMMMMMM     ¶¶     ¶¶            ¶¶      //";
												   Escribir "    //                                                 ¶¶                   ¶¶      //";
												   Escribir "    //                                     ¶¶   ¶¶      ¶¶            ¶¶    ¶¶      //";
												   Escribir "    //                                      ¶¶  ¶¶      ¶¶    ¶¶     ¶¶     ¶¶      //";
												   Escribir "    //                                       ¶¶_¶¶       ¶¶      ¶¶¶¶¶     ¶¶       //";
												   Escribir "    //                                     ¶¶¶¶¶¶¶       ¶¶              ¶¶         //";
												   Escribir "    //                                     ¶¶¶¶¶¶¶¶¶¶      ¶¶¶¶¶¶¶¶¶¶¶¶¶¶  ¶¶       //";
												   Escribir "    //                                     ¶¶¶¶¶¶¶¶¶¶           ¶¶           ¶¶     //";
												   Escribir "    //                                       ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶            ¶¶    //";
												   Escribir "    //                                                          ¶¶             ¶¶   //";
												   Escribir "    //                                                                              //";
												   Escribir "    //////////////////////////////////////////////////////////////////////////////////";
												   Esperar 1 Segundos
												   
												   
											   Fin Para
											Finsi   
										Finsi	   
									Finsi		   
							   Finsi			   
						   Finsi 
					   FinSi
			      FinSi
              FinSi
			FinSi
		FinSi
		
		Escribir "   ___________________________________________________________________________________";
		Escribir "  ";
		Escribir "   ...................................................................................";
		Escribir "   ........   Desea Volver A Jugar si/no (por favor escriba en minuescula)   .........";
		Escribir "   ...................................................................................";
		Escribir "   ___________________________________________________________________________________";
	   Leer tas;
	  Hasta Que tas<>'si' 
	
FinProceso
