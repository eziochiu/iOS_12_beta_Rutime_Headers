/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDHCEStateChangeEvent : NSObject <NFAWDEventProtocol> {
    AWDNFCHCEStateChangeEvent * _metric;
    unsigned int  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCHCEStateChangeEvent *metric;
@property (nonatomic) unsigned int state;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end
