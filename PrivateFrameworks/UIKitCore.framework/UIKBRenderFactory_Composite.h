/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone {
    UIKBRenderFactory * _overlayFactory;
}

- (Class)_overlayFactoryClass;
- (void)dealloc;
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(bool)arg2;
- (bool)isTallPopup;
- (double)popupFontSize;
- (struct CGPoint { double x1; double x2; })popupSymbolTextOffset;
- (struct CGPoint { double x1; double x2; })variantAnnotationTextOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })variantPaddedFrameInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })variantSymbolFrameInsets;
- (struct CGPoint { double x1; double x2; })variantSymbolTextOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })wideShadowPaddleInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })wideShadowPopupMenuInsets;

@end
