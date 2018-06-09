/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUOperationProgress : NSObject <NSCopying, NSSecureCoding> {
    bool  _isDone;
    float  _normalizedPercentComplete;
    float  _percentComplete;
    NSString * _phase;
    double  _timeRemaining;
}

@property (nonatomic) bool isDone;
@property (nonatomic) float normalizedPercentComplete;
@property (nonatomic) float percentComplete;
@property (nonatomic, retain) NSString *phase;
@property (nonatomic) double timeRemaining;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDone;
- (float)normalizedPercentComplete;
- (float)percentComplete;
- (id)phase;
- (void)setIsDone:(bool)arg1;
- (void)setNormalizedPercentComplete:(float)arg1;
- (void)setPercentComplete:(float)arg1;
- (void)setPhase:(id)arg1;
- (void)setTimeRemaining:(double)arg1;
- (double)timeRemaining;

@end
