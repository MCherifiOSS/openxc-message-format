/* Automatically generated nanopb header */
/* Generated by nanopb-0.2.4-dev at Wed Oct 23 09:56:27 2013. */

#ifndef _PB_OPENXC_PB_H_
#define _PB_OPENXC_PB_H_
#include <pb.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _openxc_VehicleMessage_Type {
    openxc_VehicleMessage_Type_RAW = 1,
    openxc_VehicleMessage_Type_STRING = 2,
    openxc_VehicleMessage_Type_BOOL = 3,
    openxc_VehicleMessage_Type_NUM = 4,
    openxc_VehicleMessage_Type_EVENTED_NUM = 5,
    openxc_VehicleMessage_Type_EVENTED_STRING = 6,
    openxc_VehicleMessage_Type_EVENTED_BOOL = 7
} openxc_VehicleMessage_Type;

/* Struct definitions */
typedef struct _openxc_BooleanMessage {
    bool has_name;
    char name[100];
    bool has_value;
    bool value;
} openxc_BooleanMessage;

typedef struct _openxc_EventedBooleanMessage {
    bool has_name;
    char name[100];
    bool has_value;
    char value[100];
    bool has_event;
    bool event;
} openxc_EventedBooleanMessage;

typedef struct _openxc_EventedNumericMessage {
    bool has_name;
    char name[100];
    bool has_value;
    char value[100];
    bool has_event;
    double event;
} openxc_EventedNumericMessage;

typedef struct _openxc_EventedStringMessage {
    bool has_name;
    char name[100];
    bool has_value;
    char value[100];
    bool has_event;
    char event[100];
} openxc_EventedStringMessage;

typedef struct _openxc_NumericMessage {
    bool has_name;
    char name[100];
    bool has_value;
    double value;
} openxc_NumericMessage;

typedef struct _openxc_RawMessage {
    bool has_bus;
    int32_t bus;
    bool has_message_id;
    uint32_t message_id;
    bool has_data;
    uint64_t data;
} openxc_RawMessage;

typedef struct _openxc_StringMessage {
    bool has_name;
    char name[100];
    bool has_value;
    char value[100];
} openxc_StringMessage;

typedef struct _openxc_VehicleMessage {
    bool has_type;
    openxc_VehicleMessage_Type type;
    bool has_raw_message;
    openxc_RawMessage raw_message;
    bool has_string_message;
    openxc_StringMessage string_message;
    bool has_numeric_message;
    openxc_NumericMessage numeric_message;
    bool has_boolean_message;
    openxc_BooleanMessage boolean_message;
    bool has_evented_string_message;
    openxc_EventedStringMessage evented_string_message;
    bool has_evented_boolean_message;
    openxc_EventedBooleanMessage evented_boolean_message;
    bool has_evented_numeric_message;
    openxc_EventedNumericMessage evented_numeric_message;
} openxc_VehicleMessage;

/* Default values for struct fields */

/* Field tags (for use in manual encoding/decoding) */
#define openxc_BooleanMessage_name_tag           1
#define openxc_BooleanMessage_value_tag          2
#define openxc_EventedBooleanMessage_name_tag    1
#define openxc_EventedBooleanMessage_value_tag   2
#define openxc_EventedBooleanMessage_event_tag   3
#define openxc_EventedNumericMessage_name_tag    1
#define openxc_EventedNumericMessage_value_tag   2
#define openxc_EventedNumericMessage_event_tag   3
#define openxc_EventedStringMessage_name_tag     1
#define openxc_EventedStringMessage_value_tag    2
#define openxc_EventedStringMessage_event_tag    3
#define openxc_NumericMessage_name_tag           1
#define openxc_NumericMessage_value_tag          2
#define openxc_RawMessage_bus_tag                1
#define openxc_RawMessage_message_id_tag         2
#define openxc_RawMessage_data_tag               3
#define openxc_StringMessage_name_tag            1
#define openxc_StringMessage_value_tag           2
#define openxc_VehicleMessage_type_tag           1
#define openxc_VehicleMessage_raw_message_tag    2
#define openxc_VehicleMessage_string_message_tag 3
#define openxc_VehicleMessage_numeric_message_tag 4
#define openxc_VehicleMessage_boolean_message_tag 5
#define openxc_VehicleMessage_evented_string_message_tag 6
#define openxc_VehicleMessage_evented_boolean_message_tag 7
#define openxc_VehicleMessage_evented_numeric_message_tag 8

/* Struct field encoding specification for nanopb */
extern const pb_field_t openxc_VehicleMessage_fields[9];
extern const pb_field_t openxc_RawMessage_fields[4];
extern const pb_field_t openxc_StringMessage_fields[3];
extern const pb_field_t openxc_NumericMessage_fields[3];
extern const pb_field_t openxc_BooleanMessage_fields[3];
extern const pb_field_t openxc_EventedStringMessage_fields[4];
extern const pb_field_t openxc_EventedBooleanMessage_fields[4];
extern const pb_field_t openxc_EventedNumericMessage_fields[4];

/* Maximum encoded size of messages (where known) */
#define openxc_VehicleMessage_size               1191
#define openxc_RawMessage_size                   23
#define openxc_StringMessage_size                204
#define openxc_NumericMessage_size               111
#define openxc_BooleanMessage_size               104
#define openxc_EventedStringMessage_size         306
#define openxc_EventedBooleanMessage_size        206
#define openxc_EventedNumericMessage_size        213

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
