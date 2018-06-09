/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface _RMSBonjourService : NSObject {
    bool  _available;
    NSNetService * _netService;
    RMSService * _service;
    long long  _state;
}

@property (getter=isAvailable, nonatomic) bool available;
@property (nonatomic, retain) NSNetService *netService;
@property (nonatomic, retain) RMSService *service;
@property (nonatomic) long long state;

- (void).cxx_destruct;
- (bool)isAvailable;
- (id)netService;
- (id)service;
- (void)setAvailable:(bool)arg1;
- (void)setNetService:(id)arg1;
- (void)setService:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
