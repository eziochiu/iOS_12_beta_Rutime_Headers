/* made by EzioChiu
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface INUIAddVoiceShortcutViewController : UIViewController <INUIVoiceShortcutRemoteViewControllerAddDelegate> {
    <INUIAddVoiceShortcutViewControllerDelegate> * _delegate;
    INUIVoiceShortcutHostViewController * _remoteHostViewController;
    INShortcut * _shortcut;
}

@property (nonatomic, retain) INUIVoiceShortcutHostViewController *_remoteHostViewController;
@property (nonatomic, retain) INShortcut *_shortcut;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUIAddVoiceShortcutViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_remoteHostViewController;
- (id)_shortcut;
- (id)delegate;
- (id)initWithShortcut:(id)arg1;
- (void)loadView;
- (void)remoteViewControllerAddDidCacnel;
- (void)remoteViewControllerDidAddVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)set_remoteHostViewController:(id)arg1;
- (void)set_shortcut:(id)arg1;

@end
