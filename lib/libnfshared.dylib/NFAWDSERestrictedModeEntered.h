/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDSERestrictedModeEntered : NSObject <NFAWDEventProtocol> {
    unsigned int  _hardwareType;
    AWDNFCSERestrictedModeEnteredEvent * _metric;
}

@property (nonatomic, retain) NSData *attackLog;
@property (nonatomic) bool contactlessMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int hardwareType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCSERestrictedModeEnteredEvent *metric;
@property (nonatomic, retain) NSString *platformIdentifier;
@property (nonatomic, retain) NSData *restrictedModeID;
@property (readonly) Class superclass;

- (id)attackLog;
- (bool)contactlessMode;
- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (unsigned int)hardwareType;
- (id)init;
- (id)metric;
- (id)platformIdentifier;
- (id)restrictedModeID;
- (void)setAttackLog:(id)arg1;
- (void)setContactlessMode:(bool)arg1;
- (void)setHardwareType:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setPlatformIdentifier:(id)arg1;
- (void)setRestrictedModeID:(id)arg1;

@end
