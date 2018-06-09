/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDExpressTransactionStartedEvent : NSObject <NFAWDEventProtocol> {
    AWDNFCExpressTransactionStartedEvent * _metric;
    unsigned int  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCExpressTransactionStartedEvent *metric;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int type;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (unsigned long long)updateExpressTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end
