/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWNetworkDescription : NSObject {
    NSSet * _dnsSearchDomainOptions;
    NSSet * _dnsServerAddressOptions;
    NSSet * _interfaceTypeOptions;
    NSURL * _probeURL;
    long long  _roamingPreference;
    NSSet * _ssidOptions;
    long long  _state;
}

@property (copy) NSSet *dnsSearchDomainOptions;
@property (copy) NSSet *dnsServerAddressOptions;
@property (copy) NSSet *interfaceTypeOptions;
@property (nonatomic, readonly) NSString *privateDescription;
@property (copy) NSURL *probeURL;
@property long long roamingPreference;
@property (copy) NSSet *ssidOptions;
@property long long state;

+ (long long)getNewStateFromPathMatch:(bool)arg1 oldState:(long long)arg2 probeExists:(bool)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (id)dnsSearchDomainOptions;
- (id)dnsServerAddressOptions;
- (unsigned long long)hash;
- (id)interfaceTypeOptions;
- (bool)isEqual:(id)arg1;
- (bool)matchesPath:(id)arg1;
- (id)privateDescription;
- (id)probeURL;
- (long long)roamingPreference;
- (void)setDnsSearchDomainOptions:(id)arg1;
- (void)setDnsServerAddressOptions:(id)arg1;
- (void)setInterfaceTypeOptions:(id)arg1;
- (void)setProbeURL:(id)arg1;
- (void)setRoamingPreference:(long long)arg1;
- (void)setSsidOptions:(id)arg1;
- (void)setState:(long long)arg1;
- (id)ssidOptions;
- (long long)state;
- (void)updateStateWithPath:(id)arg1;

@end
