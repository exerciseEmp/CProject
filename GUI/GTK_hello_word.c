//
//GTK 测试
// Created by Administrator on 2022/10/18 0018.
//
#include <stdio.h>
#include <gtk/gtk.h>

static void print_hello(GtkWidget *widget, gpointer data) {
    g_print("GTK Hello World \n");
}

static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window), "HellWord");
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);

    GtkButtonBox *button_box = gtk_button_box_new(GTK_ORIENTATION_HORIZONTAL);
    gtk_container_add(GTK_CONTAINER(window), button_box);
    GtkButton *button = gtk_button_new_with_label("Hello World");
    gtk_container_add(GTK_CONTAINER(button_box), button);

    g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL);
    g_signal_connect_swapped(button, "clicked", G_CALLBACK(gtk_window_close), window);
    gtk_widget_show_all(window);
}

int main(int argc, char **grgv) {
    GtkApplication *app = gtk_application_new("com.benyhuo.clang", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    int status = g_application_run(app, argc, grgv);
    g_object_unref(app);
    return status;
}
