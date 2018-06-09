/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNParticlePropertyController : NSObject <NSCopying, NSSecureCoding> {
    CAAnimation * _animation;
    id  _c3dAnimation;
    double  _inputBias;
    long long  _inputMode;
    SCNNode * _inputOrigin;
    NSString * _inputProperty;
    double  _inputScale;
}

@property (nonatomic, retain) CAAnimation *animation;
@property (nonatomic) double inputBias;
@property (nonatomic) long long inputMode;
@property (nonatomic) SCNNode *inputOrigin;
@property (nonatomic, copy) NSString *inputProperty;
@property (nonatomic) double inputScale;

+ (id)controllerWithAnimation:(id)arg1;
+ (id)particlePropertyControllerWithAnimation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfSCNParticlePropertyController:(id)arg1;
- (void)_customEncodingOfSCNParticlePropertyController:(id)arg1;
- (id)animation;
- (id)c3dAnimation;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)inputBias;
- (long long)inputMode;
- (id)inputOrigin;
- (id)inputProperty;
- (double)inputScale;
- (void)setAnimation:(id)arg1;
- (void)setC3dAnimation:(id)arg1;
- (void)setInputBias:(double)arg1;
- (void)setInputMode:(long long)arg1;
- (void)setInputOrigin:(id)arg1;
- (void)setInputProperty:(id)arg1;
- (void)setInputScale:(double)arg1;

@end
