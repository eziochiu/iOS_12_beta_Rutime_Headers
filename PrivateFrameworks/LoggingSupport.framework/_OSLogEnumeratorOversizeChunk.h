/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogEnumeratorOversizeChunk : NSObject {
    struct tracev3_chunk_s { struct tracev3_chunk_preamble_s { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; } x1; union { struct tracev3_chunk_header_s { struct mach_timebase_info { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; unsigned long long x_1_2_2; long long x_1_2_3; int x_1_2_4; int x_1_2_5; int x_1_2_6; unsigned int x_1_2_7; struct tracev3_subchunk_preamble_s { unsigned int x_8_3_1; unsigned int x_8_3_2; } x_1_2_8; struct tracev3_subchunk_continuous_s { unsigned long long x_9_3_1; } x_1_2_9; struct tracev3_subchunk_preamble_s { unsigned int x_10_3_1; unsigned int x_10_3_2; } x_1_2_10; struct tracev3_subchunk_systeminfo_s { int x_11_3_1; int x_11_3_2; BOOL x_11_3_3[16]; BOOL x_11_3_4[32]; } x_1_2_11; struct tracev3_subchunk_preamble_s { unsigned int x_12_3_1; unsigned int x_12_3_2; } x_1_2_12; struct tracev3_subchunk_generation_s { unsigned char x_13_3_1[16]; int x_13_3_2; int x_13_3_3; } x_1_2_13; struct tracev3_subchunk_preamble_s { unsigned int x_14_3_1; unsigned int x_14_3_2; } x_1_2_14; struct tracev3_subchunk_timezone_s { BOOL x_15_3_1[48]; } x_1_2_15; } x_2_1_1; struct tracev3_chunk_catalog_s { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; unsigned short x_2_2_4; unsigned char x_2_2_5[0]; } x_2_1_2; } x2; } * _chunk;
    _OSLogEnumeratorCatalogSubchunk * _subchunk;
}

@property (nonatomic, readonly) unsigned long long timestamp;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (void)fillMessage:(struct os_log_message_s { unsigned long long x1; unsigned long long x2; unsigned long long x3; char *x4; char *x5; struct timeval { long long x_6_1_1; int x_6_1_2; } x6; struct timezone { int x_7_1_1; int x_7_1_2; } x7; unsigned int x8; unsigned int x9; char *x10; char *x11; unsigned long long x12; char *x13; unsigned long long x14; char *x15; char *x16; unsigned int x17; unsigned char x18; bool x19; unsigned long long x20; char *x21; unsigned char x22; unsigned char x23; }*)arg1;
- (void)fillProxy:(id)arg1;
- (id)initWithSubchunk:(id)arg1 chunk:(struct tracev3_chunk_s { struct tracev3_chunk_preamble_s { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; } x1; union { struct tracev3_chunk_header_s { struct mach_timebase_info { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; unsigned long long x_1_2_2; long long x_1_2_3; int x_1_2_4; int x_1_2_5; int x_1_2_6; unsigned int x_1_2_7; struct tracev3_subchunk_preamble_s { unsigned int x_8_3_1; unsigned int x_8_3_2; } x_1_2_8; struct tracev3_subchunk_continuous_s { unsigned long long x_9_3_1; } x_1_2_9; struct tracev3_subchunk_preamble_s { unsigned int x_10_3_1; unsigned int x_10_3_2; } x_1_2_10; struct tracev3_subchunk_systeminfo_s { int x_11_3_1; int x_11_3_2; BOOL x_11_3_3[16]; BOOL x_11_3_4[32]; } x_1_2_11; struct tracev3_subchunk_preamble_s { unsigned int x_12_3_1; unsigned int x_12_3_2; } x_1_2_12; struct tracev3_subchunk_generation_s { unsigned char x_13_3_1[16]; int x_13_3_2; int x_13_3_3; } x_1_2_13; struct tracev3_subchunk_preamble_s { unsigned int x_14_3_1; unsigned int x_14_3_2; } x_1_2_14; struct tracev3_subchunk_timezone_s { BOOL x_15_3_1[48]; } x_1_2_15; } x_2_1_1; struct tracev3_chunk_catalog_s { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; unsigned short x_2_2_4; unsigned char x_2_2_5[0]; } x_2_1_2; } x2; }*)arg2;
- (bool)matches:(unsigned int)arg1 procinfo:(struct catalog_procinfo_s { unsigned short x1; unsigned short x2; int x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned char x7[16]; unsigned char x8[16]; struct hashtable {} *x9; struct hashtable {} *x10; }*)arg2;
- (unsigned long long)timestamp;

@end
