/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportInsertPendingGroupOperation : FCOperation {
    <FCCoreConfiguration> * _configuration;
    FCCloudContext * _context;
    FCFeedDescriptor * _feedDescriptor;
    NSArray * _feedGroupEmitters;
    FCFeedGroupEmittingContext * _groupEmittingContext;
    id /* block */  _insertGroupCompletionHandler;
    NSArray * _internalElements;
    FCFeedRefreshSession * _refreshSession;
    NSSet * _resultDeletedElementIDs;
    FCFeedGroup * _resultInsertedGroup;
    FCFeedRefreshSession * _resultRefreshSession;
    NSArray * _resultUpdatedRefreshSessions;
}

@property (nonatomic, copy) <FCCoreConfiguration> *configuration;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) FCFeedDescriptor *feedDescriptor;
@property (nonatomic, retain) NSArray *feedGroupEmitters;
@property (nonatomic, retain) FCFeedGroupEmittingContext *groupEmittingContext;
@property (nonatomic, copy) id /* block */ insertGroupCompletionHandler;
@property (nonatomic, retain) NSArray *internalElements;
@property (nonatomic, retain) FCFeedRefreshSession *refreshSession;

- (void).cxx_destruct;
- (void)_finishWithInsertedGroup:(id)arg1 backedByPendingGroup:(id)arg2 forEmitter:(id)arg3;
- (id)_nextGroupToInsert:(id*)arg1;
- (id)configuration;
- (id)context;
- (id)feedDescriptor;
- (id)feedGroupEmitters;
- (id)groupEmittingContext;
- (id /* block */)insertGroupCompletionHandler;
- (id)internalElements;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)refreshSession;
- (void)setConfiguration:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFeedDescriptor:(id)arg1;
- (void)setFeedGroupEmitters:(id)arg1;
- (void)setGroupEmittingContext:(id)arg1;
- (void)setInsertGroupCompletionHandler:(id /* block */)arg1;
- (void)setInternalElements:(id)arg1;
- (void)setRefreshSession:(id)arg1;
- (bool)validateOperation;

@end
