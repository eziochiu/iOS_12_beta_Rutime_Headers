/* made by EzioChiu.
 */

@protocol CNUIPRLikenessProvider <NSObject>

@optional

- (struct CGImage { }*)_cnui_circularImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (PRLikeness *)_cnui_likeness;
- (PRLikeness *)_cnui_likenessForSize:(struct CGSize { double x1; double x2; })arg1;
- (PRLikeness *)_cnui_likenessForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)_cnui_likenessType;
- (struct CGImage { }*)_cnui_roundedRectImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;

@end
