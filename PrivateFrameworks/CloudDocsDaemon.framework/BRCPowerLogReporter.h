/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPowerLogReporter : NSObject {
    NSMutableDictionary * _deepScanReasonsToReport;
    NSObject<OS_dispatch_queue> * _reporterQueue;
    NSObject<OS_dispatch_source> * _reporterTimer;
    BRCAccountSession * _session;
}

- (void).cxx_destruct;
- (void)_reportStats;
- (id)initWithSession:(id)arg1;
- (void)reportDeepScanReason:(id)arg1 forAppLibraryID:(id)arg2;
- (double)statsReportInterval;
- (double)timeUntilNextReport;

@end
