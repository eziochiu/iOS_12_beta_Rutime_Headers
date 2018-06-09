/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionViewSpringLoadedEffect : NSObject <UISpringLoadedInteractionEffect> {
    <UISpringLoadedInteractionEffect> * _blinkEffect;
}

@property (nonatomic, retain) <UISpringLoadedInteractionEffect> *blinkEffect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)blinkEffect;
- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)setBlinkEffect:(id)arg1;

@end
