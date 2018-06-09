/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCRemoteViewController : _UIRemoteViewController <DOCRemoteContextInterface> {
    DOCConfiguration * _configuration;
    <DOCRemoteViewControllerDelegate> * _delegate;
    DOCRemoteContext * _hostContext;
    bool  _isBrowserViewController;
    DOCAppearance * _lastAppearance;
}

@property (retain) DOCConfiguration *configuration;
@property <DOCRemoteViewControllerDelegate> *delegate;
@property (retain) DOCRemoteContext *hostContext;
@property bool isBrowserViewController;

+ (id)instantiateRemoteBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(id /* block */)arg3;
+ (struct _UIResilientRemoteViewContainerViewController { Class x1; }*)instantiateRemoteDocumentBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(id /* block */)arg3;
+ (id)instantiateRemoteInfoViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(id /* block */)arg3;
+ (id)instantiateRemoteSourceViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(id /* block */)arg3;
+ (struct _UIResilientRemoteViewContainerViewController { Class x1; }*)instantiateRemoteTargetSelectionBrowserViewControllerWithHostProxy:(id)arg1 configuration:(id)arg2 completionBlock:(id /* block */)arg3;
+ (struct _UIResilientRemoteViewContainerViewController { Class x1; }*)instantiateTransparent:(bool)arg1 remoteViewControllerWithConfiguration:(id)arg2 errorHandler:(id /* block */)arg3 hostProxy:(id)arg4 completionHandler:(id /* block */)arg5;
+ (id)serviceExtension;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (void)fetchAllSourcesWithCompletionHandler:(id /* block */)arg1;
- (id)hostContext;
- (bool)isBrowserViewController;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostContext:(id)arg1;
- (void)setIsBrowserViewController:(bool)arg1;
- (void)updateAppearance:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)updateAppearance:(id)arg1 shouldFlushCA:(bool)arg2 completionBlock:(id /* block */)arg3;
- (void)updateEditingTo:(bool)arg1 animated:(bool)arg2;
- (void)viewDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
