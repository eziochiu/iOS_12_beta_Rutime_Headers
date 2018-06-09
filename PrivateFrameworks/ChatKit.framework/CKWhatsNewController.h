/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKWhatsNewController : NSObject <CKWhatsNewViewControllerDelegate, IMCloudKitEventHandler> {
    UIViewController * _controllerToPresentFrom;
    <CKWhatsNewControllerDelegate> * _delegate;
    CKWhatsNewViewController * _presentedViewController;
    IMCloudKitSyncState * _syncState;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) UIViewController *controllerToPresentFrom;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKWhatsNewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKWhatsNewViewController *presentedViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) IMCloudKitSyncState *syncState;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (void)_beginCallerIDWhatsNew;
- (void)_beginFlowForCallerIDWhatsNew;
- (void)_beginMOCFlowForState:(id)arg1;
- (void)_beginMOCWhatsNew;
- (void)_beginSurfWhatsNew;
- (void)_dismissPresentedViewControllerIfNeeded;
- (void)_presentViewController:(id)arg1;
- (bool)_shouldPresentCallerID;
- (bool)_shouldPresentMOC;
- (bool)_shouldPresentSurf;
- (void)_tryToEnableHSA2;
- (void)_tryToEnableMOC;
- (void)_writeDefaultWhatsNewDidShow;
- (id)controllerToPresentFrom;
- (id)delegate;
- (id)init;
- (id)initWithPresentationViewController:(id)arg1;
- (id)initWithPresentationViewController:(id)arg1 userDefaults:(id)arg2 cloudKitHooks:(id)arg3;
- (void)presentViewControllerIfNeeded;
- (id)presentedViewController;
- (void)setDelegate:(id)arg1;
- (void)setPresentedViewController:(id)arg1;
- (void)setSyncState:(id)arg1;
- (id)syncState;
- (id)userDefaults;
- (void)whatsNewConfirmPressed;
- (void)whatsNewNotNowButtonPressed;

@end
