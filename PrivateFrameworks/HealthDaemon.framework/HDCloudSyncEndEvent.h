/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncEndEvent : HDCloudSyncEvent <HDAnalyticSubmissionEvent> {
    NSNumber * _countSinceLastSuccess;
    double  _duration;
    NSError * _error;
    long long  _result;
    NSNumber * _timeIntervalSinceLastSuccess;
    NSError * _underlyingError;
}

@property (nonatomic, readonly, copy) NSNumber *countSinceLastSuccess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long result;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *timeIntervalSinceLastSuccess;
@property (nonatomic, readonly, copy) NSError *underlyingError;

+ (id)_endEventWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 startTime:(id)arg10 result:(long long)arg11 cloudKitManateeEnabled:(bool)arg12 internalSettingManateeEnabled:(bool)arg13 error:(id)arg14;
+ (bool)_errorAndUnderlyingErrorForError:(id)arg1 errorOut:(out id*)arg2 underlyingErrorOut:(out id*)arg3;
+ (id)endEventForOperation:(long long)arg1 operationIdentifier:(id)arg2 configuration:(id)arg3 container:(id)arg4 cloudKitIdentifier:(id)arg5 startTime:(id)arg6 result:(long long)arg7 error:(id)arg8;
+ (id)endEventForStartEvent:(id)arg1 result:(long long)arg2 error:(id)arg3;

- (void).cxx_destruct;
- (unsigned int)AWDMetricID;
- (id)codableRepresentationForAWDSubmission;
- (id)countSinceLastSuccess;
- (id)description;
- (double)duration;
- (id)error;
- (id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 duration:(double)arg10 result:(long long)arg11 error:(id)arg12 underlyingError:(id)arg13 countSinceLastSuccess:(id)arg14 timeIntervalSinceLastSuccess:(id)arg15 cloudKitManateeEnabled:(bool)arg16 internalSettingManateeEnabled:(bool)arg17;
- (long long)result;
- (id)timeIntervalSinceLastSuccess;
- (id)underlyingError;

@end
