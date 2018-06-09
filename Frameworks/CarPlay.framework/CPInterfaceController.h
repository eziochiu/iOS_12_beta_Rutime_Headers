/* made by EzioChiu
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPInterfaceController : NSObject <CPTemplateDelegate, CPTemplateServiceClientInterface> {
    UIWindow * _carWindow;
    NSXPCConnection * _connection;
    <CPInterfaceControllerDelegate> * _delegate;
    CPTemplate * _rootTemplate;
    <CPTemplateProviding> * _templateProvider;
    NSMutableArray * _templateStack;
}

@property (nonatomic, retain) UIWindow *carWindow;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPInterfaceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPTemplate *rootTemplate;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CPTemplateProviding> *templateProvider;
@property (nonatomic, retain) NSMutableArray *templateStack;
@property (nonatomic, readonly) NSArray *templates;
@property (nonatomic, readonly) CPTemplate *topTemplate;

+ (void)load;

- (void).cxx_destruct;
- (id)_activeMapTemplate;
- (void)_canvasDidConnect:(id)arg1;
- (void)_canvasWillDisconnect:(id)arg1;
- (void)_connectToListenerEndpoint:(id)arg1 withWindow:(id)arg2;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_handleConnectedCanvas:(id)arg1;
- (void)_handleDisconnectedCanvas:(id)arg1;
- (id)_init;
- (id)_listenerEndpointForSettings:(id)arg1;
- (void)_presentTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_pushGridTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_pushListTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_pushMapTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_pushSearchTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_pushVoiceControlTemplate:(id)arg1 animated:(bool)arg2;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (id)carWindow;
- (void)clientExceededHierarchyDepthLimit;
- (id)connection;
- (id)delegate;
- (void)dismissAlertAnimated:(bool)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (void)popTemplateAnimated:(bool)arg1;
- (void)popToRootTemplateAnimated:(bool)arg1;
- (void)popToTemplate:(id)arg1 animated:(bool)arg2;
- (void)presentAlert:(id)arg1;
- (void)pushTemplate:(id)arg1 animated:(bool)arg2;
- (id)rootTemplate;
- (void)setCarWindow:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRootTemplate:(id)arg1;
- (void)setRootTemplate:(id)arg1 animated:(bool)arg2;
- (void)setTemplateProvider:(id)arg1;
- (void)setTemplateStack:(id)arg1;
- (void)templateDidAppear:(id)arg1 animated:(bool)arg2;
- (void)templateDidDisappear:(id)arg1 animated:(bool)arg2;
- (void)templateIdentifierDidPop:(id)arg1;
- (id)templateProvider;
- (id)templateStack;
- (void)templateWillAppear:(id)arg1 animated:(bool)arg2;
- (void)templateWillDisappear:(id)arg1 animated:(bool)arg2;
- (id)templates;
- (id)topTemplate;
- (void)whitelistClassesForBaseTemplateProvider:(id)arg1;

@end
