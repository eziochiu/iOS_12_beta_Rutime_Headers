/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFWebProcessPlugInPageSafeBrowsingController : NSObject <_SFSafeBrowsingWebProcessController> {
    bool  _canGoBack;
    id /* block */  _completionHandler;
    NSDictionary * _localizedStrings;
    _SFWebProcessPlugInPageController * _pageController;
    NSMutableSet * _provisionalURLsNeedingSafeBrowsingCheck;
    <_SFSafeBrowsingWarningResponseObserver> * _responseObserver;
    _WKRemoteObjectInterface * _safeBrowsingControllerInterface;
    NSMutableSet * _safeURLCache;
    _SFSecurityInfo * _securityInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canSkipSafeBrowsingCheckForURL:(id)arg1;
- (void)_clearSafeBrowsingControllerInterface;
- (id)_responseObserverProxy;
- (void)_setUpSafeBrowsingControllerInterface;
- (void)cleanUpForNewPageLoad;
- (void)dealloc;
- (void)didRespondToSecurityWarning:(long long)arg1;
- (id)initWithPageController:(id)arg1;
- (void)injectPhishingAlertBindingsForFrame:(id)arg1 inScriptWorld:(id)arg2;
- (id)localizedStringForString:(id)arg1;
- (void)performSafeBrowsingCheckForURL:(id)arg1 completion:(id /* block */)arg2;
- (void)safeBrowsingCheckFinishedWithSecurityInfo:(id)arg1 canGoBack:(bool)arg2 localizedStrings:(id)arg3;
- (void)safeBrowsingDatabaseDidUpdate;
- (void)securityWarningPageLoaded;
- (void)urlPassedSafeBrowsingCheck:(id)arg1 canCache:(bool)arg2;
- (bool)urlPassesFastSafeBrowsingCheck:(id)arg1;

@end
