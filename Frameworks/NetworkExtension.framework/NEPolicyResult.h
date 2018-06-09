/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPolicyResult : NSObject <NEPrettyDescription> {
    NSUUID * _agentUUID;
    unsigned int  _controlUnit;
    NSString * _interfaceName;
    long long  _resultType;
    NSArray * _routeRules;
    long long  _secondaryResultType;
    unsigned int  _serviceData;
    NSUUID * _serviceUUID;
    unsigned int  _skipOrder;
}

@property (copy) NSUUID *agentUUID;
@property unsigned int controlUnit;
@property (copy) NSString *interfaceName;
@property long long resultType;
@property (copy) NSArray *routeRules;
@property long long secondaryResultType;
@property unsigned int serviceData;
@property (copy) NSUUID *serviceUUID;
@property unsigned int skipOrder;

+ (id)divertSocketToControlUnit:(unsigned int)arg1;
+ (id)drop;
+ (id)filterWithControlUnit:(unsigned int)arg1;
+ (id)netAgentUUID:(id)arg1;
+ (id)pass;
+ (id)routeRules:(id)arg1;
+ (id)scopeSocketToInterfaceName:(id)arg1;
+ (id)scopeToDirectInterface;
+ (id)scopedNetworkAgent:(id)arg1;
+ (id)skipWithOrder:(unsigned int)arg1;
+ (id)triggerScopedService:(id)arg1 data:(unsigned int)arg2;
+ (id)tunnelIPToInterfaceName:(id)arg1 secondaryResultType:(long long)arg2;

- (void).cxx_destruct;
- (bool)addTLVsToMessage:(id)arg1;
- (id)agentUUID;
- (unsigned int)controlUnit;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)init;
- (id)initInternal;
- (id)interfaceName;
- (long long)resultType;
- (id)resultTypeString;
- (unsigned char)resultTypeValue;
- (id)routeRules;
- (long long)secondaryResultType;
- (id)secondaryResultTypeString;
- (unsigned char)secondaryResultTypeValue;
- (unsigned int)serviceData;
- (id)serviceUUID;
- (void)setAgentUUID:(id)arg1;
- (void)setControlUnit:(unsigned int)arg1;
- (void)setInterfaceName:(id)arg1;
- (void)setResultType:(long long)arg1;
- (void)setRouteRules:(id)arg1;
- (void)setSecondaryResultType:(long long)arg1;
- (void)setServiceData:(unsigned int)arg1;
- (void)setServiceUUID:(id)arg1;
- (void)setSkipOrder:(unsigned int)arg1;
- (unsigned int)skipOrder;
- (bool)validate;

@end
