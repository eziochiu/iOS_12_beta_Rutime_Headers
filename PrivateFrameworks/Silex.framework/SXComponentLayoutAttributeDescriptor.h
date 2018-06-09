/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentLayoutAttributeDescriptor : SXComponentDependencyDescriptor {
    int  _fromLayoutAttribute;
    bool  _ignoreMargins;
    int  _toLayoutAttribute;
}

@property (nonatomic) int fromLayoutAttribute;
@property (nonatomic) bool ignoreMargins;
@property (nonatomic) int toLayoutAttribute;

+ (id)descriptorWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(bool)arg3;

- (int)fromLayoutAttribute;
- (bool)ignoreMargins;
- (id)initWithFromLayoutAttribute:(int)arg1 toLayoutAttribute:(int)arg2 ignoreMargin:(bool)arg3;
- (void)setFromLayoutAttribute:(int)arg1;
- (void)setIgnoreMargins:(bool)arg1;
- (void)setToLayoutAttribute:(int)arg1;
- (int)toLayoutAttribute;

@end
