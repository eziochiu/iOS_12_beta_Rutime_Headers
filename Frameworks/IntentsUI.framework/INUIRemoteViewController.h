/* made by EzioChiu
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface INUIRemoteViewController : _UIRemoteViewController <INUIExtensionHostContextDelegate, _INUIRemoteViewControllerHosting> {
    NSExtension * _activeExtension;
    INUIExtensionViewControllerConfiguration * _configuration;
    <NSCopying> * _currentRequestIdentifier;
    <INUIRemoteViewControllerDelegate> * _delegate;
    _INUIExtensionHostContext * _extensionHostContext;
    bool  _needsStateUpdate;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentSize;
    INUIExtensionRequestInfo * _requestInfo;
}

@property (nonatomic, retain) NSExtension *activeExtension;
@property (nonatomic, copy) INUIExtensionViewControllerConfiguration *configuration;
@property (nonatomic, retain) <NSCopying> *currentRequestIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUIRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INUIExtensionHostContext *extensionHostContext;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsStateUpdate;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (setter=_setRequestInfo:, nonatomic, copy) INUIExtensionRequestInfo *requestInfo;
@property (readonly) Class superclass;

+ (void)_attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (void)_requestRemoteViewControllerForSnippetExtensionInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (void)_requestRemoteViewControllerWithRequestInfo:(id)arg1 delegate:(id)arg2 reply:(id /* block */)arg3;
+ (void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (id)exportedInterface;
+ (void)requestRemoteViewControllerForInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(id /* block */)arg3;
+ (void)requestRemoteViewControllerWithRequestInfo:(id)arg1 reply:(id /* block */)arg2;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)_errorHandlingServiceViewControllerProxy;
- (void)_queryRepresentedPropertiesWithCompletion:(id /* block */)arg1;
- (void)_setRequestInfo:(id)arg1;
- (void)_updateExtensionContextStateWithCompletion:(id /* block */)arg1;
- (id)activeExtension;
- (id)configuration;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 context:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 errorHandlingCompletion:(id /* block */)arg3;
- (id)currentRequestIdentifier;
- (id)delegate;
- (id)disconnect;
- (id)extensionHostContext;
- (void)extensionHostContext:(id)arg1 wantsToHandleIntent:(id)arg2;
- (bool)needsStateUpdate;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)requestCancellation;
- (id)requestInfo;
- (void)serviceViewControllerDesiresConstrainedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setActiveExtension:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCurrentRequestIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 completion:(id /* block */)arg2;
- (void)setExtensionHostContext:(id)arg1;
- (void)setIdealConfiguration:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setNeedsStateUpdate:(bool)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
