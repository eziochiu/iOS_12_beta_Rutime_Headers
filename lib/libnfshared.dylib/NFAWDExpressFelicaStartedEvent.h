/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDExpressFelicaStartedEvent : NSObject <NFAWDEventProtocol> {
    AWDNFCExpressFelicaStartedEvent * _metric;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCExpressFelicaStartedEvent *metric;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end
