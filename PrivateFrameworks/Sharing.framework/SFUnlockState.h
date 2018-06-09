/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFUnlockState : NSObject <NSSecureCoding> {
    NSNumber * _remotePasscodeEnabled;
    NSNumber * _unlockEnabled;
}

@property (readonly) NSNumber *remotePasscodeEnabled;
@property (readonly) NSNumber *unlockEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnlockEnabled:(id)arg1 remotePasscodeEnabled:(id)arg2;
- (id)remotePasscodeEnabled;
- (id)unlockEnabled;

@end
