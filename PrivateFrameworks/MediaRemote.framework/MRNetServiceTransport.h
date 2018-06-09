/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRNetServiceTransport : MRExternalDeviceTransport {
    _MRDeviceInfoMessageProtobuf * _deviceInfo;
    NSNetService * _netService;
    bool  _requiresCustomPairing;
}

@property (nonatomic, retain) NSNetService *netService;
@property (nonatomic) bool requiresCustomPairing;

+ (id)createDeviceInfoFromNetService:(id)arg1;
+ (id)createDeviceInfoFromTXTRecord:(id)arg1;

- (void).cxx_destruct;
- (long long)connectionType;
- (id)description;
- (id)deviceInfo;
- (id)error;
- (bool)getInputStream:(id*)arg1 outputStream:(id*)arg2;
- (id)hostname;
- (id)initWithNetService:(id)arg1;
- (id)name;
- (id)netService;
- (long long)port;
- (bool)requiresCustomPairing;
- (void)reset;
- (void)setNetService:(id)arg1;
- (void)setRequiresCustomPairing:(bool)arg1;
- (void)setShouldUseSystemAuthenticationPrompt:(bool)arg1;
- (bool)shouldUseSystemAuthenticationPrompt;
- (void)updateDeviceInfoWithTXTRecord:(id)arg1;

@end
