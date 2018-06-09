/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDPeerPaymentRequest : NSObject <NFAWDEventProtocol> {
    AWDNFCPeerPaymentRequest * _metric;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCPeerPaymentRequest *metric;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setDuration:(unsigned long long)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setErrorStep:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setType:(unsigned int)arg1;

@end
