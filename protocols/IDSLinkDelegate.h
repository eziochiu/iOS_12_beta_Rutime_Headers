/* made by EzioChiu.
 */

@protocol IDSLinkDelegate <NSObject>

@required

- (void)link:(id)arg1 didConnectForDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (bool)link:(id)arg1 didReceivePacket:(struct { char *x1; unsigned long long x2; long long x3; long long x4; unsigned int x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; unsigned int x12; struct sockaddr_storage { unsigned char x_13_1_1; unsigned char x_13_1_2; BOOL x_13_1_3[6]; long long x_13_1_4; BOOL x_13_1_5[112]; } x13; struct sockaddr_storage { unsigned char x_14_1_1; unsigned char x_14_1_2; BOOL x_14_1_3[6]; long long x_14_1_4; BOOL x_14_1_5[112]; } x14; unsigned short x15; int x16; struct { char *x_17_1_1; unsigned short x_17_1_2; int x_17_1_3; unsigned short x_17_1_4[12]; long long x_17_1_5; unsigned char x_17_1_6; unsigned short x_17_1_7; unsigned char x_17_1_8; bool x_17_1_9; bool x_17_1_10; unsigned short x_17_1_11; struct { unsigned short x_12_2_1; unsigned short x_12_2_2; unsigned short x_12_2_3; unsigned short x_12_2_4; unsigned short x_12_2_5; } x_17_1_12; bool x_17_1_13; unsigned int x_17_1_14; } x17[8]; BOOL x18; BOOL x19; int x20; unsigned char x21[0]; }*)arg2 fromDeviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;

@optional

- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;
- (void)link:(id)arg1 didConnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(NSUUID *)arg3 localAttributes:(NSDictionary *)arg4 remoteAttributes:(NSDictionary *)arg5;
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(bool)arg2 currentDefaultLinkID:(BOOL)arg3;
- (void)link:(id)arg1 didDisconnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(NSUUID *)arg3;
- (void)link:(id)arg1 didFailToConnectOverCloud:(NSString *)arg2 cbuuid:(NSString *)arg3;
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;
- (void)link:(id)arg1 didReceiveReportEvent:(NSDictionary *)arg2;
- (void)link:(id)arg1 didReceiveSKEData:(NSData *)arg2;
- (void)link:(id)arg1 didReceiveSessionInfo:(NSDictionary *)arg2 relayGroupID:(NSString *)arg3 relaySessionID:(NSString *)arg4 success:(bool)arg5;
- (void)link:(id)arg1 hasSpaceAvailable:(bool)arg2 deviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;
- (void)link:(id)arg1 hostAwakeDidChange:(bool)arg2 deviceUniqueID:(NSString *)arg3 cbuuid:(NSString *)arg4;

@end
