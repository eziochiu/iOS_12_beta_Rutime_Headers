/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTransitionSafetyDelegate : NSObject <UINavigationControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;

@end
