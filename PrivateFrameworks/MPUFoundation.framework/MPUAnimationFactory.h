/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    NSArray * _allowedKeyPaths;
    NSString * _fillMode;
    bool  _removedOnCompletion;
    double  _timeOffset;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic, copy) NSArray *allowedKeyPaths;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fillMode;
@property (readonly) unsigned long long hash;
@property (getter=isRemovedOnCompletion, nonatomic) bool removedOnCompletion;
@property (readonly) Class superclass;
@property (nonatomic) double timeOffset;
@property (nonatomic, retain) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (id)allowedKeyPaths;
- (id)fillMode;
- (id)init;
- (bool)isRemovedOnCompletion;
- (void)setAllowedKeyPaths:(id)arg1;
- (void)setFillMode:(id)arg1;
- (void)setRemovedOnCompletion:(bool)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setTimingFunction:(id)arg1;
- (double)timeOffset;
- (id)timingFunction;

@end
