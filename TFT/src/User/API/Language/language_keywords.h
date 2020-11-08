#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include "variants.h"

#define LANG_KEY_LANGUAGE                     "label_language:"
#define LANG_KEY_HEAT                         "label_heat:"
#define LANG_KEY_MOVE                         "label_move:"
#define LANG_KEY_HOME                         "label_home:"
#define LANG_KEY_DISABLE_STEPPERS             "label_disable_steppers:"
#define LANG_KEY_PRINT                        "label_print:"
#define LANG_KEY_EXTRUDE                      "label_extrude:"
#define LANG_KEY_FAN                          "label_fan:"
#define LANG_KEY_SETTINGS                     "label_settings:"
#define LANG_KEY_SCREEN_SETTINGS              "label_screen_settings:"
#define LANG_KEY_MACHINE_SETTINGS             "label_machine_settings:"
#define LANG_KEY_FEATURE_SETTINGS             "label_feature_settings:"
#define LANG_KEY_SOUND                        "label_sound:"
#define LANG_KEY_TOUCH_SOUND                  "label_touch_sound:"
#define LANG_KEY_TOAST_SOUND                  "label_toast_sound:"
#define LANG_KEY_ALERT_SOUND                  "label_alert_sound:"
#define LANG_KEY_SHUT_DOWN                    "label_shut_down:"
#define LANG_KEY_RGB_SETTINGS                 "label_rgb_settings:"
#define LANG_KEY_RGB_OFF                      "label_rgb_off:"
#define LANG_KEY_TERMINAL                     "label_terminal:"
#define LANG_KEY_CUSTOM                       "label_custom:"
#define LANG_KEY_LEVELING                     "label_leveling:"
#define LANG_KEY_POINT_1                      "label_point_1:"
#define LANG_KEY_POINT_2                      "label_point_2:"
#define LANG_KEY_POINT_3                      "label_point_3:"
#define LANG_KEY_POINT_4                      "label_point_4:"
#define LANG_KEY_POINT_5                      "label_point_5:"
#define LANG_KEY_BED_LEVELING                 "label_bed_leveling:"
#define LANG_KEY_BL_COMPLETE                  "label_bl_complete:"
#define LANG_KEY_BL_SMART_FILL                "label_bl_smart_fill:"
#define LANG_KEY_BL_ENABLE                    "label_bl_enable:"
#define LANG_KEY_BL_DISABLE                   "label_bl_disable:"
#define LANG_KEY_ABL                          "label_abl:"
#define LANG_KEY_BBL                          "label_bbl:"
#define LANG_KEY_UBL                          "label_ubl:"
#define LANG_KEY_MBL                          "label_mbl:"
#define LANG_KEY_MBL_SETTINGS                 "label_mbl_settings:"
#define LANG_KEY_ABL_SETTINGS                 "label_abl_settings:"
#define LANG_KEY_ABL_SETTINGS_BBL             "label_abl_settings_bbl:"
#define LANG_KEY_ABL_SETTINGS_UBL             "label_abl_settings_ubl:"
#define LANG_KEY_ABL_SETTINGS_UBL_SAVE        "label_abl_settings_ubl_save:"
#define LANG_KEY_ABL_SETTINGS_UBL_LOAD        "label_abl_settings_ubl_load:"
#define LANG_KEY_ABL_SLOT0                    "label_abl_slot0:"
#define LANG_KEY_ABL_SLOT1                    "label_abl_slot1:"
#define LANG_KEY_ABL_SLOT2                    "label_abl_slot2:"
#define LANG_KEY_ABL_SLOT3                    "label_abl_slot3:"
#define LANG_KEY_ABL_SLOT_EEPROM              "label_abl_slot_eeprom:"
#define LANG_KEY_ABL_Z                        "label_abl_z:"
#define LANG_KEY_BLTOUCH                      "label_bltouch:"
#define LANG_KEY_BLTOUCH_TEST                 "label_bltouch_test:"
#define LANG_KEY_BLTOUCH_DEPLOY               "label_bltouch_deploy:"
#define LANG_KEY_BLTOUCH_STOW                 "label_bltouch_stow:"
#define LANG_KEY_BLTOUCH_REPEAT               "label_bltouch_repeat:"
#define LANG_KEY_Z_OFFSET                     "label_z_offset:"
#define LANG_KEY_PROBE_OFFSET                 "label_probe_offset:"
#define LANG_KEY_HOME_OFFSET                  "label_home_offset:"
#define LANG_KEY_CONFIRMATION                 "label_confirmation:"
#define LANG_KEY_DOWN                         "label_down:"
#define LANG_KEY_UP                           "label_up:"
#define LANG_KEY_SAVE                         "label_save:"
#define LANG_KEY_RESTORE                      "label_restore:"
#define LANG_KEY_RESET                        "label_reset:"
#define LANG_KEY_DEFAULT                      "label_default:"
#define LANG_KEY_CLEAR                        "label_clear:"
#define LANG_KEY_NEXT                         "label_next:"
#define LANG_KEY_DISTANCE                     "label_distance:"
#define LANG_KEY_INVALID_VALUE                "label_invalid_value:"
#define LANG_KEY_TIMEOUT_REACHED              "label_timeout_reached:"
#define LANG_KEY_PROCESS_RUNNING              "label_process_running:"
#define LANG_KEY_PROCESS_COMPLETED            "label_process_completed:"
#define LANG_KEY_PROCESS_ABORTED              "label_process_aborted:"
#define LANG_KEY_INC                          "label_inc:"
#define LANG_KEY_DEC                          "label_dec:"
#define LANG_KEY_NOZZLE                       "label_nozzle:"
#define LANG_KEY_BED                          "label_bed:"
#define LANG_KEY_CHAMBER                      "label_chamber:"
#define LANG_KEY_START                        "label_start:"
#define LANG_KEY_STOP                         "label_stop:"
#define LANG_KEY_BACK                         "label_back:"
#define LANG_KEY_PAGE_UP                      "label_page_up:"
#define LANG_KEY_PAGE_DOWN                    "label_page_down:"
#define LANG_KEY_PAUSE                        "label_pause:"
#define LANG_KEY_RESUME                       "label_resume:"
#define LANG_KEY_LOAD                         "label_load:"
#define LANG_KEY_UNLOAD                       "label_unload:"
#define LANG_KEY_SLOW_SPEED                   "label_slow_speed:"
#define LANG_KEY_NORMAL_SPEED                 "label_normal_speed:"
#define LANG_KEY_FAST_SPEED                   "label_fast_speed:"
#define LANG_KEY_FAN_FULL_SPEED               "label_fan_full_speed:"
#define LANG_KEY_FAN_HALF_SPEED               "label_fan_half_speed:"
#define LANG_KEY_ROTATE_UI                    "label_rotate_ui:"
#define LANG_KEY_TOUCHSCREEN_ADJUST           "label_touchscreen_adjust:"
#define LANG_KEY_MORE                         "label_more:"
#define LANG_KEY_SCREEN_INFO                  "label_screen_info:"
#define LANG_KEY_STATUS                       "label_status:"
#define LANG_KEY_SIMULATOR_BG_COLOR           "label_simulator_bg_color:"
#define LANG_KEY_SIMULATOR_FONT_COLOR         "label_simulator_font_color:"
#define LANG_KEY_WHITE                        "label_white:"
#define LANG_KEY_BLACK                        "label_black:"
#define LANG_KEY_BLUE                         "label_blue:"
#define LANG_KEY_RED                          "label_red:"
#define LANG_KEY_GREEN                        "label_green:"
#define LANG_KEY_CYAN                         "label_cyan:"
#define LANG_KEY_YELLOW                       "label_yellow:"
#define LANG_KEY_BROWN                        "label_brown:"
#define LANG_KEY_GRAY                         "label_gray:"
#define LANG_KEY_ORANGE                       "label_orange:"
#define LANG_KEY_INDIGO                       "label_indigo:"
#define LANG_KEY_VIOLET                       "label_violet:"
#define LANG_KEY_MAGENTA                      "label_magenta:"
#define LANG_KEY_PURPLE                       "label_purple:"
#define LANG_KEY_LIME                         "label_lime:"
#define LANG_KEY_DARKBLUE                     "label_darkblue:"
#define LANG_KEY_DARKGREEN                    "label_darkgreen:"
#define LANG_KEY_DARKGRAY                     "label_darkgray:"
#define LANG_KEY_DISCONNECT                   "label_disconnect:"
#define LANG_KEY_BAUDRATE                     "label_baudrate:"
#define LANG_KEY_PERCENTAGE                   "label_percentage:"
#define LANG_KEY_BABYSTEP                     "label_babystep:"
#define LANG_KEY_PERCENTAGE_SPEED             "label_percentage_speed:"
#define LANG_KEY_PERCENTAGE_FLOW              "label_percentage_flow:"
#define LANG_KEY_VALUE_ZERO                   "label_value_zero:"
#define LANG_KEY_1_DEGREE                     "label_1_degree:"
#define LANG_KEY_5_DEGREE                     "label_5_degree:"
#define LANG_KEY_10_DEGREE                    "label_10_degree:"
#define LANG_KEY_X_INC                        "label_x_inc:"
#define LANG_KEY_Y_INC                        "label_y_inc:"
#define LANG_KEY_Z_INC                        "label_z_inc:"
#define LANG_KEY_X_DEC                        "label_x_dec:"
#define LANG_KEY_Y_DEC                        "label_y_dec:"
#define LANG_KEY_Z_DEC                        "label_z_dec:"
#define LANG_KEY_X                            "label_x:"
#define LANG_KEY_Y                            "label_y:"
#define LANG_KEY_Z                            "label_z:"
#define LANG_KEY_001_MM                       "label_001_mm:"
#define LANG_KEY_01_MM                        "label_01_mm:"
#define LANG_KEY_1_MM                         "label_1_mm:"
#define LANG_KEY_5_MM                         "label_5_mm:"
#define LANG_KEY_10_MM                        "label_10_mm:"
#define LANG_KEY_100_MM                       "label_100_mm:"
#define LANG_KEY_200_MM                       "label_200_mm:"
#define LANG_KEY_1_PERCENT                    "label_1_percent:"
#define LANG_KEY_5_PERCENT                    "label_5_percent:"
#define LANG_KEY_10_PERCENT                   "label_10_percent:"
#define LANG_KEY_PERCENT_VALUE                "label_percent_value:"
#define LANG_KEY_READY                        "label_ready:"
#define LANG_KEY_BUSY                         "label_busy:"
#define LANG_KEY_UNCONNECTED                  "label_unconnected:"
#define LANG_KEY_DISCONNECT_INFO              "label_disconnect_info:"
#define LANG_KEY_LOADING                      "label_loading:"
#define LANG_KEY_POWER_FAILED                 "label_power_failed" //Question Sign
#define LANG_KEY_CONTINUE                     "label_continue:"
#define LANG_KEY_CANCEL                       "label_cancel" //Cancel Sign
#define LANG_KEY_ADJUST_TITLE                 "label_adjust_title:"
#define LANG_KEY_ADJUST_INFO                  "label_adjust_info:"
#define LANG_KEY_ADJUST_OK                    "label_adjust_ok:"
#define LANG_KEY_ADJUST_FAILED                "label_adjust_failed:"
#define LANG_KEY_WARNING                      "label_warning" //Exclamation Sign
#define LANG_KEY_STOP_PRINT                   "label_stop_print:"
#define LANG_KEY_CONFIRM                      "label_confirm" //Confirm Sign
#define LANG_KEY_TFTSD                        "label_tftsd:"
#define LANG_KEY_READ_TFTSD_ERROR             "label_read_tftsd_error:"
#define LANG_KEY_TFTSD_INSERTED               "label_tftsd_inserted:"
#define LANG_KEY_TFTSD_REMOVED                "label_tftsd_removed:"
#define LANG_KEY_U_DISK                       "label_u_disk:"
#define LANG_KEY_READ_U_DISK_ERROR            "label_read_u_disk_error:"
#define LANG_KEY_U_DISK_INSERTED              "label_u_disk_inserted:"
#define LANG_KEY_U_DISK_REMOVED               "label_u_disk_removed:"
#define LANG_KEY_ONBOARDSD                    "label_onboardsd:"
#define LANG_KEY_READ_ONBOARDSD_ERROR         "label_read_onboardsd_error:"
#define LANG_KEY_FILAMENT_SENSOR              "label_filament_sensor:"
#define LANG_KEY_FILAMENT_RUNOUT              "label_filament_runout:"
#define LANG_KEY_PREHEAT                      "label_preheat:"
#define LANG_KEY_PREHEAT_BOTH                 "label_preheat_both:"
#define LANG_KEY_IS_PAUSE                     "label_is_pause:"
#define LANG_KEY_AUTO_SHUT_DOWN               "label_auto_shut_down:"
#define LANG_KEY_UNIFIEDMOVE                  "label_unifiedmove:"
#define LANG_KEY_UNIFIEDHEAT                  "label_unifiedheat:"
#define LANG_KEY_COOLDOWN                     "label_cooldown:"
#define LANG_KEY_EMERGENCYSTOP                "label_emergencystop:"
#define LANG_KEY_TOUCH_TO_EXIT                "label_touch_to_exit:"
#define LANG_KEY_MAINMENU                     "label_mainmenu:"
#define LANG_KEY_WAIT_TEMP_SHUT_DOWN          "label_wait_temp_shut_down:"
#define LANG_KEY_FORCE_SHUT_DOWN              "label_force_shut_down:"
#define LANG_KEY_SHUTTING_DOWN                "label_shutting_down:"
#define LANG_KEY_PARAMETER_SETTING            "label_parameter_setting:"
#define LANG_KEY_ON                           "label_on:"
#define LANG_KEY_OFF                          "label_off:"
#define LANG_KEY_SMART                        "label_smart:"
#define LANG_KEY_TERMINAL_ACK                 "label_terminal_ack:"
#define LANG_KEY_INVERT_XAXIS                 "label_invert_xaxis:"
#define LANG_KEY_INVERT_YAXIS                 "label_invert_yaxis:"
#define LANG_KEY_INVERT_ZAXIS                 "label_invert_zaxis:"
#define LANG_KEY_MOVE_SPEED                   "label_move_speed:"
#define LANG_KEY_KNOB_LED                     "label_knob_led:"
#define LANG_KEY_KNOB_LED_IDLE                "label_knob_led_idle:"
#define LANG_KEY_M0_PAUSE                     "label_m0_pause:"
#define LANG_KEY_SEND_START_GCODE             "label_send_start_gcode:"
#define LANG_KEY_SEND_END_GCODE               "label_send_end_gcode:"
#define LANG_KEY_SEND_CANCEL_GCODE            "label_send_cancel_gcode:"
#define LANG_KEY_PERSISTENT_STATUS_INFO       "label_persistent_status_info:"
#define LANG_KEY_FILE_LISTMODE                "label_file_listmode:"
#define LANG_KEY_CURRENT_SETTING              "label_current_setting:"
#define LANG_KEY_STEPS_SETTING                "label_steps_setting:"
#define LANG_KEY_MAXFEEDRATE                  "label_maxfeedrate:"
#define LANG_KEY_MAXACCELERATION              "label_maxacceleration:"
#define LANG_KEY_ACCELERATION                 "label_acceleration:"
#define LANG_KEY_PRINT_ACCELERATION           "label_print_acceleration:"
#define LANG_KEY_RETRACT_ACCELERATION         "label_retract_acceleration:"
#define LANG_KEY_TRAVEL_ACCELERATION          "label_travel_acceleration:"
#define LANG_KEY_JERK                         "label_jerk:"
#define LANG_KEY_JUNCTION_DEVIATION           "label_junction_deviation:"
#define LANG_KEY_BUMP_SENSITIVITY             "label_bump_sensitivity:"
#define LANG_KEY_FWRETRACT                    "label_fwretract:"
#define LANG_KEY_FWRECOVER                    "label_fwrecover:"
#define LANG_KEY_LIN_ADVANCE                  "label_lin_advance:"
#define LANG_KEY_RESET_SETTINGS_INFO          "label_reset_settings_info:"
#define LANG_KEY_RESET_SETTINGS_DONE          "label_reset_settings_done:"
#define LANG_KEY_INFO                         "label_info" //Info Sign
#define LANG_KEY_LCD_BRIGHTNESS               "label_lcd_brightness:"
#define LANG_KEY_LCD_BRIGHTNESS_DIM           "label_lcd_brightness_dim:"
#define LANG_KEY_LCD_DIM_IDLE_TIMER           "label_lcd_dim_idle_timer:"
#define LANG_KEY_5_SECONDS                    "label_5_seconds:"
#define LANG_KEY_10_SECONDS                   "label_10_seconds:"
#define LANG_KEY_30_SECONDS                   "label_30_seconds:"
#define LANG_KEY_60_SECONDS                   "label_60_seconds:"
#define LANG_KEY_120_SECONDS                  "label_120_seconds:"
#define LANG_KEY_300_SECONDS                  "label_300_seconds:"
#define LANG_KEY_CUSTOM_SECONDS               "label_custom_seconds:"
#define LANG_KEY_SEQUENTIAL_MODE              "label_sequential_mode:"
#define LANG_KEY_ST7920_FULLSCREEN            "label_st7920_fullscreen:"
#define LANG_KEY_PLR_EN                       "label_plr_en:"
#define LANG_KEY_SETTING_SAVE                 "label_setting_save:"
#define LANG_KEY_SETTING_RESET                "label_setting_reset:"
#define LANG_KEY_SETTING_RESTORE              "label_setting_restore:"
#define LANG_KEY_EEPROM_SETTINGS              "label_eeprom_settings:"
#define LANG_KEY_EEPROM_SAVE_INFO             "label_eeprom_save_info:"
#define LANG_KEY_EEPROM_RESTORE_INFO          "label_eeprom_restore_info:"
#define LANG_KEY_EEPROM_RESET_INFO            "label_eeprom_reset_info:"
#define LANG_KEY_RETRACT_FEEDRATE             "label_retract_feedrate:"
#define LANG_KEY_RETRACT_LENGTH               "label_retract_length:"
#define LANG_KEY_RETRACT_SWAP_LENGTH          "label_retract_swap_length:"
#define LANG_KEY_RETRACT_Z_LIFT               "label_retract_z_lift:"
#define LANG_KEY_RETRACT_AUTO                 "label_retract_auto:"
#define LANG_KEY_RECOVER_FEEDRATE             "label_recover_feedrate:"
#define LANG_KEY_SWAP_RECOVER_FEEDRATE        "label_swap_recover_feedrate:"
#define LANG_KEY_RECOVER_LENGTH               "label_recover_length:"
#define LANG_KEY_SWAP_RECOVER_LENGTH          "label_swap_recover_length:"
#define LANG_KEY_START_PRINT                  "label_start_print:"
#define LANG_KEY_ACK_NOTIFICATION             "label_ack_notification:"
#define LANG_KEY_LEVELING_EDGE_DISTANCE       "label_leveling_edge_distance:"
#define LANG_KEY_XY_UNLOCK                    "label_xy_unlock:"
#define LANG_KEY_TUNING                       "label_tuning:"
#define LANG_KEY_PID                          "label_pid:"
#define LANG_KEY_PID_TITLE                    "label_pid_title:"
#define LANG_KEY_PID_START_INFO               "label_pid_start_info:"
#define LANG_KEY_PID_START_INFO_2             "label_pid_start_info_2:"
#define LANG_KEY_PID_START_INFO_3             "label_pid_start_info_3:"
#define LANG_KEY_TUNE_EXTRUDER                "label_tune_extruder:"
#define LANG_KEY_TUNE_EXT_EXTRUDE_100         "label_tune_ext_extrude_100:"
#define LANG_KEY_TUNE_EXT_TEMP                "label_tune_ext_temp:"
#define LANG_KEY_TUNE_EXT_TEMPLOW             "label_tune_ext_templow:"
#define LANG_KEY_TUNE_EXT_DESIREDVAL          "label_tune_ext_desiredval:"
#define LANG_KEY_TUNE_EXT_MARK120MM           "label_tune_ext_mark120mm:"
#define LANG_KEY_TUNE_EXT_HEATOFF             "label_tune_ext_heatoff:"
#define LANG_KEY_TUNE_EXT_ADJ_ESTEPS          "label_tune_ext_adj_esteps:"
#define LANG_KEY_TUNE_EXT_ESTEPS_SAVED        "label_tune_ext_esteps_saved:"
#define LANG_KEY_TUNE_EXT_MEASURED            "label_tune_ext_measured:"
#define LANG_KEY_TUNE_EXT_OLD_ESTEP           "label_tune_ext_old_estep:"
#define LANG_KEY_TUNE_EXT_NEW_ESTEP           "label_tune_ext_new_estep:"
#define LANG_KEY_CONNECTION_SETTINGS          "label_connection_settings:"
#define LANG_KEY_OFFSET_TOOL                  "label_offset_tool:"
#define LANG_KEY_HYBRID_THRESHOLD             "label_hybrid_threshold:"
#define LANG_KEY_NOTIFICATIONS                "label_notifications:"
#define LANG_KEY_MESH_EDITOR                  "label_mesh_editor:"
#define LANG_KEY_MESH_TUNER                   "label_mesh_tuner:"
#define LANG_KEY_CASE_LIGHT                   "label_case_light:"

#ifdef __cplusplus
}
#endif
