/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIManualNetworkSelectionSpecifier : PSSpecifier <CoreTelephonyClientRegistrationDelegate> {
    CTXPCServiceSubscriptionContext * _context;
    CoreTelephonyClient * _ctClient;
    PSListController * _hostController;
}

@property (nonatomic, retain) CTXPCServiceSubscriptionContext *context;
@property (nonatomic, retain) CoreTelephonyClient *ctClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) PSListController *hostController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)ctClient;
- (id)currentNetwork:(id)arg1;
- (id)hostController;
- (id)initWithHostController:(id)arg1 subscriptionContext:(id)arg2;
- (id)initWithName:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(long long)arg6 edit:(Class)arg7;
- (void)lazyLoadBundle;
- (void)networkChanged;
- (void)networkSelected:(id)arg1 success:(bool)arg2 mode:(id)arg3;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (void)setContext:(id)arg1;
- (void)setCtClient:(id)arg1;
- (void)setHostController:(id)arg1;
- (void)willEnterForeground;

@end
