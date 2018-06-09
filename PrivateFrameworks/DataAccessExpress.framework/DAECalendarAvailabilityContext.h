/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DAECalendarAvailabilityContext : NSObject {
    id /* block */  _completionBlock;
    id /* block */  _resultsBlock;
}

- (void).cxx_destruct;
- (void)finishedWithError:(id)arg1;
- (id)initWithResultsBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)resultsReturned:(id)arg1;

@end
