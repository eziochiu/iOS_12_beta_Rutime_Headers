/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDHCEEndEvent : NSObject <NFAWDEventProtocol> {
    AWDNFCHCEEndEvent * _metric;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCHCEEndEvent *metric;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end
