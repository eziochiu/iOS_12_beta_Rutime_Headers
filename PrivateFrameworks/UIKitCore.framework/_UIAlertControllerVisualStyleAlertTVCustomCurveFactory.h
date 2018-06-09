/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAlertControllerVisualStyleAlertTVCustomCurveFactory : NSObject <_UIBasicAnimationFactory> {
    unsigned long long  _curve;
}

@property (nonatomic) unsigned long long curve;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (unsigned long long)curve;
- (id)init;
- (id)initWithCustomCurve:(unsigned long long)arg1;
- (void)setCurve:(unsigned long long)arg1;

@end
