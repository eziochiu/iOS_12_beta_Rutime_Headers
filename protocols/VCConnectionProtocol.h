/* made by EzioChiu.
 */

@protocol VCConnectionProtocol <NSObject>

@required

- (int)connectionId;
- (int)connectionMTU;
- (NSUUID *)connectionUUID;
- (unsigned int)downlinkBitrateCap;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (bool)isIPv6;
- (bool)isLocalOnCellular;
- (bool)isLocalOnWiFi;
- (bool)isOnSameInterfacesWithConnection:(id <VCConnectionProtocol>)arg1;
- (bool)isRelay;
- (bool)isRemoteOnCellular;
- (bool)isRemoteOnWiFi;
- (bool)isSameAsConnection:(id <VCConnectionProtocol>)arg1;
- (bool)isVPN;
- (int)localCellTech;
- (int)localConnectionType;
- (NSString *)localInterfaceTypeString;
- (bool)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo { int x1; union { struct { struct tagIPPORT { int x_1_3_1; BOOL x_1_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_1_3_3; unsigned short x_1_3_4; } x_1_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_1_2_2; struct { bool x_3_3_1; unsigned short x_3_3_2; } x_1_2_3; } x_2_1_1; struct { int x_2_2_1; struct tagIPPORT { int x_2_3_1; BOOL x_2_3_2[16]; union { unsigned int x_3_4_1; unsigned char x_3_4_2[16]; } x_2_3_3; unsigned short x_2_3_4; } x_2_2_2; } x_2_1_2; struct { unsigned int x_3_2_1; struct { BOOL x_2_3_1; unsigned short x_2_3_2; unsigned short x_2_3_3; unsigned char x_2_3_4; } x_3_2_2; } x_2_1_3; } x2; struct tagVCSourceDestinationInfo {} *x3; }*)arg1;
- (int)priority;
- (int)remoteCellTech;
- (int)remoteConnectionType;
- (NSString *)remoteInterfaceTypeString;
- (void)setConnectionMTU:(int)arg1;
- (void)setDownlinkBitrateCap:(unsigned int)arg1;
- (void)setLocalCellTech:(int)arg1;
- (void)setPriority:(int)arg1;
- (void)setRemoteCellTech:(int)arg1;
- (void)setUplinkBitrateCap:(unsigned int)arg1;
- (unsigned int)type;
- (unsigned int)uplinkBitrateCap;

@end
