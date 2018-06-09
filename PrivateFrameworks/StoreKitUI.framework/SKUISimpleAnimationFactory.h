/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISimpleAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    CAMediaTimingFunction * _timingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)backOutTimingFunction;
+ (id)easeQuadInOutTimingFunction;
+ (id)easeQuadInTimingFunction;
+ (id)easeQuadOutTimingFunction;
+ (id)factoryWithTimingFunction:(id)arg1;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;

@end
