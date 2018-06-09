/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FACircleRemoteUIDelegate : NSObject <RemoteUIControllerDelegate> {
    NSURLRequest * _cachedRequest;
    NSDictionary * _cachedServerInfo;
    FACircleContext * _context;
    <FACircleRemoteUIDelegateDelegate> * _delegate;
    FARequestConfigurator * _requestConfigurator;
    AAUIServerUIHookHandler * _serverHookHandler;
}

@property (nonatomic, readonly) FACircleContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <FACircleRemoteUIDelegateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_broadcastFamilyDidChangeNotification;
- (void)_handleObjectModelChangeForController:(id)arg1 objectModel:(id)arg2 isModal:(bool)arg3;
- (void)_notifyDelegateOfCompletionWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_reportRequestFailureWithResponse:(id)arg1;
- (id)context;
- (id)delegate;
- (id)init;
- (id)initWithContext:(id)arg1 serverHookHandler:(id)arg2;
- (void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (void)remoteUIController:(id)arg1 didRefreshObjectModel:(id)arg2;
- (void)remoteUIController:(id)arg1 didRemoveObjectModel:(id)arg2;
- (bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
