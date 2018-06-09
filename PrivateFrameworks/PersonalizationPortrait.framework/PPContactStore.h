/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPContactStore : NSObject {
    NSObject<OS_dispatch_queue> * _changeMonitoringQueue;
    NSMapTable * _recordLoadingDelegates;
}

- (void).cxx_destruct;
- (void)_loadContactNameRecordsWithDelegate:(id)arg1;
- (void)_resetContactNameRecordsWithDelegate:(id)arg1;
- (void)_sendChangesToDelegates;
- (id)init;
- (bool)iterContactNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2;

@end
