/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPreciseClockTimer : NSObject {
    NSCalendar * _calendar;
    CADisplayLink * _displayLink;
    long long  _lastHour;
    long long  _lastMinute;
    NSMutableDictionary * _minuteUpdateHandlers;
    unsigned long long  _nextToken;
}

+ (id)now;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleTimePassed;
- (void)_onDisplayLink:(id)arg1;
- (void)_updateDisplayLink;
- (void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1;
- (void)dealloc;
- (id)init;
- (struct NSNumber { Class x1; }*)startMinuteUpdatesWithHandler:(id /* block */)arg1;
- (void)stopMinuteUpdatesForToken:(struct NSNumber { Class x1; }*)arg1;

@end
