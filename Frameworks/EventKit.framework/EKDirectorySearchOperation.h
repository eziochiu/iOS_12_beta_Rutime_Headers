/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKDirectorySearchOperation : NSOperation {
    NSString * _accountID;
    NSError * _error;
    bool  _isExecuting;
    bool  _isFinished;
    bool  _numberOfMatchesExceededLimit;
    EKDirectorySearchQuery * _query;
    id /* block */  _resultsBlock;
    id  _searchID;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool numberOfMatchesExceededLimit;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (id)_processGroupsInResults:(id)arg1;
- (id)_processLocationsInResults:(id)arg1;
- (id)_processPeopleInResults:(id)arg1;
- (id)_processResourcesInResults:(id)arg1;
- (void)_processResults:(id)arg1;
- (id)_recordTypes;
- (void)cancel;
- (id)error;
- (id)init;
- (id)initWithSource:(id)arg1 query:(id)arg2 resultsBlock:(id /* block */)arg3;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (bool)numberOfMatchesExceededLimit;
- (void)setError:(id)arg1;
- (void)setNumberOfMatchesExceededLimit:(bool)arg1;
- (void)start;

@end
