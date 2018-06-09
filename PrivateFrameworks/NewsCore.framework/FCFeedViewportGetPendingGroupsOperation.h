/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedViewportGetPendingGroupsOperation : FCOperation {
    id /* block */  _emitGroupsCompletionHandler;
    NSArray * _feedGroupEmitters;
    FCFeedGroupEmittingContext * _groupEmittingContext;
    bool  _lightweightOnly;
    FCFeedRefreshSession * _refreshSession;
    FCFeedRefreshSession * _resultRefreshSession;
    NSDictionary * _toCursorsByEmitterID;
}

@property (nonatomic, copy) id /* block */ emitGroupsCompletionHandler;
@property (nonatomic, retain) NSArray *feedGroupEmitters;
@property (nonatomic, retain) FCFeedGroupEmittingContext *groupEmittingContext;
@property bool lightweightOnly;
@property (nonatomic, retain) FCFeedRefreshSession *refreshSession;
@property (nonatomic, retain) FCFeedRefreshSession *resultRefreshSession;
@property (nonatomic, retain) NSDictionary *toCursorsByEmitterID;

- (void).cxx_destruct;
- (id)_advanceRefreshSessionToNextInterestedEmitter:(id)arg1;
- (id)_exhaustGroupEmitter:(id)arg1 inRefreshSession:(id)arg2;
- (bool)_isErrorTransient:(id)arg1;
- (id /* block */)emitGroupsCompletionHandler;
- (id)feedGroupEmitters;
- (id)groupEmittingContext;
- (bool)lightweightOnly;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)refreshSession;
- (id)resultRefreshSession;
- (void)setEmitGroupsCompletionHandler:(id /* block */)arg1;
- (void)setFeedGroupEmitters:(id)arg1;
- (void)setGroupEmittingContext:(id)arg1;
- (void)setLightweightOnly:(bool)arg1;
- (void)setRefreshSession:(id)arg1;
- (void)setResultRefreshSession:(id)arg1;
- (void)setToCursorsByEmitterID:(id)arg1;
- (id)toCursorsByEmitterID;
- (bool)validateOperation;

@end
