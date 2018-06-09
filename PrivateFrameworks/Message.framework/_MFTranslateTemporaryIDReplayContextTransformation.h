/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFTranslateTemporaryIDReplayContextTransformation : MFOfflineCacheReplayContextTransformation {
    NSString * _temporaryID;
    NSString * _translatedID;
}

+ (bool)supportsSecureCoding;

- (void)applyToReplayContext:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemporaryID:(id)arg1 translatedID:(id)arg2;

@end
