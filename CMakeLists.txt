cmake_minimum_required(VERSION 3.12)
project(GUImp C)

set(CMAKE_C_STANDARD 99)


add_executable(GUImp guimp-app/src/main.c guimp-app/inc/guimp.h libui/inc/libui.h libui/src/windows/empty_window.c libft/t_vector_logic.c libui/inc/t_window.h libui/inc/t_sdl_events.h libui/src/events/standart_event_handler.c guimp-app/src/utilities/vector_utilities.c guimp-app/src/utilities/general_utilities.c guimp-app/src/utilities/initialization_utilities.c guimp-app/src/main_loop.c guimp-app/src/main_loop_events.c libui/inc/e_items.h libui/inc/t_item.h libui/inc/t_button_item.h libui/src/items/button.c libui/src/utils/g_assert.c libui/src/events/standart_button_event_handler.c libui/inc/t_font.h guimp-app/src/fonts/fonts.c guimp-app/src/render/render_window.c guimp-app/src/render/render.c guimp-app/src/render/render_button.c guimp-app/src/render/render_font.c libui/inc/t_text_area.h libui/src/items/text_area.c guimp-app/src/render/render_text_area.c guimp-app/src/utilities/parent_helpers.c)

target_include_directories(GUImp PRIVATE guimp-app/inc)
target_include_directories(GUImp PRIVATE libft/includes)
target_include_directories(GUImp PRIVATE libui/inc frameworks/SDL2 frameworks/SDL2.framework frameworks/SDL2_image.framework)
