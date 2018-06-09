/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDCRSAuthorize : NSObject <NFAWDEventProtocol> {
    unsigned int  _method;
    AWDNFCSECRSAuthorize * _metric;
    unsigned int  _status;
}

@property (nonatomic, retain) NSData *aid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int method;
@property (nonatomic, retain) AWDNFCSECRSAuthorize *metric;
@property (nonatomic) unsigned int status;
@property (readonly) Class superclass;

- (id)aid;
- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (unsigned int)method;
- (id)metric;
- (void)setAid:(id)arg1;
- (void)setMethod:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end
