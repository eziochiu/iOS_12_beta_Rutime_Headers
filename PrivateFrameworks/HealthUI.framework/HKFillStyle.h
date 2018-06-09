/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKFillStyle : NSObject <NSCopying> {
    UIImage * _cachedImage;
}

- (void).cxx_destruct;
- (bool)_needsRenderForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_renderCacheIfNecessaryForHeight:(double)arg1;
- (void)_renderCacheIfNecessaryForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_renderCacheIfNecessaryForWidth:(double)arg1;
- (void)_renderInContext:(struct CGContext { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fillImageWithHeight:(double)arg1;
- (id)fillImageWithWidth:(double)arg1;

@end
