/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAStateAddAnimation : CAStateElement {
    CAAnimation * _animation;
    NSString * _key;
}

@property (nonatomic, retain) CAAnimation *animation;
@property (nonatomic, copy) NSString *key;

+ (bool)supportsSecureCoding;

- (id)CAMLTypeForKey:(id)arg1;
- (id)animation;
- (void)apply:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)keyPath;
- (bool)matches:(id)arg1;
- (void)setAnimation:(id)arg1;
- (void)setKey:(id)arg1;

@end
