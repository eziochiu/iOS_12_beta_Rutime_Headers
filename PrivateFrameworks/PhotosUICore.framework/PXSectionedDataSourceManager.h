/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSectionedDataSourceManager : PXObservable {
    PXSectionedChangeDetailsRepository * _changeHistory;
    PXSectionedDataSource * _dataSource;
    NSMutableArray * _waitingConditions;
}

@property (nonatomic, readonly) PXSectionedChangeDetailsRepository *changeHistory;
@property (nonatomic, readonly) PXSectionedDataSource *dataSource;

- (void).cxx_destruct;
- (void)_reevaluateWaitingConditions;
- (void)_setDataSource:(id)arg1;
- (void)_waitingConditionDidTimeout:(id)arg1;
- (id)changeHistory;
- (id)createInitialDataSource;
- (id)dataSource;
- (void)didPublishChanges;
- (id)init;
- (id)mutableChangeObject;
- (id)queryObserversInterestingObjectReferences;
- (void)registerChangeObserver:(id)arg1 context:(void*)arg2;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)unregisterChangeObserver:(id)arg1 context:(void*)arg2;
- (void)waitForCondition:(id /* block */)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;

@end
