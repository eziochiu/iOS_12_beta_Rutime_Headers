/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoAdEngagementEvent : SXVideoAdAnalyticsEvent {
    unsigned long long  _engagementType;
}

@property (nonatomic, readonly) unsigned long long engagementType;

- (unsigned long long)engagementType;
- (id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5 duration:(double)arg6 timeplayed:(double)arg7 engagementType:(unsigned long long)arg8;

@end
