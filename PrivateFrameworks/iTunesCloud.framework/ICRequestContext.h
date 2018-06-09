/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRequestContext : NSObject <NSCopying> {
    unsigned int  _allowsMutation;
    ICURLResponseAuthenticationProvider * _authenticationProvider;
    ICClientInfo * _clientInfo;
    ICDeviceInfo * _deviceInfo;
    ICNetworkConstraints * _networkConstraints;
}

@property (nonatomic, readonly, copy) ICURLResponseAuthenticationProvider *authenticationProvider;
@property (nonatomic, readonly, copy) ICClientInfo *clientInfo;
@property (nonatomic, readonly) ICDeviceInfo *deviceInfo;
@property (nonatomic, readonly, copy) ICNetworkConstraints *networkConstraints;
@property (nonatomic, readonly, copy) NSString *userAgent;

- (void).cxx_destruct;
- (bool)_allowsMutation;
- (id)authenticationProvider;
- (id)clientInfo;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceInfo;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithClientInfo:(id)arg1;
- (id)initWithClientInfo:(id)arg1 authenticationProvider:(id)arg2;
- (id)networkConstraints;
- (void)setAuthenticationProvider:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setNetworkConstraints:(id)arg1;
- (id)userAgent;

@end
