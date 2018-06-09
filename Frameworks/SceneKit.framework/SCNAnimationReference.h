/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAnimationReference : CAAnimationGroup {
    NSString * referenceName;
}

@property (nonatomic, copy) NSString *referenceName;

- (bool)_isAReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)referenceName;
- (void)setReferenceName:(id)arg1;

@end
