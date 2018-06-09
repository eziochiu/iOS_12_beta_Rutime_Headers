/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDMiddlewareException : NSObject <NFAWDEventProtocol> {
    unsigned int  _errorCode;
    unsigned int  _hardwareType;
    AWDNFCMiddlewareExceptionEvent * _metric;
    unsigned int  _type;
    unsigned int  _version;
}

@property (nonatomic, retain) NSData *breadcrumb;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) unsigned int hardwareType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCMiddlewareExceptionEvent *metric;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int version;

- (id)breadcrumb;
- (void)dealloc;
- (unsigned int)errorCode;
- (id)getMetric;
- (unsigned int)getMetricId;
- (unsigned int)hardwareType;
- (id)init;
- (id)metric;
- (void)setBreadcrumb:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHardwareType:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)type;
- (void)updateExceptionUUID:(id)arg1;
- (unsigned int)version;

@end