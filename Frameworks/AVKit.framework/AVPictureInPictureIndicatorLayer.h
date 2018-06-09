/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPictureInPictureIndicatorLayer : CALayer {
    NSAttributedString * _attributedText;
    double  _baselineOffset;
    CALayer * _imageLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _languageAwareOutsets;
    double  _lineHeight;
    CATextLayer * _textLayer;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithTraitCollection:(id)arg1 opaque:(bool)arg2;
- (void)layoutSublayers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textBoundingRectWhenDrawnInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
