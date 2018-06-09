/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardBIUImageGenerator : NSObject {
    UIImage * _biuBoldImage;
    UIImage * _biuItalicImage;
    UIImage * _biuUnderlineImage;
    NSMutableDictionary * _imageCache;
    UIColor * _normalColor;
    UIColor * _tintColor;
    bool  _useButtonShapes;
}

@property (nonatomic, retain) UIColor *normalColor;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)BIUImageForBold:(bool)arg1 italic:(bool)arg2 underline:(bool)arg3;
- (void)_accessibilitySettingsChanged:(id)arg1;
- (void)_drawBIUAtSize:(struct CGSize { double x1; double x2; })arg1 bold:(bool)arg2 italic:(bool)arg3 underline:(bool)arg4;
- (void)_invalidateCache;
- (id)init;
- (id)normalColor;
- (void)setNormalColor:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
