/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFLogger : NSObject {
    NSObject<PFLoggerBackend> * _backend;
    NSObject<OS_dispatch_queue> * _backendAccessSerializationQueue;
    bool  _backendAllowsConcurrentAccess;
    NSArray * _debuggedSubsystems;
    NSString * _facilityPrefix;
    int  _logLevel;
    NSDictionary * _options;
    NSSet * _recordedSubsystems;
    NSObject<OS_dispatch_queue> * _recordedSubsystemsQueue;
    bool  _shouldLogToCrashReporter;
    NSArray * _tracedSubsystems;
}

@property (retain) NSObject<PFLoggerBackend> *backend;
@property (retain) NSObject<OS_dispatch_queue> *backendAccessSerializationQueue;
@property bool backendAllowsConcurrentAccess;
@property (retain) NSArray *debuggedSubsystems;
@property (retain) NSString *facilityPrefix;
@property int logLevel;
@property (retain) NSDictionary *options;
@property (retain) NSSet *recordedSubsystems;
@property (retain) NSObject<OS_dispatch_queue> *recordedSubsystemsQueue;
@property bool shouldLogToCrashReporter;
@property (retain) NSArray *tracedSubsystems;

+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;
+ (id)createDefaultLogger;
+ (id)defaultLogger;
+ (int)defaultLoggerLogLevel;
+ (bool)enabledForSubsystem:(id)arg1 level:(int)arg2;
+ (void)flushDefaultLoggerIfPresent;
+ (void)initialize;
+ (void)logCrashReporterMessage:(id)arg1 fromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg2;
+ (void)logCrashReporterMessageFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 format:(id)arg2;
+ (void)logFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4;
+ (void)logFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(char *)arg5;
+ (id)loggerWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3;
+ (void)recreateDefaultLogger;
+ (void)setDefaultLogger:(id)arg1;
+ (void)setupCrashReporter;
+ (bool)traceEnabledForSubsystem:(id)arg1;

- (void).cxx_destruct;
- (void)_recordSubsystem:(id)arg1;
- (id)backend;
- (id)backendAccessSerializationQueue;
- (bool)backendAllowsConcurrentAccess;
- (id)debuggedSubsystems;
- (id)description;
- (bool)enabledForSubsystem:(id)arg1 subsystems:(id)arg2;
- (id)facilityPrefix;
- (void)flush;
- (id)initWithBackend:(id)arg1 logLevel:(int)arg2 options:(id)arg3;
- (void)logFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4;
- (void)logFromCodeLocation:(struct { char *x1; char *x2; char *x3; char *x4; void *x5; })arg1 subsystem:(id)arg2 level:(int)arg3 format:(id)arg4 arguments:(char *)arg5;
- (int)logLevel;
- (id)options;
- (void)processOptions;
- (id)recordedSubsystems;
- (id)recordedSubsystemsQueue;
- (void)setBackend:(id)arg1;
- (void)setBackendAccessSerializationQueue:(id)arg1;
- (void)setBackendAllowsConcurrentAccess:(bool)arg1;
- (void)setDebuggedSubsystems:(id)arg1;
- (void)setFacilityPrefix:(id)arg1;
- (void)setLogLevel:(int)arg1;
- (void)setOptions:(id)arg1;
- (void)setRecordedSubsystems:(id)arg1;
- (void)setRecordedSubsystemsQueue:(id)arg1;
- (void)setShouldLogToCrashReporter:(bool)arg1;
- (void)setTracedSubsystems:(id)arg1;
- (bool)shouldLogToCrashReporter;
- (id)tracedSubsystems;

@end
