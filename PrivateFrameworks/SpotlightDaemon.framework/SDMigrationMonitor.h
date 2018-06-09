/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightDaemon.framework/SpotlightDaemon
 */

@interface SDMigrationMonitor : NSObject <SDEventHandlerProvider> {
    id /* block */  _completionBlock;
    id /* block */  _eventHandler;
    bool  _finishedDataMigration;
    bool  _foundExtensions;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _unlocked;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic) bool finishedDataMigration;
@property (nonatomic) bool foundExtensions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool unlocked;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_didFindExtensions:(id)arg1;
- (void)_finishMigration;
- (id /* block */)completionBlock;
- (void)dealloc;
- (id /* block */)eventHandler;
- (bool)finishedDataMigration;
- (bool)foundExtensions;
- (id)init;
- (void)monitorDataMigrationWithCompletionBlock:(id /* block */)arg1;
- (id)queue;
- (void)registerHandlerWithEventMonitor:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setFinishedDataMigration:(bool)arg1;
- (void)setFoundExtensions:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setUnlocked:(bool)arg1;
- (void)unlock;
- (bool)unlocked;

@end
