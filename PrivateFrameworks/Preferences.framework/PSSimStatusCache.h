/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSimStatusCache : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate> {
    CoreTelephonyClient * _coreTelephonyClient;
    NSMutableDictionary * _simStatusDict;
    CTXPCServiceSubscriptionInfo * _subscriptionInfo;
}

@property (nonatomic, retain) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *simStatusDict;
@property (copy) CTXPCServiceSubscriptionInfo *subscriptionInfo;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)coreTelephonyClient;
- (void)fetchSimStatus;
- (void)fetchSubscriptionContexts;
- (id)init;
- (id)initPrivate;
- (void)setCoreTelephonyClient:(id)arg1;
- (void)setSimStatusDict:(id)arg1;
- (void)setSubscriptionInfo:(id)arg1;
- (id)simStatus:(id)arg1;
- (id)simStatusDict;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)subscriptionContexts;
- (id)subscriptionInfo;
- (void)subscriptionInfoDidChange;
- (void)willEnterForeground;

@end
