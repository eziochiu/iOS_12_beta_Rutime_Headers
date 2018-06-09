/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCAnalyticsReporter : NSObject {
    NSMutableDictionary * _eventsByKind;
    BRCMetricEndpoint * _metricEndpoint;
    NSObject<OS_dispatch_queue> * _queue;
    BRCAccountSession * _session;
}

- (void).cxx_destruct;
- (void)_cleanupTimedOutEventMetrics:(id)arg1;
- (void)_forgetEventMetrics:(id)arg1;
- (void)_withEventMetricsOfKind:(id)arg1 accessor:(id /* block */)arg2;
- (void)createFSEventToSyncUpEventForFileID:(unsigned long long)arg1 genID:(unsigned int)arg2;
- (void)createUserDownloadEventForOperationID:(id)arg1 isRecursive:(bool)arg2 isForBackup:(bool)arg3;
- (void)dumpToContext:(id)arg1;
- (void)forgetEventMetric:(id)arg1;
- (id)initWithSession:(id)arg1;
- (void)lookupFSEventToSyncUpEventByFileID:(unsigned long long)arg1 genID:(unsigned int)arg2 accessor:(id /* block */)arg3;
- (void)lookupFSEventToSyncUpEventByItemID:(id)arg1 accessor:(id /* block */)arg2;
- (void)lookupUserDownloadEventByDocID:(id)arg1 accessor:(id /* block */)arg2;
- (void)lookupUserDownloadEventByOperationID:(id)arg1 accessor:(id /* block */)arg2;
- (void)submitEventMetric:(id)arg1;

@end
