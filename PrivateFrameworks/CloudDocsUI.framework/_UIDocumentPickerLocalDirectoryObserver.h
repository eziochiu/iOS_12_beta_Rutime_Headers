/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerLocalDirectoryObserver : _UIArrayController <_UIDocumentPickerDirectoryObserver, _UIDocumentPickerVnodeDispatchSourceDelegate> {
    bool  _afterInitialUpdate;
    NSDate * _lastSnapshotDate;
    NSObject<OS_dispatch_queue> * _queryDispatchQueue;
    NSPredicate * _queryPredicate;
    NSOperationQueue * _queryWorkerQueue;
    NSMutableDictionary * _resultsForSources;
    NSArray * _sortDescriptors;
    NSArray * _sources;
    NSOrderedSet * _staticItems;
    bool  _updateScheduled;
}

@property (nonatomic) bool afterInitialUpdate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastSnapshotDate;
@property (nonatomic, retain) NSPredicate *queryPredicate;
@property (nonatomic, retain) NSOperationQueue *queryWorkerQueue;
@property (nonatomic, retain) NSOrderedSet *staticItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)afterInitialUpdate;
- (void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2;
- (void)dealloc;
- (id)description;
- (void)dispatchSourceDidReceiveEvent:(id)arg1;
- (id)gatherResults;
- (id)gatherResultsForSource:(id)arg1;
- (id)initWithScopes:(id)arg1 delegate:(id)arg2;
- (void)initialUpdate;
- (void)invalidate;
- (id)isVisiblePredicate;
- (id)lastSnapshotDate;
- (bool)objectAttributeModified:(id)arg1 newObject:(id)arg2;
- (id)queryPredicate;
- (id)queryWorkerQueue;
- (void)setAfterInitialUpdate:(bool)arg1;
- (void)setLastSnapshotDate:(id)arg1;
- (void)setQueryPredicate:(id)arg1;
- (void)setQueryWorkerQueue:(id)arg1;
- (void)setStaticItems:(id)arg1;
- (id)staticItems;
- (void)updateResultsForSource:(id)arg1;

@end
