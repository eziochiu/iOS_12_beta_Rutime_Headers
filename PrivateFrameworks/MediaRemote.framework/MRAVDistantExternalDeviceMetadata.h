/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVDistantExternalDeviceMetadata : NSObject <NSMutableCopying, NSSecureCoding> {
    _MRDeviceInfoMessageProtobuf * _deviceInfo;
    NSString * _hostName;
    long long  _hostPort;
    NSString * _name;
    bool  _paired;
    MRSupportedProtocolMessages * _supportedMessages;
    bool  _usingSystemPairing;
}

@property (nonatomic, readonly) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (nonatomic, readonly) NSString *hostName;
@property (nonatomic, readonly) long long hostPort;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool paired;
@property (nonatomic, readonly) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic, readonly) bool usingSystemPairing;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 usingConcreteClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)hostName;
- (long long)hostPort;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (bool)paired;
- (id)supportedMessages;
- (bool)usingSystemPairing;

@end
