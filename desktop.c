#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    GtkWidget *window;

    // Inicializar GTK
    gtk_init(&argc, &argv);

    // Crear una ventana principal para el "escritorio"
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Escritorio");
    gtk_window_set_default_size(GTK_WINDOW(window), 800, 600);

    // Manejador de señales para cerrar la ventana
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Mostrar la ventana
    gtk_widget_show_all(window);

    // Iniciar el loop de eventos de GTK
    gtk_main();

    return 0;
}
