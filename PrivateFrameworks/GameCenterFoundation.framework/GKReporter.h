/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKReporter : NSObject

+ (id)reporter;

- (void)_nativeReport:(id)arg1 signature:(id)arg2 result:(bool*)arg3;
- (void)_nativeReportDistributionValue:(id)arg1 signature:(id)arg2 domain:(id)arg3;
- (void)_nativeReportValue:(long long)arg1 signature:(id)arg2 domain:(id)arg3;
- (void)report:(id)arg1;
- (void)report:(id)arg1 signature:(id)arg2;
- (void)report:(id)arg1 signature:(id)arg2 result:(bool)arg3;
- (void)reportDistributionValue:(id)arg1 domain:(id)arg2;
- (void)reportValue:(long long)arg1 domain:(id)arg2;

@end
