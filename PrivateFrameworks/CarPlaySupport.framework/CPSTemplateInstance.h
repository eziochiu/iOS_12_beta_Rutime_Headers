/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSTemplateInstance : NSObject <CPBannerDelegate, CPSSafeAreaDelegate, CPSTemplateViewControllerDelegate, CPTemplateProviding, NSXPCListenerDelegate, UINavigationControllerDelegate> {
    CPSApplicationStateMonitor * _applicationStateMonitor;
    CPSBannerSource * _bannerSource;
    NSXPCConnection * _connection;
    <CPSTemplateInstanceDelegate> * _delegate;
    NSMutableDictionary * _identifierToViewControllerDictionary;
    NSXPCListener * _listener;
    CPSOverlayViewController * _overlayViewController;
    <CPTemplateServiceClientInterface> * _remoteObjectProxy;
    CPSMapTemplateViewController * _rootMapController;
    FBScene * _scene;
    NSString * _sceneIdentifier;
}

@property (nonatomic, retain) CPSApplicationStateMonitor *applicationStateMonitor;
@property (nonatomic, retain) CPSBannerSource *bannerSource;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <CPSTemplateInstanceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *identifierToViewControllerDictionary;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) CPSOverlayViewController *overlayViewController;
@property (nonatomic, retain) <CPTemplateServiceClientInterface> *remoteObjectProxy;
@property (nonatomic, retain) CPSMapTemplateViewController *rootMapController;
@property (nonatomic) FBScene *scene;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)applicationStateMonitor;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (id)bannerSource;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (id)connection;
- (void)containsTemplate:(id)arg1 reply:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)dismissAlertAnimated:(bool)arg1;
- (id)endpoint;
- (void)getTemplatesWithReply:(id /* block */)arg1;
- (void)getTopTemplateWithReply:(id /* block */)arg1;
- (id)identifierToViewControllerDictionary;
- (id)initWithSceneIdentifier:(id)arg1 delegate:(id)arg2;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)overlayViewController;
- (void)popTemplateAnimated:(id)arg1;
- (void)popToRootTemplateAnimated:(id)arg1;
- (void)popToTemplate:(id)arg1 animated:(id)arg2;
- (void)presentAlert:(id)arg1 withProxyDelegate:(id)arg2;
- (void)pushGridTemplate:(id)arg1 animated:(id)arg2 presentationStyle:(unsigned long long)arg3;
- (void)pushListTemplate:(id)arg1 animated:(id)arg2 presentationStyle:(unsigned long long)arg3;
- (void)pushMapTemplate:(id)arg1 animated:(id)arg2 presentationStyle:(unsigned long long)arg3;
- (void)pushSearchTemplate:(id)arg1 animated:(id)arg2 presentationStyle:(unsigned long long)arg3;
- (void)pushVoiceTemplate:(id)arg1 animated:(id)arg2;
- (id)remoteObjectProxy;
- (void)requestBannerProviderWithReply:(id /* block */)arg1;
- (void)requestGridTemplateProviderForInterface:(id)arg1 withProxyDelegate:(id)arg2 reply:(id /* block */)arg3;
- (void)requestListTemplateProviderForTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(id /* block */)arg3;
- (void)requestMapTemplateProviderForTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(id /* block */)arg3;
- (void)requestSearchTemplateProviderForTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(id /* block */)arg3;
- (void)requestVoiceControlProviderForTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(id /* block */)arg3;
- (id)rootMapController;
- (id)scene;
- (id)sceneIdentifier;
- (void)setApplicationStateMonitor:(id)arg1;
- (void)setBannerSource:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setIdentifierToViewControllerDictionary:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setOverlayViewController:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)setRootMapController:(id)arg1;
- (void)setScene:(id)arg1;
- (void)templateViewControllerDidPop:(id)arg1;
- (void)updateSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)whitelistClassesForBaseTemplateProvider:(id)arg1;

@end
