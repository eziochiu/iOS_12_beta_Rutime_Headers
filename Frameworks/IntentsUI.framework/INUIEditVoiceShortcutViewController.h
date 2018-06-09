/* made by EzioChiu
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface INUIEditVoiceShortcutViewController : UIViewController <INUIVoiceShortcutRemoteViewControllerEditDelegate> {
    <INUIEditVoiceShortcutViewControllerDelegate> * _delegate;
    INUIVoiceShortcutHostViewController * _remoteHostViewController;
}

@property (nonatomic, retain) INUIVoiceShortcutHostViewController *_remoteHostViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUIEditVoiceShortcutViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_remoteHostViewController;
- (id)delegate;
- (id)initWithVoiceShortcut:(id)arg1;
- (void)loadView;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;
- (void)remoteViewControllerDidEditVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)remoteViewControllerEditDidCacnel;
- (void)setDelegate:(id)arg1;
- (void)set_remoteHostViewController:(id)arg1;

@end
