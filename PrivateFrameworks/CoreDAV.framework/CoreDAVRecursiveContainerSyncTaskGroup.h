/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVMkcolTaskDelegate, CoreDAVMoveTaskDelegate, CoreDAVPropPatchTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate> {
    NSArray * _actions;
    NSURL * _addMemberURL;
    Class  _appSpecificContainerItemClass;
    Class  _appSpecificDataItemClass;
    NSMutableArray * _childCollectionURL;
    NSURL * _folderURL;
    NSMutableDictionary * _folderURLToChildrenURLOrder;
    NSMutableDictionary * _leafURLToETag;
    unsigned long long  _multiGetBatchSize;
    NSString * _nextCTag;
    NSString * _nextPTag;
    NSString * _nextSyncToken;
    int  _phase;
    bool  _preflightCTag;
    NSString * _previousCTag;
    NSString * _previousPTag;
    NSString * _previousSyncToken;
    bool  _syncItemOrder;
    NSMutableSet * _syncReportDeletedURLs;
    NSMutableArray * _unsubmittedTasks;
    bool  _useMultiGet;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVLocalDBTreeInfoProvider> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *folderURL;
@property (nonatomic, readonly) NSDictionary *folderURLToChildrenURLOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long multiGetBatchSize;
@property (nonatomic, retain) NSString *nextCTag;
@property (nonatomic) bool preflightCTag;
@property (nonatomic, readonly) NSString *previousCTag;
@property (nonatomic, retain) NSString *previousSyncToken;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_copyContainerParserMappings;
- (void)_folderModTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;
- (void)_foundChildrenOrder:(id)arg1 inFolderWithURL:(id)arg2;
- (void)_getDataPayloads;
- (void)_getItemTags;
- (void)_getTask:(id)arg1 finishedWithParsedContents:(id)arg2 deletedItems:(id)arg3 error:(id)arg4;
- (void)_getTopFolderTags;
- (void)_postTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_pushActions;
- (unsigned long long)_submitTasks;
- (void)_syncReportTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)arg1;
- (void)_tearDownAllUnsubmittedTasks;
- (void)bailWithError:(id)arg1;
- (void)cancelTaskGroup;
- (id)copyFolderMultiGetTaskWithURLs:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)dataContentType;
- (void)deleteTask:(id)arg1 completedWithError:(id)arg2;
- (id)description;
- (id)folderURL;
- (id)folderURLToChildrenURLOrder;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousPTag:(id)arg3 previousSyncToken:(id)arg4 actions:(id)arg5 syncItemOrder:(bool)arg6 context:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9;
- (bool)isWhitelistedError:(id)arg1;
- (void)mkcolTask:(id)arg1 parsedPropStats:(id)arg2 error:(id)arg3;
- (void)moveTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (unsigned long long)multiGetBatchSize;
- (id)nextCTag;
- (bool)preflightCTag;
- (id)previousCTag;
- (id)previousSyncToken;
- (void)propFindTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)propPatchTask:(id)arg1 parsedResponses:(id)arg2 error:(id)arg3;
- (void)putTask:(id)arg1 completedWithNewETag:(id)arg2 error:(id)arg3;
- (void)setMultiGetBatchSize:(unsigned long long)arg1;
- (void)setNextCTag:(id)arg1;
- (void)setPreflightCTag:(bool)arg1;
- (void)setPreviousSyncToken:(id)arg1;
- (bool)shouldSyncChildWithResourceType:(id)arg1;
- (void)startTaskGroup;
- (void)syncAway;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;

@end
