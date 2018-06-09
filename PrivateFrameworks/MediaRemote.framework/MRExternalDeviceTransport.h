/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalDeviceTransport : NSObject {
    long long  _connectionType;
    bool  _requiresCustomPairing;
    NSString * _uid;
}

@property (nonatomic, readonly) long long connectionType;
@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *hostname;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly) bool requiresCustomPairing;
@property (nonatomic) bool shouldUseSystemAuthenticationPrompt;
@property (nonatomic, readonly) NSString *uid;

- (void).cxx_destruct;
- (long long)connectionType;
- (id)deviceInfo;
- (id)error;
- (bool)getInputStream:(id*)arg1 outputStream:(id*)arg2;
- (id)hostname;
- (id)name;
- (long long)port;
- (bool)requiresCustomPairing;
- (void)reset;
- (void)setShouldUseSystemAuthenticationPrompt:(bool)arg1;
- (bool)shouldUseSystemAuthenticationPrompt;
- (id)uid;

@end
