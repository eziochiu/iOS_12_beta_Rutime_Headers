/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPPETFeedback : NSObject

+ (void)_logEngagementFeedbackForItems:(id)arg1 domain:(struct PPMPortraitDomain_ { unsigned long long x1; })arg2 clientIdentifier:(id)arg3;
+ (void)_logOverallEngagement:(id)arg1 domain:(struct PPMPortraitDomain_ { unsigned long long x1; })arg2 clientIdentifier:(id)arg3;
+ (void)_logUsedFeedbackForItems:(id)arg1 domain:(struct PPMPortraitDomain_ { unsigned long long x1; })arg2 clientIdentifier:(id)arg3;
+ (id)_serialLoggingQueue;
+ (void)portraitFeedbackEngagedMappedTopics:(id)arg1 forMapping:(id)arg2 clientIdentifier:(id)arg3;
+ (void)portraitFeedbackEngagedNamedEntities:(id)arg1 clientIdentifier:(id)arg2;
+ (void)portraitFeedbackEngagedTopics:(id)arg1 clientIdentifier:(id)arg2;
+ (void)portraitFeedbackMappedTopicsOverallEngagement:(id)arg1 forMapping:(id)arg2 clientIdentifier:(id)arg3;
+ (void)portraitFeedbackNamedEntitiesOverallEngagement:(id)arg1 clientIdentifier:(id)arg2;
+ (void)portraitFeedbackTopicsOverallEngagement:(id)arg1 clientIdentifier:(id)arg2;
+ (void)portraitFeedbackUsedMappedTopics:(id)arg1 forMapping:(id)arg2 clientIdentifier:(id)arg3;
+ (void)portraitFeedbackUsedNamedEntities:(id)arg1 clientIdentifier:(id)arg2;
+ (void)portraitFeedbackUsedTopics:(id)arg1 clientIdentifier:(id)arg2;

@end