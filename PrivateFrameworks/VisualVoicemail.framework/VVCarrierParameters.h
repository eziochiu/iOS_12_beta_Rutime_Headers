/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VVCarrierParameters : NSObject {
    NSDictionary * _parameterValues;
}

@property (nonatomic, readonly) NSDictionary *parameterValues;

+ (id)carrierServiceName;
+ (bool)ignoresRoamingSwitch;
+ (id)messageNotificationFallbackTimeout;
+ (id)retryIntervals;
+ (bool)supportsDetachedStorage;
+ (bool)supportsGreetingChanges;
+ (bool)supportsPasswordChanges;

- (void).cxx_destruct;
- (id)initWithSubscriptionContext:(id)arg1 service:(id)arg2;
- (id)parameterValueForKey:(id)arg1;
- (id)parameterValues;

@end
