/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDJCOPRestrictedMode : NSObject <NFAWDEventProtocol> {
    AWDNFCJCOPRestrictedModeEvent * _metric;
}

@property (nonatomic) bool contactlessMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCJCOPRestrictedModeEvent *metric;
@property (readonly) Class superclass;

- (bool)contactlessMode;
- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setContactlessMode:(bool)arg1;
- (void)setMetric:(id)arg1;
- (void)updateExceptionUUID:(id)arg1;

@end
