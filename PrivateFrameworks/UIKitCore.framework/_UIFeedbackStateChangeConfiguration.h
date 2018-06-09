/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFeedbackStateChangeConfiguration : NSObject <NSCopying> {
    double  _approachCurvature;
    double  _approachEnd;
    _UIFeedback<_UIFeedbackContinuousPlayable> * _approachFeedback;
    double  _approachStart;
    double  _approachVolumeMax;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _thresholdFeedback;
}

@property (nonatomic) double approachCurvature;
@property (nonatomic) double approachEnd;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackContinuousPlayable> *approachFeedback;
@property (nonatomic) double approachStart;
@property (nonatomic) double approachVolumeMax;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *thresholdFeedback;

- (void).cxx_destruct;
- (double)approachCurvature;
- (double)approachEnd;
- (id)approachFeedback;
- (double)approachStart;
- (double)approachVolumeMax;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setApproachCurvature:(double)arg1;
- (void)setApproachEnd:(double)arg1;
- (void)setApproachFeedback:(id)arg1;
- (void)setApproachStart:(double)arg1;
- (void)setApproachVolumeMax:(double)arg1;
- (void)setThresholdFeedback:(id)arg1;
- (id)thresholdFeedback;

@end
