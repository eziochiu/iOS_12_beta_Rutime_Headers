/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription> {
    NSNumber * _aggregateEnterpriseCellular;
    NSNumber * _aggregateEnterpriseWiFi;
    NSNumber * _aggregatePersonalCellular;
    NSNumber * _aggregatePersonalWiFi;
    bool  _denyCellularFallback;
    long long  _internalCellularBehavior;
    long long  _internalWiFiBehavior;
}

@property (retain) NSNumber *aggregateEnterpriseCellular;
@property (retain) NSNumber *aggregateEnterpriseWiFi;
@property (retain) NSNumber *aggregatePersonalCellular;
@property (retain) NSNumber *aggregatePersonalWiFi;
@property long long cellularBehavior;
@property (getter=isDefaultPathRule, readonly) bool defaultPathRule;
@property bool denyCellularFallback;
@property long long internalCellularBehavior;
@property long long internalWiFiBehavior;
@property long long wifiBehavior;

+ (long long)aggregateNetworkBehavior:(long long)arg1 other:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCellularBehavior:(long long)arg1 grade:(long long)arg2;
- (void)addWiFiBehavior:(long long)arg1 grade:(long long)arg2;
- (id)aggregateEnterpriseCellular;
- (id)aggregateEnterpriseWiFi;
- (id)aggregatePersonalCellular;
- (id)aggregatePersonalWiFi;
- (long long)cellularBehavior;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)denyCellularFallback;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initDefaultPathRule;
- (id)initWithCoder:(id)arg1;
- (long long)internalCellularBehavior;
- (long long)internalWiFiBehavior;
- (bool)isAggregateRule;
- (bool)isDefaultPathRule;
- (bool)isEqual:(id)arg1;
- (void)setAggregateEnterpriseCellular:(id)arg1;
- (void)setAggregateEnterpriseWiFi:(id)arg1;
- (void)setAggregatePersonalCellular:(id)arg1;
- (void)setAggregatePersonalWiFi:(id)arg1;
- (void)setCellularBehavior:(long long)arg1;
- (void)setDenyCellularFallback:(bool)arg1;
- (void)setInternalCellularBehavior:(long long)arg1;
- (void)setInternalWiFiBehavior:(long long)arg1;
- (void)setWifiBehavior:(long long)arg1;
- (bool)signingIdentifierAllowed:(id)arg1 domainsRequired:(out bool*)arg2;
- (bool)supportsCellularBehavior:(long long)arg1;
- (bool)supportsWiFiBehavior:(long long)arg1;
- (long long)wifiBehavior;

@end
