/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _DUITouchRoutingPolicy : NSObject <NSSecureCoding> {
    bool  _avoidHitTesting;
    NSArray * _contextIDsToAlwaysSendTouches;
    NSArray * _contextIDsToExcludeFromHitTesting;
}

@property (nonatomic) bool avoidHitTesting;
@property (nonatomic, copy) NSArray *contextIDsToAlwaysSendTouches;
@property (nonatomic, copy) NSArray *contextIDsToExcludeFromHitTesting;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)avoidHitTesting;
- (id)contextIDsToAlwaysSendTouches;
- (id)contextIDsToExcludeFromHitTesting;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAvoidHitTesting:(bool)arg1;
- (void)setContextIDsToAlwaysSendTouches:(id)arg1;
- (void)setContextIDsToExcludeFromHitTesting:(id)arg1;

@end
