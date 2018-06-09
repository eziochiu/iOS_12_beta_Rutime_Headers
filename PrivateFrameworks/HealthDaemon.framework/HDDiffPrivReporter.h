/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDiffPrivReporter : NSObject {
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    _DPStringRecorder * _recorder;
}

+ (bool)isAvailable;
+ (id)reportableTypes;

- (void).cxx_destruct;
- (bool)_recordTypesUsedInPastMonth:(id)arg1;
- (id)_typesInMonthWithDataForTypes:(id)arg1 now:(id)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1;
- (bool)reportWithCurrentDate:(id)arg1 error:(id*)arg2;

@end
