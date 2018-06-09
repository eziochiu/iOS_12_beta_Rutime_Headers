/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPUserRoutingPreferences : NSObject <NSSecureCoding> {
    bool  _avoidHighways;
    bool  _avoidTolls;
    long long  _defaultDisabledTransitModes;
    NSDate * _timestamp;
}

@property (nonatomic, readonly) bool avoidHighways;
@property (nonatomic, readonly) bool avoidTolls;
@property (nonatomic, readonly) long long defaultDisabledTransitModes;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)avoidHighways;
- (bool)avoidTolls;
- (id)copy;
- (id)createUserPreferences;
- (long long)defaultDisabledTransitModes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAvoidTolls:(bool)arg1 avoidHighways:(bool)arg2 defaultDisabledTransitModes:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)timestamp;

@end
