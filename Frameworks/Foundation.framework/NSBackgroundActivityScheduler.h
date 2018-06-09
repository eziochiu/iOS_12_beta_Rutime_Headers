/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBackgroundActivityScheduler : NSObject {
    long long  _flags;
    id  _private1;
    id  _private2;
    id  _private3;
}

@property (getter=_isAppRefresh) bool _appRefresh;
@property id /* block */ checkInHandler;
@property double delay;
@property (readonly, copy) NSString *identifier;
@property double interval;
@property (getter=isPreregistered) bool preregistered;
@property long long qualityOfService;
@property bool repeats;
@property (readonly) bool shouldDefer;
@property double tolerance;

- (bool)_isAppRefresh;
- (void)_setAdditionalXPCActivityProperties:(id)arg1;
- (void)_updateCriteria:(id)arg1;
- (void)_updateCriteriaForCompletedActivity:(id)arg1;
- (id /* block */)checkInHandler;
- (void)dealloc;
- (double)delay;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (double)interval;
- (void)invalidate;
- (bool)isPreregistered;
- (long long)qualityOfService;
- (bool)repeats;
- (void)scheduleWithBlock:(id /* block */)arg1;
- (void)setCheckInHandler:(id /* block */)arg1;
- (void)setDelay:(double)arg1;
- (void)setInterval:(double)arg1;
- (void)setPreregistered:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRepeats:(bool)arg1;
- (void)setTolerance:(double)arg1;
- (void)set_appRefresh:(bool)arg1;
- (bool)shouldDefer;
- (double)tolerance;

@end
