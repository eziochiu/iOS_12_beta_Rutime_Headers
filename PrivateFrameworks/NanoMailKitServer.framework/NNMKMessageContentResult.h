/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKMessageContentResult : NSObject {
    bool  _alreadySyncedWithCurrentPriority;
    long long  _compressedTextDataLength;
    bool  _isContentCompletelySynced;
    bool  _isNotificationPriority;
    bool  _isUserRequest;
    bool  _messageDoesNotExist;
    NNMKProtoMessageContentSync * _protoMessageContentSync;
    unsigned long long  _resendInterval;
}

@property (nonatomic) bool alreadySyncedWithCurrentPriority;
@property (nonatomic) long long compressedTextDataLength;
@property (nonatomic) bool isContentCompletelySynced;
@property (nonatomic) bool isNotificationPriority;
@property (nonatomic) bool isUserRequest;
@property (nonatomic) bool messageDoesNotExist;
@property (nonatomic, retain) NNMKProtoMessageContentSync *protoMessageContentSync;
@property (nonatomic) unsigned long long resendInterval;

- (void).cxx_destruct;
- (bool)alreadySyncedWithCurrentPriority;
- (long long)compressedTextDataLength;
- (bool)isContentCompletelySynced;
- (bool)isNotificationPriority;
- (bool)isUserRequest;
- (bool)messageDoesNotExist;
- (id)protoMessageContentSync;
- (unsigned long long)resendInterval;
- (void)setAlreadySyncedWithCurrentPriority:(bool)arg1;
- (void)setCompressedTextDataLength:(long long)arg1;
- (void)setIsContentCompletelySynced:(bool)arg1;
- (void)setIsNotificationPriority:(bool)arg1;
- (void)setIsUserRequest:(bool)arg1;
- (void)setMessageDoesNotExist:(bool)arg1;
- (void)setProtoMessageContentSync:(id)arg1;
- (void)setResendInterval:(unsigned long long)arg1;

@end
