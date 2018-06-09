/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADeviceListResponse : AAResponse {
    NSArray * _devices;
}

@property (nonatomic, readonly) NSArray *devices;

- (void).cxx_destruct;
- (id)devices;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
