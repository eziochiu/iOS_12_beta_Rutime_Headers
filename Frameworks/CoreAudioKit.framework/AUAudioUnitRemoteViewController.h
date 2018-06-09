/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface AUAudioUnitRemoteViewController : _UIRemoteViewController <AUAudioUnitHostViewProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_fetchViewController:(id)arg1 requestIdentifier:(id)arg2 completion:(id /* block */)arg3;
+ (void)_fetchViewControllerForExtension:(id)arg1 inputItems:(id)arg2 completion:(id /* block */)arg3;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end
