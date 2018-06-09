/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFReloadOptionsController : NSObject <RequestDesktopSiteUIProcessListener, SFContentBlockerManagerObserver> {
    _SFInjectedJavaScriptController * _activityJSController;
    NSMutableDictionary * _domainToUserAgentPolicyMap;
    bool  _hasEnabledContentBlockers;
    _WKRemoteObjectInterface * _requestDesktopSiteUIProcessPlugInListenerInterface;
    <RequestDesktopSiteWebProcessPlugInListener> * _requestDesktopSiteWebProcessPlugInListener;
    WKWebView * _webView;
}

@property (nonatomic, readonly) _SFInjectedJavaScriptController *activityJSController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasEnabledContentBlockers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool loadedUsingDesktopUserAgent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkForContentBlockers;
- (void)_setUpPlugInListenersIfNeeded;
- (id)activityJSController;
- (void)contentBlockerManagerExtensionListDidChange:(id)arg1;
- (void)dealloc;
- (void)didMarkURLAsNeedingDesktopUserAgent:(id)arg1;
- (bool)hasEnabledContentBlockers;
- (id)init;
- (id)initWithWebView:(id)arg1 activityJSController:(id)arg2;
- (void)invalidate;
- (bool)loadedUsingDesktopUserAgent;
- (void)requestDesktopSite;
- (void)requestDesktopSiteWithURL:(id)arg1;
- (void)setHasEnabledContentBlockers:(bool)arg1;

@end
