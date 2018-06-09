/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentContainerViewController : UIViewController {
    <SXWebContentConfigurationManager> * _configurationManager;
    <SXWebContentErrorProvider> * _errorProvider;
    <SXWebContentInteractionProvider> * _interactionProvider;
    <SXWebContentPresentationManager> * _presentationManager;
    SXWebContentViewController * _webContentViewController;
}

@property (nonatomic, readonly) <SXWebContentConfigurationManager> *configurationManager;
@property (nonatomic, readonly) <SXWebContentErrorProvider> *errorProvider;
@property (nonatomic, readonly) <SXWebContentInteractionProvider> *interactionProvider;
@property (nonatomic, readonly) <SXWebContentPresentationManager> *presentationManager;
@property (nonatomic, readonly) SXWebContentViewController *webContentViewController;

- (void).cxx_destruct;
- (bool)allowUserInteractionForInteractionType:(unsigned long long)arg1;
- (id)configurationManager;
- (id)errorProvider;
- (id)initWithWebContentViewController:(id)arg1 interactionProvider:(id)arg2 errorProvider:(id)arg3 configurationManager:(id)arg4 presentationManager:(id)arg5;
- (id)interactionProvider;
- (void)loadURL:(id)arg1;
- (id)presentationManager;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)webContentViewController;

@end
