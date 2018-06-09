/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAdAnalyticsEvent : SXAnalyticsEvent {
    NSString * _adCampaign;
    NSString * _adCreative;
    NSString * _adLine;
    NSString * _impressionIdentifier;
    double  _impressionThreshold;
}

@property (nonatomic, readonly) NSString *adCampaign;
@property (nonatomic, readonly) NSString *adCreative;
@property (nonatomic, readonly) NSString *adLine;
@property (nonatomic, readonly) NSString *impressionIdentifier;
@property (nonatomic, readonly) double impressionThreshold;

- (void).cxx_destruct;
- (id)adCampaign;
- (id)adCreative;
- (id)adLine;
- (id)impressionIdentifier;
- (double)impressionThreshold;
- (id)initWithCampaign:(id)arg1 line:(id)arg2 creative:(id)arg3 impressionIdentifier:(id)arg4 impressionThreshold:(double)arg5;

@end
