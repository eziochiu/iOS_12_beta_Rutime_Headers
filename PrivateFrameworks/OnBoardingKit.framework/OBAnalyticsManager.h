/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBAnalyticsManager : NSObject {
    bool  _shouldStashMetrics;
    NSMutableArray * _stagedMetrics;
}

@property bool shouldStashMetrics;
@property (retain) NSMutableArray *stagedMetrics;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)commit;
- (id)init;
- (void)logPresentationOfPrivacyLinkWithIdentifier:(id)arg1;
- (void)logPresentationOfPrivacySplashWithIdentifier:(id)arg1;
- (void)logPresentationOfPrivacyUnifiedAbout;
- (void)logTapOnPrivacyLinkWithIdentifier:(id)arg1;
- (void)postMetricID:(unsigned int)arg1 metric:(id)arg2;
- (void)setShouldStashMetrics:(bool)arg1;
- (void)setStagedMetrics:(id)arg1;
- (bool)shouldStashMetrics;
- (void)stageMetricID:(unsigned int)arg1 metric:(id)arg2;
- (id)stagedMetrics;

@end
