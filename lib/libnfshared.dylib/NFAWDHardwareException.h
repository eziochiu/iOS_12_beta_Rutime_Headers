/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDHardwareException : NSObject <NFAWDEventProtocol> {
    unsigned int  _hardwareType;
    AWDNFCHardwareExceptionEvent * _metric;
    unsigned int  _type;
}

@property (nonatomic, retain) NSString *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int hardwareType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCHardwareExceptionEvent *metric;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int type;

- (id)data;
- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (unsigned int)hardwareType;
- (id)init;
- (id)metric;
- (void)setData:(id)arg1;
- (void)setHardwareType:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)updateExceptionUUID:(id)arg1;

@end
