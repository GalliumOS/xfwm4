/* automatically generated from xfwm4-workspace-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (workspace_dialog_ui)
#endif
#ifdef __GNUC__
static const char workspace_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char workspace_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"2.20\"/><object class=\"GtkAdjustment\" id=\"adjustment1"
  "\"><property name=\"lower\">1</property><property name=\"upper\">100</p"
  "roperty><property name=\"step_increment\">1</property><property name=\""
  "page_increment\">10</property></object><object class=\"GtkAdjustment\" "
  "id=\"adjustment2\"><property name=\"upper\">100</property><property nam"
  "e=\"step_increment\">1</property><property name=\"page_increment\">10</"
  "property></object><object class=\"GtkAdjustment\" id=\"adjustment3\"><p"
  "roperty name=\"upper\">100</property><property name=\"step_increment\">"
  "1</property><property name=\"page_increment\">10</property></object><ob"
  "ject class=\"GtkAdjustment\" id=\"adjustment4\"><property name=\"upper\""
  ">100</property><property name=\"step_increment\">1</property><property "
  "name=\"page_increment\">10</property></object><object class=\"GtkAdjust"
  "ment\" id=\"adjustment5\"><property name=\"upper\">100</property><prope"
  "rty name=\"step_increment\">1</property><property name=\"page_increment"
  "\">10</property></object><object class=\"XfceTitledDialog\" id=\"main-d"
  "ialog\"><property name=\"can_focus\">False</property><property name=\"t"
  "itle\" translatable=\"yes\">Workspaces</property><property name=\"windo"
  "w_position\">center-on-parent</property><property name=\"icon_name\">xf"
  "ce4-workspaces</property><property name=\"type_hint\">dialog</property>"
  "<property name=\"subtitle\" translatable=\"yes\">Configure layout, name"
  "s and margins</property><child internal-child=\"vbox\"><object class=\""
  "GtkVBox\" id=\"main-vbox\"><property name=\"visible\">True</property><p"
  "roperty name=\"can_focus\">False</property><property name=\"spacing\">2"
  "</property><child><object class=\"GtkNotebook\" id=\"plug-child\"><prop"
  "erty name=\"visible\">True</property><property name=\"can_focus\">True<"
  "/property><property name=\"border_width\">6</property><child><object cl"
  "ass=\"GtkVBox\" id=\"vbox1\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">False</property><property name=\"border_wi"
  "dth\">6</property><property name=\"spacing\">6</property><child><object"
  " class=\"GtkFrame\" id=\"frame4\"><property name=\"visible\">True</prop"
  "erty><property name=\"can_focus\">False</property><property name=\"labe"
  "l_xalign\">0</property><property name=\"shadow_type\">none</property><c"
  "hild><object class=\"GtkAlignment\" id=\"alignment4\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">False</property><"
  "property name=\"top_padding\">6</property><property name=\"bottom_paddi"
  "ng\">6</property><property name=\"left_padding\">16</property><child><o"
  "bject class=\"GtkHBox\" id=\"hbox3\"><property name=\"visible\">True</p"
  "roperty><property name=\"can_focus\">False</property><property name=\"s"
  "pacing\">12</property><child><object class=\"GtkLabel\" id=\"label3\"><"
  "property name=\"visible\">True</property><property name=\"can_focus\">F"
  "alse</property><property name=\"xalign\">0</property><property name=\"l"
  "abel\" translatable=\"yes\">_Number of workspaces:</property><property "
  "name=\"use_underline\">True</property><property name=\"mnemonic_widget\""
  ">workspace_count_spinbutton</property></object><packing><property name="
  "\"expand\">False</property><property name=\"fill\">True</property><prop"
  "erty name=\"position\">0</property></packing></child><child><object cla"
  "ss=\"GtkSpinButton\" id=\"workspace_count_spinbutton\"><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"editable\">False</property><property name=\"invisible_ch"
  "ar\">\342\200\242</property><property name=\"primary_icon_activatable\""
  ">False</property><property name=\"secondary_icon_activatable\">False</p"
  "roperty><property name=\"primary_icon_sensitive\">True</property><prope"
  "rty name=\"secondary_icon_sensitive\">True</property><property name=\"a"
  "djustment\">adjustment1</property></object><packing><property name=\"ex"
  "pand\">False</property><property name=\"fill\">False</property><propert"
  "y name=\"position\">1</property></packing></child></object></child></ob"
  "ject></child><child type=\"label\"><object class=\"GtkLabel\" id=\"labe"
  "l7\"><property name=\"visible\">True</property><property name=\"can_foc"
  "us\">False</property><property name=\"label\" translatable=\"yes\">Layo"
  "ut</property><property name=\"use_markup\">True</property><attributes><"
  "attribute name=\"weight\" value=\"bold\"/></attributes></object></child"
  "></object><packing><property name=\"expand\">False</property><property "
  "name=\"fill\">True</property><property name=\"position\">0</property></"
  "packing></child><child><object class=\"GtkFrame\" id=\"frame5\"><proper"
  "ty name=\"visible\">True</property><property name=\"can_focus\">False</"
  "property><property name=\"label_xalign\">0</property><property name=\"s"
  "hadow_type\">none</property><child><object class=\"GtkAlignment\" id=\""
  "alignment5\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"top_padding\">6</property>"
  "<property name=\"left_padding\">18</property><child><object class=\"Gtk"
  "ScrolledWindow\" id=\"scrolledwindow1\"><property name=\"visible\">True"
  "</property><property name=\"can_focus\">True</property><property name=\""
  "hscrollbar_policy\">never</property><property name=\"vscrollbar_policy\""
  ">automatic</property><property name=\"shadow_type\">etched-in</property"
  "><child><object class=\"GtkTreeView\" id=\"treeview_ws_names\"><propert"
  "y name=\"visible\">True</property><property name=\"can_focus\">True</pr"
  "operty><property name=\"rules_hint\">True</property></object></child></"
  "object></child></object></child><child type=\"label\"><object class=\"G"
  "tkLabel\" id=\"label8\"><property name=\"visible\">True</property><prop"
  "erty name=\"can_focus\">False</property><property name=\"label\" transl"
  "atable=\"yes\">Names</property><property name=\"use_markup\">True</prop"
  "erty><attributes><attribute name=\"weight\" value=\"bold\"/></attribute"
  "s></object></child></object><packing><property name=\"expand\">True</pr"
  "operty><property name=\"fill\">True</property><property name=\"position"
  "\">1</property></packing></child></object></child><child type=\"tab\"><"
  "object class=\"GtkLabel\" id=\"label2\"><property name=\"visible\">True"
  "</property><property name=\"can_focus\">False</property><property name="
  "\"label\" translatable=\"yes\">_General</property><property name=\"use_"
  "underline\">True</property></object><packing><property name=\"tab_fill\""
  ">False</property></packing></child><child><object class=\"GtkVBox\" id="
  "\"vbox2\"><property name=\"visible\">True</property><property name=\"ca"
  "n_focus\">False</property><property name=\"border_width\">6</property><"
  "property name=\"spacing\">6</property><child><object class=\"GtkHBox\" "
  "id=\"hbox1\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"spacing\">12</property><ch"
  "ild><object class=\"GtkImage\" id=\"image1\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">False</property><property "
  "name=\"stock\">gtk-info</property><property name=\"icon-size\">6</prope"
  "rty></object><packing><property name=\"expand\">False</property><proper"
  "ty name=\"fill\">True</property><property name=\"position\">0</property"
  "></packing></child><child><object class=\"GtkLabel\" id=\"label5\"><pro"
  "perty name=\"visible\">True</property><property name=\"can_focus\">Fals"
  "e</property><property name=\"xalign\">0</property><property name=\"labe"
  "l\" translatable=\"yes\">Margins are areas on the edges of the screen w"
  "here no window will be placed</property><property name=\"wrap\">True</p"
  "roperty></object><packing><property name=\"expand\">True</property><pro"
  "perty name=\"fill\">True</property><property name=\"position\">1</prope"
  "rty></packing></child></object><packing><property name=\"expand\">False"
  "</property><property name=\"fill\">True</property><property name=\"posi"
  "tion\">0</property></packing></child><child><object class=\"GtkAlignmen"
  "t\" id=\"alignment3\"><property name=\"visible\">True</property><proper"
  "ty name=\"can_focus\">False</property><property name=\"xscale\">0</prop"
  "erty><property name=\"yscale\">0</property><child><object class=\"GtkTa"
  "ble\" id=\"table1\"><property name=\"visible\">True</property><property"
  " name=\"can_focus\">False</property><property name=\"n_rows\">3</proper"
  "ty><property name=\"n_columns\">3</property><property name=\"column_spa"
  "cing\">6</property><property name=\"row_spacing\">6</property><child><p"
  "laceholder/></child><child><placeholder/></child><child><object class=\""
  "GtkSpinButton\" id=\"margin_left_spinbutton\"><property name=\"visible\""
  ">True</property><property name=\"can_focus\">True</property><property n"
  "ame=\"invisible_char\">\342\200\242</property><property name=\"primary_"
  "icon_activatable\">False</property><property name=\"secondary_icon_acti"
  "vatable\">False</property><property name=\"primary_icon_sensitive\">Tru"
  "e</property><property name=\"secondary_icon_sensitive\">True</property>"
  "<property name=\"adjustment\">adjustment2</property></object><packing><"
  "property name=\"top_attach\">1</property><property name=\"bottom_attach"
  "\">2</property><property name=\"x_options\"/><property name=\"y_options"
  "\"/></packing></child><child><object class=\"GtkSpinButton\" id=\"margi"
  "n_bottom_spinbutton\"><property name=\"visible\">True</property><proper"
  "ty name=\"can_focus\">True</property><property name=\"invisible_char\">"
  "\342\200\242</property><property name=\"primary_icon_activatable\">Fals"
  "e</property><property name=\"secondary_icon_activatable\">False</proper"
  "ty><property name=\"primary_icon_sensitive\">True</property><property n"
  "ame=\"secondary_icon_sensitive\">True</property><property name=\"adjust"
  "ment\">adjustment3</property></object><packing><property name=\"left_at"
  "tach\">1</property><property name=\"right_attach\">2</property><propert"
  "y name=\"top_attach\">2</property><property name=\"bottom_attach\">3</p"
  "roperty><property name=\"x_options\"/><property name=\"y_options\"/></p"
  "acking></child><child><object class=\"GtkSpinButton\" id=\"margin_right"
  "_spinbutton\"><property name=\"visible\">True</property><property name="
  "\"can_focus\">True</property><property name=\"invisible_char\">\342\200"
  "\242</property><property name=\"primary_icon_activatable\">False</prope"
  "rty><property name=\"secondary_icon_activatable\">False</property><prop"
  "erty name=\"primary_icon_sensitive\">True</property><property name=\"se"
  "condary_icon_sensitive\">True</property><property name=\"adjustment\">a"
  "djustment4</property></object><packing><property name=\"left_attach\">2"
  "</property><property name=\"right_attach\">3</property><property name=\""
  "top_attach\">1</property><property name=\"bottom_attach\">2</property><"
  "property name=\"x_options\"/><property name=\"y_options\"/></packing></"
  "child><child><placeholder/></child><child><object class=\"GtkImage\" id"
  "=\"monitor_icon\"><property name=\"visible\">True</property><property n"
  "ame=\"can_focus\">False</property><property name=\"xpad\">6</property><"
  "property name=\"ypad\">6</property><property name=\"stock\">gtk-missing"
  "-image</property></object><packing><property name=\"left_attach\">1</pr"
  "operty><property name=\"right_attach\">2</property><property name=\"top"
  "_attach\">1</property><property name=\"bottom_attach\">2</property></pa"
  "cking></child><child><object class=\"GtkSpinButton\" id=\"margin_top_sp"
  "inbutton\"><property name=\"visible\">True</property><property name=\"c"
  "an_focus\">True</property><property name=\"invisible_char\">\342\200\242"
  "</property><property name=\"primary_icon_activatable\">False</property>"
  "<property name=\"secondary_icon_activatable\">False</property><property"
  " name=\"primary_icon_sensitive\">True</property><property name=\"second"
  "ary_icon_sensitive\">True</property><property name=\"adjustment\">adjus"
  "tment5</property></object><packing><property name=\"left_attach\">1</pr"
  "operty><property name=\"right_attach\">2</property><property name=\"x_o"
  "ptions\"/><property name=\"y_options\"/></packing></child><child><place"
  "holder/></child><child><placeholder/></child><child><placeholder/></chi"
  "ld><child><placeholder/></child></object></child></object><packing><pro"
  "perty name=\"expand\">True</property><property name=\"fill\">True</prop"
  "erty><property name=\"position\">1</property></packing></child></object"
  "><packing><property name=\"position\">1</property></packing></child><ch"
  "ild type=\"tab\"><object class=\"GtkLabel\" id=\"label6\"><property nam"
  "e=\"visible\">True</property><property name=\"can_focus\">False</proper"
  "ty><property name=\"label\" translatable=\"yes\">_Margins</property><pr"
  "operty name=\"use_underline\">True</property></object><packing><propert"
  "y name=\"position\">1</property><property name=\"tab_fill\">False</prop"
  "erty></packing></child></object><packing><property name=\"expand\">True"
  "</property><property name=\"fill\">True</property><property name=\"posi"
  "tion\">0</property></packing></child><child internal-child=\"action_are"
  "a\"><object class=\"GtkHButtonBox\" id=\"dialog-action_area1\"><propert"
  "y name=\"visible\">True</property><property name=\"can_focus\">False</p"
  "roperty><property name=\"layout_style\">end</property><child><object cl"
  "ass=\"GtkButton\" id=\"button2\"><property name=\"label\">gtk-help</pro"
  "perty><property name=\"use_action_appearance\">False</property><propert"
  "y name=\"visible\">True</property><property name=\"can_focus\">True</pr"
  "operty><property name=\"receives_default\">True</property><property nam"
  "e=\"use_stock\">True</property></object><packing><property name=\"expan"
  "d\">False</property><property name=\"fill\">False</property><property n"
  "ame=\"position\">0</property><property name=\"secondary\">True</propert"
  "y></packing></child><child><object class=\"GtkButton\" id=\"button1\"><"
  "property name=\"label\">gtk-close</property><property name=\"use_action"
  "_appearance\">False</property><property name=\"visible\">True</property"
  "><property name=\"can_focus\">True</property><property name=\"receives_"
  "default\">True</property><property name=\"use_stock\">True</property></"
  "object><packing><property name=\"expand\">False</property><property nam"
  "e=\"fill\">False</property><property name=\"pack_type\">end</property><"
  "property name=\"position\">1</property></packing></child></object><pack"
  "ing><property name=\"expand\">False</property><property name=\"fill\">T"
  "rue</property><property name=\"pack_type\">end</property><property name"
  "=\"position\">0</property></packing></child></object></child><action-wi"
  "dgets><action-widget response=\"-11\">button2</action-widget><action-wi"
  "dget response=\"0\">button1</action-widget></action-widgets></object></"
  "interface>"
};

static const unsigned workspace_dialog_ui_length = 13726u;
