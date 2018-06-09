/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsDaemon.framework/NewsDaemon
 */

@interface NDNewsServiceConnection : NSObject <NDNewsService, NDNewsServiceClient> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    <NDNewsServiceClient> * _client;
    NSXPCConnection * _connection;
    <NDNewsService> * _daemon;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) <NDNewsServiceClient> *client;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) <NDNewsService> *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_establishConnectionIfNeededWithCompletion:(id /* block */)arg1;
- (id)accessQueue;
- (id)client;
- (id)connection;
- (id)daemon;
- (void)dealloc;
- (void)fetchLatestResultsWithParameters:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithClient:(id)arg1;
- (void)markAnalyticsElement:(id)arg1 asReadAtDate:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)markAnalyticsElements:(id)arg1 asSeenAtDate:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)serviceHasNewTodayResults;
- (void)setAccessQueue:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDaemon:(id)arg1;

@end
