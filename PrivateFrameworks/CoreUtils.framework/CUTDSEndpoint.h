/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUTDSEndpoint : NSObject {
    int  _dataLinkType;
    NSData * _deviceAddress;
    NSString * _serviceType;
}

@property (nonatomic) int dataLinkType;
@property (nonatomic, copy) NSData *deviceAddress;
@property (nonatomic, copy) NSString *serviceType;

- (void).cxx_destruct;
- (int)dataLinkType;
- (id)description;
- (id)deviceAddress;
- (id)serviceType;
- (void)setDataLinkType:(int)arg1;
- (void)setDeviceAddress:(id)arg1;
- (void)setServiceType:(id)arg1;

@end
