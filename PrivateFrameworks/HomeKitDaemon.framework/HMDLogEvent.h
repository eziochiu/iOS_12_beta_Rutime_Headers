/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDLogEvent : HMFObject {
    unsigned long long  _endTime;
    NSError * _eventError;
    NSUUID * _eventType;
    unsigned long long  _startTime;
    bool  _submitted;
}

@property (readonly) double durationInMilliseconds;
@property (nonatomic) unsigned long long endTime;
@property (nonatomic, retain) NSError *eventError;
@property (nonatomic, readonly) NSUUID *eventType;
@property (nonatomic) unsigned long long startTime;
@property (getter=isSubmitted, nonatomic) bool submitted;

+ (id)stringForSource:(unsigned long long)arg1;

- (void).cxx_destruct;
- (double)durationInMilliseconds;
- (unsigned long long)endTime;
- (id)eventError;
- (id)eventType;
- (id)init;
- (id)initWithEventType:(id)arg1;
- (bool)isSubmitted;
- (void)setEndTime:(unsigned long long)arg1;
- (void)setEventError:(id)arg1;
- (void)setStartTime:(unsigned long long)arg1;
- (void)setSubmitted:(bool)arg1;
- (unsigned long long)startTime;
- (void)submitAtTime:(unsigned long long)arg1 error:(id)arg2;

@end
