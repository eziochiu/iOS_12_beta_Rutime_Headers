/* made by EzioChiu.
 */

@protocol IDSLink <NSObject>

@required

- (<IDSLinkDelegate> *)alternateDelegate;
- (NSString *)cbuuid;
- (NSDictionary *)copyLinkStatsDict;
- (<IDSLinkDelegate> *)delegate;
- (NSString *)deviceUniqueID;
- (NSString *)generateLinkReport:(double)arg1 isCurrentLink:(bool)arg2;
- (unsigned long long)headerOverhead;
- (NSString *)linkTypeString;
- (unsigned long long)sendPacketBuffer:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; unsigned char x21[0]; }*)arg1 toDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (unsigned long long)sendPacketBufferArray:(struct { /* ? */ }**)arg1 arraySize:(int)arg2 toDeviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (void)setAlternateDelegate:(id <IDSLinkDelegate>)arg1;
- (void)setCbuuid:(NSString *)arg1;
- (void)setDelegate:(id <IDSLinkDelegate>)arg1;
- (void)setDeviceUniqueID:(NSString *)arg1;
- (unsigned long long)state;

@optional

- (void)start;

@end
