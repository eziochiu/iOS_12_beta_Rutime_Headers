/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAGraphServiceWorkerGraphUpdateJob : PHAWorkerJob <PHAGraphRegistration> {
    id /* block */  _completionBlock;
    float  _completionScore;
    NSDate * _creationDate;
    bool  _finished;
    PHAGraphManager * _graphManager;
    bool  _isChangeProcessingJob;
    NSString * _label;
    NSObject<OS_os_transaction> * _transaction;
    id /* block */  _updateBlock;
}

@property (copy) id /* block */ completionBlock;
@property (nonatomic) float completionScore;
@property (retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool finished;
@property (nonatomic, retain) PHAGraphManager *graphManager;
@property (readonly) unsigned long long hash;
@property bool isChangeProcessingJob;
@property (copy) NSString *label;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property (copy) id /* block */ updateBlock;

+ (id)graphUpdateJobWithLibrary:(id)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 updateBlock:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (float)completionScore;
- (id)creationDate;
- (id)description;
- (bool)finished;
- (id)graphManager;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 label:(id)arg3 library:(id)arg4;
- (bool)isChangeProcessingJob;
- (id)label;
- (void)markAsFinishedWithCompletionScore:(float)arg1;
- (void)photoAnalysisGraphManager:(id)arg1 graphIsConsistent:(bool)arg2;
- (void)photoAnalysisGraphManager:(id)arg1 graphUpdateMadeProgress:(double)arg2;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCompletionScore:(float)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setGraphManager:(id)arg1;
- (void)setIsChangeProcessingJob:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (bool)startProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (bool)stopProcessingOnWorker:(id)arg1 withError:(id*)arg2;
- (id)transaction;
- (id /* block */)updateBlock;
- (void)updateCompletionScore:(float)arg1;
- (bool)wantsLiveGraphUpdates;

@end
