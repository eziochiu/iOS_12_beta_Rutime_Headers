/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDStartOfTransactionException : NSObject <NFAWDEventProtocol> {
    AWDNFCHCIStartOfTransactionExceptionEvent * _metric;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCHCIStartOfTransactionExceptionEvent *metric;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)updateExceptionUUID:(id)arg1;

@end
