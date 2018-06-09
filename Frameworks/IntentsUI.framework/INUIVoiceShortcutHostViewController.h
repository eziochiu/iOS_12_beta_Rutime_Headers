/* made by EzioChiu
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface INUIVoiceShortcutHostViewController : _UIRemoteViewController <INUIVoiceShortcutRemoteHostingInterface> {
    <INUIVoiceShortcutRemoteViewControllerAddDelegate> * _addDelegate;
    <INUIVoiceShortcutRemoteViewControllerEditDelegate> * _editDelegate;
    long long  _mode;
}

@property (nonatomic) <INUIVoiceShortcutRemoteViewControllerAddDelegate> *addDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <INUIVoiceShortcutRemoteViewControllerEditDelegate> *editDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (readonly) Class superclass;

+ (id)_voiceShortcutUIExtension;
+ (id)exportedInterface;
+ (void)getViewControllerCompletion:(id /* block */)arg1;
+ (void)getViewControllerForAddingShortcut:(id)arg1 completion:(id /* block */)arg2;
+ (void)getViewControllerForEditingVoiceShortcut:(id)arg1 completion:(id /* block */)arg2;
+ (void)initialize;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)addDelegate;
- (id)editDelegate;
- (long long)mode;
- (void)remoteViewControllerAddDidCacnel;
- (void)remoteViewControllerDidAddVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)arg1;
- (void)remoteViewControllerDidEditVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)remoteViewControllerEditDidCacnel;
- (void)setAddDelegate:(id)arg1;
- (void)setEditDelegate:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
