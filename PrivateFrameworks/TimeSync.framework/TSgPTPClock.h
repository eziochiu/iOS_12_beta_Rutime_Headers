/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPClock : TSKernelClock {
    NSArray * _gptpPath;
    unsigned long long  _grandmasterIdentity;
}

@property (nonatomic) unsigned char clockAccuracy;
@property (nonatomic) unsigned char clockClass;
@property (nonatomic, readonly) unsigned long long clockIdentity;
@property (nonatomic) unsigned char clockPriority1;
@property (nonatomic) unsigned char clockPriority2;
@property (nonatomic, copy) NSArray *gptpPath;
@property (nonatomic) unsigned long long grandmasterIdentity;
@property (nonatomic, readonly, copy) NSArray *ports;

+ (id)availablegPTPClockIdentifiers;
+ (unsigned long long)clockIdentifierForInterfaceName:(id)arg1;
+ (id)clockNameForClockIdentifier:(unsigned long long)arg1;
+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)diagnosticInfoForService:(unsigned int)arg1;
+ (id)iokitInterfaceMatchingDictionaryForInterfaceName:(id)arg1;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;
+ (id)iokitMatchingDictionaryForInterfaceName:(id)arg1;

- (id)_gptpPath;
- (unsigned long long)_grandmasterIdentity;
- (void)_handleInterestNotification:(unsigned int)arg1 withArgument:(void*)arg2;
- (void)_handleNotification:(unsigned int)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3;
- (bool)addLinkLayerPortOnInterfaceNamed:(id)arg1 error:(id*)arg2;
- (bool)addUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)addUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)addUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)addUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)addUnicastLinkLayerEtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)addUnicastLinkLayerPtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)addUnicastUDPv4EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)addUnicastUDPv4PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)addUnicastUDPv6EtEPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)addUnicastUDPv6PtPPortOnInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (unsigned char)clockAccuracy;
- (unsigned char)clockClass;
- (unsigned long long)clockIdentity;
- (id)clockName;
- (unsigned char)clockPriority1;
- (unsigned char)clockPriority2;
- (unsigned long long)convertFrom128BitgPTPTimeToMachAbsoluteTime:(struct { unsigned long long x1; unsigned long long x2; })arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (bool)convertFrom32BitASTime:(unsigned int*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg1;
- (unsigned long long)convertFrom32BitASToMachAbsoluteTime:(unsigned int)arg1 withFlags:(unsigned int*)arg2;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (struct { unsigned long long x1; unsigned long long x2; })convertFromMachAbsoluteTo128BitgPTPTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 grandmasterUsed:(unsigned long long*)arg2 portNumber:(unsigned short*)arg3;
- (void)dealloc;
- (id)gPTPTimeFromMachAbsoluteTime:(unsigned long long)arg1;
- (bool)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 forGrandmasterIdentity:(unsigned long long*)arg5 portNumber:(unsigned short*)arg6 withError:(id*)arg7;
- (id)gptpPath;
- (unsigned long long)grandmasterIdentity;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (unsigned long long)machAbsoluteFromgPTPTime:(id)arg1;
- (id)ports;
- (bool)removeLinkLayerPortFromInterfaceNamed:(id)arg1 error:(id*)arg2;
- (bool)removeUDPv4EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)removeUDPv4PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)removeUDPv6EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)removeUDPv6PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)removeUnicastLinkLayerEtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)removeUnicastLinkLayerPtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)removeUnicastUDPv4EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)removeUnicastUDPv4PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(unsigned int)arg2 error:(id*)arg3;
- (bool)removeUnicastUDPv6EtEPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (bool)removeUnicastUDPv6PtPPortFromInterfaceNamed:(id)arg1 withDestinationAddress:(const char *)arg2 error:(id*)arg3;
- (void)setClockAccuracy:(unsigned char)arg1;
- (void)setClockClass:(unsigned char)arg1;
- (void)setClockPriority1:(unsigned char)arg1;
- (void)setClockPriority2:(unsigned char)arg1;
- (void)setGptpPath:(id)arg1;
- (void)setGrandmasterIdentity:(unsigned long long)arg1;

@end
