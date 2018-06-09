/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADeviceProvisioningSession : NSObject {
    struct OpaqueCFHTTPCookieStorage { } * _cookieStorageRef;
    NSString * _dsid;
    unsigned long long  _dsidNumber;
}

- (void).cxx_destruct;
- (void)addProvisioningInfoToAARequest:(id)arg1;
- (void)addProvisioningInfoToAARequest:(id)arg1 withFallback:(bool)arg2;
- (void)addProvisioningInfoToURLRequest:(id)arg1 sendEmptyValues:(bool)arg2;
- (id)deviceProvisioningInfo;
- (int)eraseProvisioning;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (id)initWithDSID:(id)arg1;
- (int)provisionDeviceWithData:(id)arg1;
- (void)setCookieStorageRef:(struct OpaqueCFHTTPCookieStorage { }*)arg1;
- (int)synchronizeProvisioningWithData:(id)arg1;

@end
