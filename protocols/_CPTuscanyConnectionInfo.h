/* made by EzioChiu.
 */

@protocol _CPTuscanyConnectionInfo <NSObject>

@required

- (int)IPType;
- (bool)TFOsucceeded;
- (double)connectionDelay;
- (NSString *)edgeAddress;
- (int)edgeType;
- (double)fallbackDelay;
- (int)fallbackReason;
- (int)fallbackReasonCategory;
- (double)firstTxByteDelay;
- (double)firstTxByteTimeStamp;
- (bool)getMultipathSubflowSwitchCounts:(int*)arg1 forKey:(NSString *)arg2;
- (bool)getTcpInfo:(id*)arg1 forKey:(NSString *)arg2;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (unsigned int)initialBytesLeftOver;
- (int)interfaceType;
- (bool)isMultipath;
- (bool)isTFOProbeSucceeded;
- (NSData *)jsonData;
- (unsigned int)minimumRTT;
- (unsigned int)multipathConnectedSubflowCount;
- (unsigned int)multipathPrimarySubflowInterfaceIndex;
- (unsigned int)multipathSubflowCount;
- (NSDictionary *)multipathSubflowSwitchCounts;
- (int)pathType;
- (void)setConnectionDelay:(double)arg1;
- (void)setEdgeAddress:(NSString *)arg1;
- (void)setEdgeType:(int)arg1;
- (void)setFallbackDelay:(double)arg1;
- (void)setFallbackReason:(int)arg1;
- (void)setFallbackReasonCategory:(int)arg1;
- (void)setFirstTxByteDelay:(double)arg1;
- (void)setFirstTxByteTimeStamp:(double)arg1;
- (void)setIPType:(int)arg1;
- (void)setInitialBytesLeftOver:(unsigned int)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setIsMultipath:(bool)arg1;
- (void)setIsTFOProbeSucceeded:(bool)arg1;
- (void)setMinimumRTT:(unsigned int)arg1;
- (void)setMultipathConnectedSubflowCount:(unsigned int)arg1;
- (void)setMultipathPrimarySubflowInterfaceIndex:(unsigned int)arg1;
- (void)setMultipathSubflowCount:(unsigned int)arg1;
- (void)setMultipathSubflowSwitchCounts:(NSDictionary *)arg1;
- (void)setMultipathSubflowSwitchCounts:(int)arg1 forKey:(NSString *)arg2;
- (void)setPathType:(int)arg1;
- (void)setTFOsucceeded:(bool)arg1;
- (void)setTcpInfo:(NSDictionary *)arg1;
- (void)setTcpInfo:(_CPTCPInfo *)arg1 forKey:(NSString *)arg2;
- (void)setTimeIntervalSinceLastUsage:(double)arg1;
- (void)setTimeToFirstByte:(double)arg1;
- (void)setTunnelConnectionError:(int)arg1;
- (NSDictionary *)tcpInfo;
- (double)timeIntervalSinceLastUsage;
- (double)timeToFirstByte;
- (int)tunnelConnectionError;

@end
