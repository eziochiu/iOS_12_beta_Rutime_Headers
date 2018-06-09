/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCAPropertyAnimationContextCache : TSDCAAnimationContextCache {
    bool  _isAnimationKeyDoubleSided;
    bool  _isAnimationKeyHidden;
    bool  _isAnimationKeyTypeOfRotation;
    bool  _isObjectTypeCGColor;
    NSString * _keyPath;
}

@property (nonatomic, readonly) bool isAnimationKeyDoubleSided;
@property (nonatomic, readonly) bool isAnimationKeyHidden;
@property (nonatomic, readonly) bool isAnimationKeyTypeOfRotation;
@property (nonatomic) bool isObjectTypeCGColor;
@property (nonatomic, readonly) NSString *keyPath;

- (id)adjustedResultWithValue:(id)arg1;
- (id)initWithAnimation:(id)arg1;
- (id)interpolatedValueFrom:(id)arg1 to:(id)arg2 percent:(double)arg3;
- (bool)isAnimationKeyDoubleSided;
- (bool)isAnimationKeyHidden;
- (bool)isAnimationKeyTypeOfRotation;
- (bool)isObjectTypeCGColor;
- (id)keyPath;
- (void)setIsObjectTypeCGColor:(bool)arg1;
- (id)valueForKeyPath:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;

@end
