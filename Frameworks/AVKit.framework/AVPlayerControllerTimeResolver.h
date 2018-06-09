/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding> {
    double  _currentTime;
    double  _interval;
    double  _maxTime;
    double  _minTime;
    <AVTimeControlling> * _playerController;
    double  _resolution;
    AVTimer * _timer;
}

@property double currentTime;
@property (getter=isCurrentTimeAtEndOfSeekableTimeRanges, readonly) bool currentTimeAtEndOfSeekableTimeRanges;
@property double currentTimeWithinEndTimes;
@property double interval;
@property double maxTime;
@property double minTime;
@property (retain) <AVTimeControlling> *playerController;
@property (readonly) double remainingTargetTimeWithinEndTimes;
@property (readonly) double remainingTime;
@property (readonly) double remainingTimeWithinEndTimes;
@property double resolution;
@property (readonly) double seekableTimeRangeDuration;
@property double targetTime;
@property double targetTimeWithinEndTimes;
@property (getter=isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges, readonly) bool thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;

+ (bool)automaticallyNotifiesObserversOfCurrentTime;
+ (id)keyPathForValuesAffectingSeekableTimeRangeDuration;
+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTargetTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTime;
+ (id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingTargetTime;
+ (id)keyPathsForValuesAffectingTargetTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;

- (void).cxx_destruct;
- (double)currentTime;
- (double)currentTimeWithinEndTimes;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)interval;
- (bool)isCurrentTimeAtEndOfSeekableTimeRanges;
- (bool)isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
- (double)maxTime;
- (double)minTime;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playerController;
- (double)remainingTargetTimeWithinEndTimes;
- (double)remainingTime;
- (double)remainingTimeWithinEndTimes;
- (double)resolution;
- (double)seekableTimeRangeDuration;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTimeWithinEndTimes:(double)arg1;
- (void)setInterval:(double)arg1;
- (void)setMaxTime:(double)arg1;
- (void)setMinTime:(double)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setResolution:(double)arg1;
- (void)setTargetTime:(double)arg1;
- (void)setTargetTimeWithinEndTimes:(double)arg1;
- (double)targetTime;
- (double)targetTimeWithinEndTimes;

@end
