/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAWorkerWarmer : NSObject {
    PHAWorker * _lastActiveWorker;
    PHAJobConstraints * _lastConstraints;
    NSArray * _workers;
}

@property (nonatomic, retain) PHAWorker *lastActiveWorker;
@property (nonatomic, retain) PHAJobConstraints *lastConstraints;
@property (nonatomic, readonly) NSArray *workers;

+ (unsigned long long)stateCode;

- (void).cxx_destruct;
- (void)_cooldownWorkerIfWarmed:(id)arg1;
- (void)_warmupWorkerIfCooled:(id)arg1;
- (id)initWithWorkers:(id)arg1;
- (id)lastActiveWorker;
- (id)lastConstraints;
- (void)recordConstraintChange:(id)arg1;
- (void)reportNoMoreJobsExpected;
- (void)setActiveWorker:(id)arg1 withJob:(id)arg2;
- (void)setLastActiveWorker:(id)arg1;
- (void)setLastConstraints:(id)arg1;
- (id)statusAsDictionary;
- (id)workers;

@end
