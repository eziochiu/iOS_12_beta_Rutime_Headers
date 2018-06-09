/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICGColor : UIColor {
    struct CGColor { } * _cachedColor;
}

- (struct CGColor { }*)CGColor;
- (bool)_isDeepColor;
- (double)alphaComponent;
- (id)colorSpaceName;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (bool)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4;
- (bool)getWhite:(double*)arg1 alpha:(double*)arg2;
- (unsigned long long)hash;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPatternColor;
- (void)set;
- (void)setFill;
- (void)setStroke;

@end
