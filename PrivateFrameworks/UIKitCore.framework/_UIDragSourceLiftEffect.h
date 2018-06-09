/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDragSourceLiftEffect : NSObject <UIDragInteractionEffect> {
    NSMapTable * _liftOperationByContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_installInteractionPlattersForOperation:(id)arg1;
- (void)_setInteractionEffectsLifted:(bool)arg1 withOperation:(id)arg2;
- (void)_uninstallInteractionPlattersForOperation:(id)arg1;
- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;

@end
