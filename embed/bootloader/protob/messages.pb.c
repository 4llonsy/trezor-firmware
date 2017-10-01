/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev */

#include "messages.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t Initialize_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t GetFeatures_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t Features_fields[18] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, Features, vendor, vendor, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, Features, major_version, vendor, 0),
    PB_FIELD(  3, UINT32  , OPTIONAL, STATIC  , OTHER, Features, minor_version, major_version, 0),
    PB_FIELD(  4, UINT32  , OPTIONAL, STATIC  , OTHER, Features, patch_version, minor_version, 0),
    PB_FIELD(  5, BOOL    , OPTIONAL, STATIC  , OTHER, Features, bootloader_mode, patch_version, 0),
    PB_FIELD(  6, STRING  , OPTIONAL, STATIC  , OTHER, Features, device_id, bootloader_mode, 0),
    PB_FIELD(  7, BOOL    , OPTIONAL, STATIC  , OTHER, Features, pin_protection, device_id, 0),
    PB_FIELD(  8, BOOL    , OPTIONAL, STATIC  , OTHER, Features, passphrase_protection, pin_protection, 0),
    PB_FIELD(  9, STRING  , OPTIONAL, STATIC  , OTHER, Features, language, passphrase_protection, 0),
    PB_FIELD( 10, STRING  , OPTIONAL, STATIC  , OTHER, Features, label, language, 0),
    PB_FIELD( 12, BOOL    , OPTIONAL, STATIC  , OTHER, Features, initialized, label, 0),
    PB_FIELD( 13, BYTES   , OPTIONAL, STATIC  , OTHER, Features, revision, initialized, 0),
    PB_FIELD( 14, BYTES   , OPTIONAL, STATIC  , OTHER, Features, bootloader_hash, revision, 0),
    PB_FIELD( 15, BOOL    , OPTIONAL, STATIC  , OTHER, Features, imported, bootloader_hash, 0),
    PB_FIELD( 16, BOOL    , OPTIONAL, STATIC  , OTHER, Features, pin_cached, imported, 0),
    PB_FIELD( 17, BOOL    , OPTIONAL, STATIC  , OTHER, Features, passphrase_cached, pin_cached, 0),
    PB_FIELD( 18, BOOL    , OPTIONAL, STATIC  , OTHER, Features, firmware_present, passphrase_cached, 0),
    PB_LAST_FIELD
};

const pb_field_t Ping_fields[5] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, Ping, message, message, 0),
    PB_FIELD(  2, BOOL    , OPTIONAL, STATIC  , OTHER, Ping, button_protection, message, 0),
    PB_FIELD(  3, BOOL    , OPTIONAL, STATIC  , OTHER, Ping, pin_protection, button_protection, 0),
    PB_FIELD(  4, BOOL    , OPTIONAL, STATIC  , OTHER, Ping, passphrase_protection, pin_protection, 0),
    PB_LAST_FIELD
};

const pb_field_t Success_fields[2] = {
    PB_FIELD(  1, STRING  , OPTIONAL, STATIC  , FIRST, Success, message, message, 0),
    PB_LAST_FIELD
};

const pb_field_t Failure_fields[3] = {
    PB_FIELD(  1, ENUM    , OPTIONAL, STATIC  , FIRST, Failure, code, code, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, Failure, message, code, 0),
    PB_LAST_FIELD
};

const pb_field_t ButtonRequest_fields[3] = {
    PB_FIELD(  1, ENUM    , OPTIONAL, STATIC  , FIRST, ButtonRequest, code, code, 0),
    PB_FIELD(  2, STRING  , OPTIONAL, STATIC  , OTHER, ButtonRequest, data, code, 0),
    PB_LAST_FIELD
};

const pb_field_t ButtonAck_fields[1] = {
    PB_LAST_FIELD
};

const pb_field_t FirmwareErase_fields[2] = {
    PB_FIELD(  1, UINT32  , OPTIONAL, STATIC  , FIRST, FirmwareErase, length, length, 0),
    PB_LAST_FIELD
};

const pb_field_t FirmwareRequest_fields[3] = {
    PB_FIELD(  1, UINT32  , OPTIONAL, STATIC  , FIRST, FirmwareRequest, offset, offset, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, FirmwareRequest, length, offset, 0),
    PB_LAST_FIELD
};

const pb_field_t FirmwareUpload_fields[3] = {
    PB_FIELD(  1, BYTES   , REQUIRED, CALLBACK, FIRST, FirmwareUpload, payload, payload, 0),
    PB_FIELD(  2, BYTES   , OPTIONAL, STATIC  , OTHER, FirmwareUpload, hash, payload, 0),
    PB_LAST_FIELD
};



/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for ButtonRequest.data is too large. Define PB_FIELD_16BIT to fix this.
#endif


/* @@protoc_insertion_point(eof) */
