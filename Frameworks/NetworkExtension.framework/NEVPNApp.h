/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEVPNApp : NEVPN {
    NSArray * _appRules;
    bool  _noRestriction;
    long long  _tunnelType;
}

@property (copy) NSArray *appRules;
@property bool noRestriction;
@property long long tunnelType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appRules;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyAppRuleByID:(id)arg1;
- (id)copyAppRuleBySigningIdentifier:(id)arg1;
- (id)copyAppRuleIDs;
- (id)copyLegacyDictionary;
- (id)copyUniqueSigningIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)installSigningIdentifiersWithFlowDivertControlSocket:(int)arg1;
- (bool)noRestriction;
- (bool)removeAppRuleByID:(id)arg1;
- (void)setAppRules:(id)arg1;
- (void)setNoRestriction:(bool)arg1;
- (void)setTunnelType:(long long)arg1;
- (long long)tunnelType;

@end
