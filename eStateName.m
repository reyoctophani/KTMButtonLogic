classdef(Enumeration) eStateName < uint8
   enumeration
      MAIN_SCREEN (0)
      REMOTE_CONTROL_MODE (1)
      MENU (2)
      LAP_TIMER (3)
      MOTORCYCLE (4)
      BIKE_INFO (5)
      TRIP_INFO (6)
      CRUISE_CONTROL (7)
      MAIN_NAVIGATION (8)
      HEATED_GRIPS(9)
      AUDIO (10)
      SETTINGS (11)
      RESET_LAPS (12)
      RESETLAPS_KEEP (13)
      RESETLAPS_RESET (14)
      WATER_TEMPERATURE (15)
      FUEL_RANGE (16)
      BATTERY (17)
      ODOMETER (18)
      SERVICE (19)
      WARNINGS (20)
      TRIP_INFO_TRIP_1 (21)
      TRIP_INFO_TRIP_2 (22)
      TRIP_1_SET_AS_OVERVIEW (23)
      TRIP_1_RESET_TRIP (24)
      TRIP_2_SET_AS_OVERVIEW (25)
      TRIP_2_RESET_TRIP (26)
      SPEED_LIMITER (27)
      MODE_CC (28)
      SPEED_LIMITER_ONCHECK (29)
      SPEED_LIMITER_OFFCHECK (30)
      SPEED_LIMITER_MODE (31)
      CRUISE_CONTROL_MODE (32)
      SPEED_LIMITER_MODE_CHECK (33)
      CRUISE_CONTROL_CHECK (34)
      VOLUME (35)
      NAVIGATION (36)
      NAVIGATION_ON (37)
      NAVIGATION_OFF (38)
      HEATED_GRIPS_OFF (39)
      HEATED_GRIPS_MAXIMUM (40)
      HEATED_GRIPS_MEDIUM (41)
      HEATED_GRIPS_MINIMUM (42)
      FAVOURITES (43)
      QUICK_SELECTOR (44)
      CONNECTIVITY (45)
      QUICK_SHIFTER (46)
      SHIFT_LIGHT (47)
      CLOCK_DATE_MN (48)
      UNITS (49)
      LANGUAGE (50)
      HEATED_GRIPS_SETTINGS_MN (51)
      EXTRA_FUNCTIONS (52)
      NAVIGATION_VOLUME (53)
      NAVIGATION_VOL_SUB_MN (54)
      EXTRA_FUNCTIONS_SUB_MN (55)
      HEATING_GRIPS_NOT_AVAILABLE (56)
      HEATING_GRIPS_AVAILABLE (57)
      ENGLISH_US (58)
      ENGLISH_UK (59)
      GERMAN (60)
      ITALIAN (61)
      FRENCH (62)
      SPANISH (63)
      DISTANCE (64)
      TEMPERATURE (65)
      CONSUMPTION (66)
      DISTANCE_KILOMETER (67)
      DISTANCE_MILES (68)
      TEMPERATURE_FARENHEIT (69)
      TEMPERATURE_CELSIUS (70)
      CONSUMPTION_LTR_PER_100KM (71)
      CONSUMPTION_KM_PER_LTR (72)
      CONSUMPTION_USG_PER_100MI (73)
      CONSUMPTION_MI_PER_USG (74)
      CONSUMPTION_MI_PER_LTR (75)
      CONSUMPTION_UKG_PER_100MI (76)
      CONSUMPTION_MI_PER_UKG (77)
      CLOCK_TIME (78)
      CLOCK_DATE (79)
      CLOCK_CLOCK_FORMAT (80)
      CLOCK_DATE_FORMAT (81)
      CLOCK_FORMAT_DIGIT_1 (82)
      CLOCK_FORMAT_DIGIT_2 (83)
      CLOCK_FORMAT_DIGIT_3 (84)
      TIME_HOURS (85)
      TIME_MINUTES (86)
      CLOCK_FORMAT_12H (87)
      CLOCK_FORMAT_24H (88)
      DATE_FORMAT_DDMMYYYY (89)
      DATE_FORMAT_MMDDYYYY (90)
      DATE_FORMAT_YYYYMMDD (91)
      SPEED_LIMITER_ON (92)
      SPEED_LIMITER_OFF (93)
      CONNECTIVITY_BLUETOOTH (94)
      CONNECTIVITY_PHONEPAIRING (95)
      CONNECTIVITY_HEADSETPAIRING (96)
      CONNECTIVITY_HEADSETTYPE (97)
      CONNECTIVITY_BLUETOOTH_ON (98)
      CONNECTIVITY_BLUETOOTH_OFF (99)
      QUICKSHIFTER_OFF (100)
      QUICKSHIFTER_ON (101)
      HEADSETTYPE_CORDED (102)
      HEADSETTYPE_BLUETOOTH (103)
      SET_SERVICE (104)
      SET_SERVICE_NEXTSERVICE (105)
      SET_SERVICE_DISTANCE_KM (106)
      SET_SERVICE_DISTANCE_MI (107)
      SET_SERVICE_MONTHS_MM (108)
      SET_SERVICE_SOFTWARE_VERSION (109)
      CURSOR_ON_KM (110)
      CURSOR_ON_MI (111)
      CURSON_ON_DATE (112)
      FAVORITES_TRIP_DISTANCE_1 (113)
      FAVORITES_AVERAGE_SPEED_1 (114)
      FAVORITES_AVERAGE_FUEL_CONS_1 (115)
      FAVORITES_TRIP_TIME_1 (116)
      FAVORITES_TRIP_DISTANCE_2 (117)
      FAVORITES_AVERAGE_SPEED_2 (118)
      FAVORITES_AVERAGE_FUEL_CONS_2 (119)
      FAVORITES_TRIP_TIME_2 (120)
      FAVORITES_FUEL_RANGE (121)
      FAVORITES_DATE (122)
      FAVORITES_BATTERY (123)
      FAVORITES_WATER_TEMPERATURE (124)
      FAVORITES_ODOMETER (125)
      FAVORITES_SLOT_1 (126)
      FAVORITES_SLOT_2 (127)
      FAVORITES_SLOT_3 (128)
      FAVORITES_SLOT_4 (129)
      MOTORCYCLE_RIDEMODE (130)
      MOTORCYCLE_ABS (131)
      MOTORCYCLE_MTC (132)
      MOTORCYCLE_LAUNCHCONTROL (133)
      MC_RIDEMODE_TRACK (134)
      MC_RIDEMODE_STREET (135)
      MC_RIDEMODE_RAIN (136)
      MC_DEACTIVATE_KILLSWITCH (137)
      MC_CLOSETHROTTLE (138)
      ABS_ROAD (139)
      ABS_SUPERMOTO (140)
      MTCMODE_TC (141)
      MTCMODE_MTC (142)
      MTCMODE_OFF (143)
      MTCMODE_ON (144)
      MTC_KEEP_OFF_PRESS (145)
      MTC_KEEP_ON_PRESS (146)
      MTC_OFF_RELEASE (147)
      MTC_ON_RELEASE (148)
      MC_LAUNCHCONTROL_ON (149)
      MC_LAUNCHCONTROL_OFF (150)
      SHIFT_LIGHT_ON_OFF (151)
      SL_RPM1 (152)
      SL_RPM2 (153)
      ODO_MSG_KM (154)
      ODO_MSG_MILES (155)
      SHIFT_LIGHT_ON (156)
      SHIFT_LIGHT_OFF (157) 
      SL_SET_RPM1 (158)
      SL_SET_RPM2 (159)
      QUICK_SELECTOR_UP (160)
      QUICK_SELECTOR_DOWN (161)
      QS_UP_RIDE_MODE (162)
      QS_UP_ABS_MODE (163)
      QS_UP_MTC (164)
      QS_UP_TRIP1 (165)
      QS_UP_TRIP2 (166)
      QS_UP_AUDIO (167)
      QS_UP_NAVIGATION (168)
      QS_UP_HEATEDGRIPS (169)
      QS_UP_CRUISECONTROL (170)
      QS_UP_BIKEINFO (171)
      QS_DOWN_RIDE_MODE (172)
      QS_DOWN_ABS_MODE (173)
      QS_DOWN_MTC (174)
      QS_DOWN_TRIP1 (175)
      QS_DOWN_TRIP2 (176)
      QS_DOWN_AUDIO (177)
      QS_DOWN_NAVIGATION (178)
      QS_DOWN_HEATEDGRIPS (179)
      QS_DOWN_CRUISECONTROL (180)
      QS_DOWN_BIKEINFO (181)
      WARNINGS_MENU (182)
      AUDIO_SUB_MENU (183)
      POPUP_WARNING_INSTRUCTION (184)
      POPUP_INCALL_INSTRUCTION (185)
      POPUP_HIDE (186)
      ACTIVE_CALL (187)
      AFTER_CALL (188)
      PHONE_PAIRING_NEW (189)
      PHONE_PAIRING_DELETE (190)
      BT_PHONE_STRT_SEARCHING (191)
      BT_PHONE_FOUND (192)
      BT_PHONE_ALREADY_PAIRED (193)
      BT_PHONE_PAIRING_PASSKEY (194)
      BT_PHONE_CHECK_PASSKEY (195)
      BT_PHONE_PASSKEY_ERR_CHCK (196)
      BT_PHONE_PAIRING_INPROGRESS (198)
      BT_PHONE_PAIR_SUCCESS(199)
      BT_PHONE_NOT_FOUND (200)
      BT_PHONE_PAIRING_FAILED (201)
      HEADSET_PAIRING_NEW (202)
      HEADSET_PAIRING_DELETE (203)
      BT_HEADSET_STRT_SEARCHING (204)
      BT_HEADSET_FOUND (205)
      BT_HEADSET_ALREADY_PAIRED (206)
      BT_HEADSET_NOT_FOUND (207)
      BT_HEADSET_PAIRING_FAILED (208)
      BT_HEADSET_PAIRING_INPROGRESS (209)
      BT_HEADSET_PAIR_SUCCESS (210)







   end
   methods (Static = true)
       function retVal = getDataScope()
          % GETDATASCOPE Specifies whether generated code imports or exports this type.
          % Return one of:
          % 'Auto':     define type in model_types.h, or import if header file specified
          % 'Exported': define type in a generated header file
          % 'Imported': import type definition from specified header file
          % If you do not define this method, DataScope is 'Auto' by default.
          retVal = 'Exported';
        end
    
        function retVal = getHeaderFile()
          % GETHEADERFILE Specifies the file that defines this type in generated code.
          % The method getDataScope determines the significance of the specified file.
          retVal = 'exported_enum_type.h';          
        end
        function retVal = addClassNameToEnumNames()
        % ADDCLASSNAMETOENUMNAMES Specifies whether to add the class name
        % as a prefix to enumeration member names in generated code.
        % Return true or false.
        % If you do not define this method, no prefix is added.
            retVal = false;
        end
   end
end