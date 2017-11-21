
#ifndef PLOTTER_H
#define PLOTTER_H

#include "Qt_lib.h"
#include "Chart.h"
#include "Axes_editor.h"
#include "Axes_range.h"
#include "Table_Widget.h"
#include "Plot_name.h"
#include "file_threads.h"


#define WINDOW_X 200
#define WINDOW_Y 200


class Plotter: public QMainWindow{
Q_OBJECT

public:
Plotter(QWidget *parent = 0, const int& w = 1024, const int& h = 800);

private slots:
int create_project();
int close_window();
int save_project();
int open_project();

int create_line_from_file();
int allow_cursor_grid();
int create_x_title();
int create_y_title();

int create_x_range();
int create_y_range();

int allow_legend_action();
int read_line_from_table();
int rename_plot();


private:
bool project_already_exist;
bool saved;

QMenuBar *menu_bar;  
QMenu *project_menu; 
QMenu *plots_menu;
QMenu *create_plot_menu;

QMenu *axes_menu;
QMenu *axes_x_menu;
QMenu *axes_y_menu;

QMenu *mode_menu;
QMenu *transformation_menu;

QAction *create_project_action;
QAction *open_project_action;
QAction *save_project_action;
QAction *exit_project_action;

QAction *create_plot_from_file_action;
QAction *create_plot_from_table_action;
QAction *rename_plot_action;


QAction *define_x_title;
QAction *define_x_range;

QAction *define_y_title;
QAction *define_y_range;


QAction *probe_action;
QAction *legend_move_action;


QAction *furie_transform_action;
QAction *laplas_transform_action;
 
int create_menu();
int create_actions();

Chart current_chart;

};

#endif
