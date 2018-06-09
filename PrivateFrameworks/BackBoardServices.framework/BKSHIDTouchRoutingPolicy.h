/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDTouchRoutingPolicy : NSObject <NSSecureCoding> {
    bool  _avoidHitTesting;
    NSArray * _contextIDsToAlwaysSendTouches;
    NSArray * _contextIDsToExcludeFromHitTesting;
}

@property (getter=shouldAvoidHitTesting, nonatomic) bool avoidHitTesting;
@property (nonatomic, copy) NSArray *contextIDsToAlwaysSendTouches;
@property (nonatomic, copy) NSArray *contextIDsToExcludeFromHitTesting;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contextIDsToAlwaysSendTouches;
- (id)contextIDsToExcludeFromHitTesting;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setAvoidHitTesting:(bool)arg1;
- (void)setContextIDsToAlwaysSendTouches:(id)arg1;
- (void)setContextIDsToExcludeFromHitTesting:(id)arg1;
- (bool)shouldAvoidHitTesting;

@end
