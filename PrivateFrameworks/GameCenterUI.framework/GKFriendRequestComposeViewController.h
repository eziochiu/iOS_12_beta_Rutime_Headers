/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKFriendRequestComposeViewController : UINavigationController {
    UIAlertController * _alertController;
    <GKFriendRequestComposeViewControllerDelegate> * _composeViewDelegateWeak;
    NSString * _message;
    unsigned long long  _recipientCount;
    unsigned int  _rid;
}

@property (nonatomic, retain) UIAlertController *alertController;
@property (nonatomic) <GKFriendRequestComposeViewControllerDelegate> *composeViewDelegate;
@property (nonatomic, copy) NSString *message;
@property (nonatomic) unsigned long long recipientCount;
@property (nonatomic) unsigned int rid;

+ (bool)_preventsAppearanceProxyCustomization;
+ (unsigned long long)maxNumberOfRecipients;

- (void)_addRecipientInternals:(id)arg1;
- (void)_setupChildViewController;
- (void)addRecipientPlayers:(id)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (id)alertController;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (id)composeViewDelegate;
- (void)dealloc;
- (id)init;
- (id)message;
- (void)prepareForNewRecipients:(id)arg1;
- (unsigned long long)recipientCount;
- (unsigned int)rid;
- (void)sendFinishedMessageToDelegateCancelled:(bool)arg1;
- (void)setAlertController:(id)arg1;
- (void)setComposeViewDelegate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setRecipientCount:(unsigned long long)arg1;
- (void)setRid:(unsigned int)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldAutomaticallyForwardRotationMethods;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
