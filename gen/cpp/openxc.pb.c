/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.2.4-dev at Wed Oct  9 14:26:13 2013. */

#include "openxc.pb.h"



const pb_field_t openxc_VehicleMessage_fields[4] = {
    PB_FIELD2(  1, ENUM    , OPTIONAL, STATIC, FIRST, openxc_VehicleMessage, type, type, 0),
    PB_FIELD2(  2, MESSAGE , OPTIONAL, STATIC, OTHER, openxc_VehicleMessage, raw_message, type, &openxc_RawMessage_fields),
    PB_FIELD2(  3, MESSAGE , OPTIONAL, STATIC, OTHER, openxc_VehicleMessage, translated_message, raw_message, &openxc_TranslatedMessage_fields),
    PB_LAST_FIELD
};

const pb_field_t openxc_RawMessage_fields[4] = {
    PB_FIELD2(  1, INT32   , OPTIONAL, STATIC, FIRST, openxc_RawMessage, bus, bus, 0),
    PB_FIELD2(  2, UINT32  , OPTIONAL, STATIC, OTHER, openxc_RawMessage, message_id, bus, 0),
    PB_FIELD2(  3, UINT64  , OPTIONAL, STATIC, OTHER, openxc_RawMessage, data, message_id, 0),
    PB_LAST_FIELD
};

const pb_field_t openxc_TranslatedMessage_fields[8] = {
    PB_FIELD2(  1, STRING  , OPTIONAL, STATIC, FIRST, openxc_TranslatedMessage, name, name, 0),
    PB_FIELD2(  2, STRING  , OPTIONAL, STATIC, OTHER, openxc_TranslatedMessage, string_value, name, 0),
    PB_FIELD2(  3, DOUBLE  , OPTIONAL, STATIC, OTHER, openxc_TranslatedMessage, numerical_value, string_value, 0),
    PB_FIELD2(  4, BOOL    , OPTIONAL, STATIC, OTHER, openxc_TranslatedMessage, boolean_value, numerical_value, 0),
    PB_FIELD2(  5, STRING  , OPTIONAL, STATIC, OTHER, openxc_TranslatedMessage, string_event, boolean_value, 0),
    PB_FIELD2(  6, DOUBLE  , OPTIONAL, STATIC, OTHER, openxc_TranslatedMessage, numerical_event, string_event, 0),
    PB_FIELD2(  7, BOOL    , OPTIONAL, STATIC, OTHER, openxc_TranslatedMessage, boolean_event, numerical_event, 0),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
STATIC_ASSERT((pb_membersize(openxc_VehicleMessage, raw_message) < 256 && pb_membersize(openxc_VehicleMessage, translated_message) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_openxc_VehicleMessage_openxc_RawMessage_openxc_TranslatedMessage)
#endif

#if !defined(PB_FIELD_32BIT)
STATIC_ASSERT((pb_membersize(openxc_VehicleMessage, raw_message) < 65536 && pb_membersize(openxc_VehicleMessage, translated_message) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_openxc_VehicleMessage_openxc_RawMessage_openxc_TranslatedMessage)
#endif

/* On some platforms (such as AVR), double is really float.
 * These are not directly supported by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)

