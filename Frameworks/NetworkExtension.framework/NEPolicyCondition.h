/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPolicyCondition : NSObject <NEPrettyDescription> {
    NSString * _accountIdentifier;
    NSString * _agentDomain;
    NSString * _agentType;
    NSUUID * _applicationUUID;
    long long  _conditionType;
    NSString * _customEntitlement;
    NSString * _domain;
    NWAddressEndpoint * _endAddress;
    NSString * _interfaceName;
    unsigned short  _ipProtocol;
    bool  _negative;
    int  _pid;
    unsigned char  _prefix;
    NWAddressEndpoint * _startAddress;
    unsigned int  _trafficClassEnd;
    unsigned int  _trafficClassStart;
    unsigned int  _uid;
}

@property (copy) NSString *accountIdentifier;
@property (copy) NSString *agentDomain;
@property (copy) NSString *agentType;
@property (copy) NSUUID *applicationUUID;
@property long long conditionType;
@property (copy) NSString *customEntitlement;
@property (copy) NSString *domain;
@property (copy) NWAddressEndpoint *endAddress;
@property (copy) NSString *interfaceName;
@property unsigned short ipProtocol;
@property (getter=isNegative) bool negative;
@property int pid;
@property unsigned char prefix;
@property (copy) NWAddressEndpoint *startAddress;
@property unsigned int trafficClassEnd;
@property unsigned int trafficClassStart;
@property unsigned int uid;

+ (id)accountIdentifier:(id)arg1;
+ (id)allInterfaces;
+ (id)customEntitlement:(id)arg1;
+ (id)domain:(id)arg1;
+ (id)effectiveApplication:(id)arg1;
+ (id)effectivePID:(int)arg1;
+ (id)entitlement;
+ (id)ipProtocol:(unsigned short)arg1;
+ (id)localAddress:(id)arg1 prefix:(unsigned char)arg2;
+ (id)localAddressStart:(id)arg1 end:(id)arg2;
+ (id)realApplication:(id)arg1;
+ (id)remoteAddress:(id)arg1 prefix:(unsigned char)arg2;
+ (id)remoteAddressStart:(id)arg1 end:(id)arg2;
+ (id)requiredAgentDomain:(id)arg1 agentType:(id)arg2;
+ (id)scopedInterface:(id)arg1;
+ (id)trafficClassStart:(unsigned int)arg1 end:(unsigned int)arg2;
+ (id)uid:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (bool)addTLVsToMessage:(id)arg1;
- (id)agentDomain;
- (id)agentType;
- (id)applicationUUID;
- (long long)conditionType;
- (id)conditionTypeString;
- (unsigned char)conditionTypeValue;
- (id)customEntitlement;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)domain;
- (id)endAddress;
- (id)init;
- (id)initInternal;
- (id)interfaceName;
- (unsigned short)ipProtocol;
- (bool)isNegative;
- (int)pid;
- (unsigned char)prefix;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAgentDomain:(id)arg1;
- (void)setAgentType:(id)arg1;
- (void)setApplicationUUID:(id)arg1;
- (void)setConditionType:(long long)arg1;
- (void)setCustomEntitlement:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setEndAddress:(id)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setIpProtocol:(unsigned short)arg1;
- (void)setNegative:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setPrefix:(unsigned char)arg1;
- (void)setStartAddress:(id)arg1;
- (void)setTrafficClassEnd:(unsigned int)arg1;
- (void)setTrafficClassStart:(unsigned int)arg1;
- (void)setUid:(unsigned int)arg1;
- (id)startAddress;
- (unsigned int)trafficClassEnd;
- (unsigned int)trafficClassStart;
- (unsigned int)uid;
- (bool)validate;

@end
