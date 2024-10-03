#include <gtk/gtk.h>

// Función callback para manejar el botón de login
static void on_login_button_clicked(GtkWidget *widget, gpointer data) {
    g_print("Login button clicked!\n");
}

// Función principal
int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *username_label;
    GtkWidget *password_label;
    GtkWidget *username_entry;
    GtkWidget *password_entry;
    GtkWidget *login_button;

    // Inicializar GTK
    gtk_init(&argc, &argv);

    // Crear ventana principal
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Login");
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 100);

    // Crear un grid para organizar los widgets
    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Etiquetas y campos de entrada para usuario y contraseña
    username_label = gtk_label_new("Username:");
    password_label = gtk_label_new("Password:");
    username_entry = gtk_entry_new();
    password_entry = gtk_entry_new();
    gtk_entry_set_visibility(GTK_ENTRY(password_entry), FALSE); // Oculta la contraseña

    // Botón de login
    login_button = gtk_button_new_with_label("Login");
    g_signal_connect(login_button, "clicked", G_CALLBACK(on_login_button_clicked), NULL);

    // Añadir widgets al grid
    gtk_grid_attach(GTK_GRID(grid), username_label, 0, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), username_entry, 1, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), password_label, 0, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), password_entry, 1, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), login_button, 1, 2, 1, 1);

    // Mostrar todo
    gtk_widget_show_all(window);

    // Manejador de señales para cerrar la ventana
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Iniciar el loop de eventos de GTK
    gtk_main();

    return 0;
}
