/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISVitalityAutoplayFilter : ISVitalityFilter {
    long long  __state;
}

@property (setter=_setState:, nonatomic) long long _state;

- (void)_setState:(long long)arg1;
- (void)_startAutoplay;
- (long long)_state;
- (void)inputDidChange;

@end
