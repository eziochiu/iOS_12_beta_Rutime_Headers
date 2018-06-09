/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIRemoteAlertIdleTimerSettings : NSObject <NSSecureCoding> {
    double  _autoLockTimeout;
    bool  _disablesAttentionAwareness;
    bool  _disablesWarn;
}

@property (nonatomic) double autoLockTimeout;
@property (nonatomic) bool disablesAttentionAwareness;
@property (nonatomic) bool disablesWarn;

+ (bool)supportsSecureCoding;

- (double)autoLockTimeout;
- (bool)disablesAttentionAwareness;
- (bool)disablesWarn;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAutoLockTimeout:(double)arg1;
- (void)setDisablesAttentionAwareness:(bool)arg1;
- (void)setDisablesWarn:(bool)arg1;

@end
