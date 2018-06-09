/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface DCUsageAnalyticsReporter : DCAnalyticsReporterBase

+ (void)clearSharedCollector;
+ (id)sharedReporter;

- (void)incrementCountForKey:(id)arg1;
- (void)incrementCountForKey:(id)arg1 withSignature:(id)arg2;
- (void)logDocCamFilterUsageForFilterType:(short)arg1;

@end
