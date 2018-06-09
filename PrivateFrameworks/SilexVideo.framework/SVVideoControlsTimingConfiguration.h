/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoControlsTimingConfiguration : NSObject <SVVideoControlsTimingConfiguration> {
    double  _moreFromVisibilityTimeInterval;
    double  _nowPlayingVisibilityTimeInterval;
    double  _upNextAppearanceTimeInterval;
}

@property (nonatomic, readonly) double moreFromVisibilityTimeInterval;
@property (nonatomic, readonly) double nowPlayingVisibilityTimeInterval;
@property (nonatomic, readonly) double upNextAppearanceTimeInterval;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithUpNextAppearanceTimeInterval:(double)arg1 nowPlayingVisibilityTimeInterval:(double)arg2 moreFromVisibilityTimeInterval:(double)arg3;
- (double)moreFromVisibilityTimeInterval;
- (double)nowPlayingVisibilityTimeInterval;
- (double)upNextAppearanceTimeInterval;

@end
