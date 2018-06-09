/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSViewServiceHostViewController : UIViewController <VSViewServiceRemoteViewControllerDelegate> {
    VSOptional * _currentRequest;
    <VSViewServiceHostViewControllerDelegate> * _delegate;
    bool  _hasRequestedPresentation;
    bool  _hasRetriedOnce;
    VSViewServiceRemoteViewController * _remoteViewController;
    NSMutableDictionary * _requestsByID;
    VSViewControllerFactory * _viewControllerFactory;
}

@property (nonatomic, retain) VSOptional *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSViewServiceHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasRequestedPresentation;
@property (nonatomic) bool hasRetriedOnce;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSViewServiceRemoteViewController *remoteViewController;
@property (nonatomic, retain) NSMutableDictionary *requestsByID;
@property (readonly) Class superclass;
@property (nonatomic, retain) VSViewControllerFactory *viewControllerFactory;

- (void).cxx_destruct;
- (void)_addRemoteViewControllerAsChildViewController;
- (void)_cancelButtonPressed:(id)arg1;
- (void)_connectToViewServiceForRequest:(id)arg1;
- (void)_didCancelRequest:(id)arg1;
- (void)_didChooseAdditionalProvidersForRequest:(id)arg1;
- (void)_didCompleteRequest:(id)arg1;
- (void)_dismissViewServiceHostViewController;
- (void)_presentViewServiceHostViewController;
- (void)_removeRemoteViewControllerAsChildViewController;
- (void)_request:(id)arg1 didFailWithError:(id)arg2;
- (void)_request:(id)arg1 didFinishWithResponse:(id)arg2;
- (id)_requestForID:(id)arg1;
- (bool)_shouldAuthenticateAccountProviderWithIdentifier:(id)arg1;
- (id)currentRequest;
- (void)dealloc;
- (id)delegate;
- (void)dismissViewServiceRemoteViewController:(id)arg1;
- (void)enqueueViewServiceRequest:(id)arg1 withIdentifier:(id)arg2;
- (bool)hasRequestedPresentation;
- (bool)hasRetriedOnce;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)modalPresentationStyle;
- (void)presentViewServiceRemoteViewController:(id)arg1;
- (id)remoteViewController;
- (id)requestsByID;
- (void)setCurrentRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasRequestedPresentation:(bool)arg1;
- (void)setHasRetriedOnce:(bool)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRequestsByID:(id)arg1;
- (void)setViewControllerFactory:(id)arg1;
- (id)viewControllerFactory;
- (void)viewServiceRemoteViewController:(id)arg1 didCancelRequest:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 didSelectProviderWithIdentifier:(id)arg2 vetoHandler:(id /* block */)arg3;
- (void)viewServiceRemoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)viewServiceRemoteViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;

@end
