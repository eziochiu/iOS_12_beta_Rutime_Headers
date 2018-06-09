/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUICASpringAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying> {
    double  _damping;
    double  _mass;
    double  _stiffness;
    <CCUIAnimationTimingFunctionDescription> * _timingFunction;
}

@property (nonatomic, readonly) double damping;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double mass;
@property (nonatomic, readonly) double stiffness;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) <CCUIAnimationTimingFunctionDescription> *timingFunction;

- (void).cxx_destruct;
- (id)_initWithAnimationParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)damping;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (double)mass;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)stiffness;
- (id)timingFunction;

@end
