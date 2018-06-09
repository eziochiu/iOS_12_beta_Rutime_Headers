/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSBackgroundActivityInternal : NSObject {
    id /* block */  _activity;
    NSObject<OS_xpc_object> * _additionalProperties;
    bool  _appRefresh;
    id /* block */  _checkInHandler;
    NSObject<OS_xpc_object> * _currentActivity;
    double  _delay;
    NSString * _identifier;
    double  _interval;
    bool  _preregistered;
    long long  _qualityOfService;
    bool  _repeats;
    double  _tolerance;
}

@property (copy) id /* block */ activity;
@property (getter=isAppRefresh) bool appRefresh;
@property (copy) id /* block */ checkInHandler;
@property double delay;
@property (copy) NSString *identifier;
@property double interval;
@property bool preregistered;
@property long long qualityOfService;
@property bool repeats;
@property double tolerance;

- (id /* block */)activity;
- (id)additionalProperties;
- (id /* block */)checkInHandler;
- (id)currentActivity;
- (void)dealloc;
- (double)delay;
- (id)identifier;
- (id)init;
- (double)interval;
- (bool)isAppRefresh;
- (bool)preregistered;
- (long long)qualityOfService;
- (bool)repeats;
- (void)setActivity:(id /* block */)arg1;
- (void)setAdditionalProperties:(id)arg1;
- (void)setAppRefresh:(bool)arg1;
- (void)setCheckInHandler:(id /* block */)arg1;
- (void)setCurrentActivity:(id)arg1;
- (void)setDelay:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterval:(double)arg1;
- (void)setPreregistered:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setRepeats:(bool)arg1;
- (void)setTolerance:(double)arg1;
- (double)tolerance;

@end
