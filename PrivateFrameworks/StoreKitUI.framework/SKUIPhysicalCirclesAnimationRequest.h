/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIPhysicalCirclesAnimationRequest : NSObject <NSCopying> {
    long long  _animationType;
    id /* block */  _completionBlock;
}

@property (nonatomic) long long animationType;

- (void).cxx_destruct;
- (void)_setCompletionBlock:(id /* block */)arg1;
- (long long)animationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)finishAnimation;
- (void)setAnimationType:(long long)arg1;

@end
