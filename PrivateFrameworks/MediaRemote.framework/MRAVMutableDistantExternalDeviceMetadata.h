/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVMutableDistantExternalDeviceMetadata : MRAVDistantExternalDeviceMetadata

@property (nonatomic, retain) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, copy) NSString *hostName;
@property (nonatomic) long long hostPort;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool paired;
@property (nonatomic, retain) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic) bool usingSystemPairing;

- (void)setDeviceInfo:(id)arg1;
- (void)setHostName:(id)arg1;
- (void)setHostPort:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setPaired:(bool)arg1;
- (void)setSupportedMessages:(id)arg1;
- (void)setUsingSystemPairing:(bool)arg1;

@end
