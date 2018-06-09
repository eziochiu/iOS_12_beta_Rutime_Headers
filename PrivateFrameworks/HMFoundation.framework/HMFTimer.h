/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFTimer : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMFTimerDelegate> * _delegate;
    NSDate * _fireDate;
    unsigned long long  _leeway;
    unsigned long long  _options;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _running;
    double  _timeInterval;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property <HMFTimerDelegate> *delegate;
@property (readonly, copy) NSDate *fireDate;
@property (nonatomic, readonly) unsigned long long leeway;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (getter=isRunning, nonatomic) bool running;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_fire;
- (void)_handleExpiration;
- (void)_kick;
- (void)_resume;
- (void)_suspend;
- (id)clientQueue;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)fire;
- (id)fireDate;
- (id)init;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (bool)isRunning;
- (void)kick;
- (unsigned long long)leeway;
- (unsigned long long)options;
- (id)propertyQueue;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setRunning:(bool)arg1;
- (id)shortDescription;
- (void)suspend;
- (double)timeInterval;
- (id)timer;

@end
