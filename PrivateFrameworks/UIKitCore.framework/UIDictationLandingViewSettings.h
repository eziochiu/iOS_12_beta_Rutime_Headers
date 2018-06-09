/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDictationLandingViewSettings : NSObject {
    double  _circleRPM;
    double  _colorTransitionInDuration;
    double  _colorTransitionOutDuration;
    double  _fadeInDuration;
    double  _fadeOutDuration;
    double  _shrinkDuration;
    bool  _useBlackWave;
}

@property (nonatomic) double circleRPM;
@property (nonatomic) double colorTransitionInDuration;
@property (nonatomic) double colorTransitionOutDuration;
@property (nonatomic) double fadeInDuration;
@property (nonatomic) double fadeOutDuration;
@property (nonatomic) double shrinkDuration;
@property (nonatomic) bool useBlackWave;

+ (id)sharedInstance;

- (double)circleRPM;
- (double)colorTransitionInDuration;
- (double)colorTransitionOutDuration;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (id)init;
- (void)setCircleRPM:(double)arg1;
- (void)setColorTransitionInDuration:(double)arg1;
- (void)setColorTransitionOutDuration:(double)arg1;
- (void)setFadeInDuration:(double)arg1;
- (void)setFadeOutDuration:(double)arg1;
- (void)setShrinkDuration:(double)arg1;
- (void)setUseBlackWave:(bool)arg1;
- (double)shrinkDuration;
- (bool)useBlackWave;

@end
