/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPluginController : NSObject <WebPluginContainerCheckController, WebPluginManualLoader> {
    NSMutableSet * _checksInProgress;
    WebDataSource * _dataSource;
    WAKView * _documentView;
    bool  _started;
    NSMutableArray * _views;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)addPlugInView:(id)arg1;
+ (bool)isPlugInView:(id)arg1;

- (id)URLPolicyCheckReferrer;
- (void)_cancelOutstandingChecks;
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)arg1;
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)arg1 inFrame:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4;
- (void)addPlugin:(id)arg1;
- (void)dealloc;
- (void)destroyAllPlugins;
- (void)destroyOnePlugin:(id)arg1;
- (void)destroyPlugin:(id)arg1;
- (id)initWithDocumentView:(id)arg1;
- (id)plugInViewWithArguments:(id)arg1 fromPluginPackage:(id)arg2;
- (bool)plugInsAreRunning;
- (void)pluginView:(id)arg1 receivedData:(id)arg2;
- (void)pluginView:(id)arg1 receivedError:(id)arg2;
- (void)pluginView:(id)arg1 receivedResponse:(id)arg2;
- (void)pluginViewFinishedLoading:(id)arg1;
- (bool)processingUserGesture;
- (void)restorePluginsFromCache;
- (void)setDataSource:(id)arg1;
- (void)showStatus:(id)arg1;
- (void)startAllPlugins;
- (void)stopAllPlugins;
- (void)stopOnePlugin:(id)arg1;
- (void)stopOnePluginForPageCache:(id)arg1;
- (void)stopPluginsForPageCache;
- (id)superlayerForPluginView:(id)arg1;
- (id)webFrame;
- (void)webPlugInContainerDidHideFullScreenForView:(id)arg1;
- (void)webPlugInContainerLoadRequest:(id)arg1 inFrame:(id)arg2;
- (void)webPlugInContainerShowStatus:(id)arg1;
- (void)webPlugInContainerWillShowFullScreenForView:(id)arg1;
- (id)webView;

@end
