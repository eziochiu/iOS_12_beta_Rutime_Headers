/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSSystemApplication : NSObject <BKSSystemApplicationClientDelegate> {
    BKSSystemApplicationClient * _client;
    <BKSSystemApplicationDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    double  _systemIdleSleepInterval;
    bool  _waitForDataMigration;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKSSystemApplicationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double systemIdleSleepInterval;
@property (nonatomic) bool waitForDataMigration;

- (void).cxx_destruct;
- (void)bootstrap;
- (bool)clientIsAliveForWatchdog:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)finishBooting;
- (id)initWithQueue:(id)arg1;
- (void)restart;
- (void)sendActions:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSystemIdleSleepInterval:(double)arg1;
- (void)setWaitForDataMigration:(bool)arg1;
- (void)start;
- (double)systemIdleSleepInterval;
- (bool)waitForDataMigration;

@end
