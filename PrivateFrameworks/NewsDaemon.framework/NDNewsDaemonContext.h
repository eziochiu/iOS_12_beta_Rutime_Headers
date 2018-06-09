/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
 */

@interface NDNewsDaemonContext : NSObject <NDNewsService, NDNewsServiceClient> {
    <NDNewsService> * _daemon;
    id /* block */  _updateResultsHandler;
}

@property (nonatomic, retain) <NDNewsService> *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateResultsHandler;

- (void).cxx_destruct;
- (id)_queue;
- (id)daemon;
- (void)fetchLatestResultsWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)serviceHasNewTodayResults;
- (void)setDaemon:(id)arg1;
- (void)setUpdateResultsHandler:(id /* block */)arg1;
- (id /* block */)updateResultsHandler;

@end
