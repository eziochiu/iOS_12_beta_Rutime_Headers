/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNGuidanceSignInfo : NSObject <NSSecureCoding> {
    double  _primaryDistance_SIRI_USE_ONLY;
    MNGuidanceSignDescription * _primarySign;
    double  _secondaryDistance_SIRI_USE_ONLY;
    MNGuidanceSignDescription * _secondarySign;
    double  _timeUntilPrimarySign_SIRI_USE_ONLY;
    double  _timeUntilSecondarySign_SIRI_USE_ONLY;
}

@property (nonatomic, readonly) double primaryDistance_SIRI_USE_ONLY;
@property (nonatomic, readonly) MNGuidanceSignDescription *primarySign;
@property (nonatomic, readonly) double secondaryDistance_SIRI_USE_ONLY;
@property (nonatomic, readonly) MNGuidanceSignDescription *secondarySign;
@property (nonatomic, readonly) double timeUntilPrimarySign_SIRI_USE_ONLY;
@property (nonatomic, readonly) double timeUntilSecondarySign_SIRI_USE_ONLY;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrimarySign:(id)arg1 secondarySign:(id)arg2 primaryDistance:(double)arg3 secondaryDistance:(double)arg4 timeUntilPrimarySign:(double)arg5 timeUntilSecondarySign:(double)arg6;
- (double)primaryDistance_SIRI_USE_ONLY;
- (id)primarySign;
- (double)secondaryDistance_SIRI_USE_ONLY;
- (id)secondarySign;
- (double)timeUntilPrimarySign_SIRI_USE_ONLY;
- (double)timeUntilSecondarySign_SIRI_USE_ONLY;

@end
