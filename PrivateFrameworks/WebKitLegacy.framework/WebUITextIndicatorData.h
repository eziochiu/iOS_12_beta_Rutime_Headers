/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebUITextIndicatorData : NSObject {
    UIImage * _contentImage;
    double  _contentImageScaleFactor;
    UIImage * _contentImageWithHighlight;
    UIImage * _contentImageWithoutSelection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentImageWithoutSelectionRectInRootViewCoordinates;
    UIImage * _dataInteractionImage;
    UIColor * _estimatedBackgroundColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _selectionRectInRootViewCoordinates;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _textBoundingRectInRootViewCoordinates;
    NSArray * _textRectsInBoundingRectCoordinates;
}

@property (nonatomic, retain) UIImage *contentImage;
@property (nonatomic) double contentImageScaleFactor;
@property (nonatomic, retain) UIImage *contentImageWithHighlight;
@property (nonatomic, retain) UIImage *contentImageWithoutSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentImageWithoutSelectionRectInRootViewCoordinates;
@property (nonatomic, retain) UIImage *dataInteractionImage;
@property (nonatomic, retain) UIColor *estimatedBackgroundColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } selectionRectInRootViewCoordinates;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textBoundingRectInRootViewCoordinates;
@property (nonatomic, retain) NSArray *textRectsInBoundingRectCoordinates;

- (id)contentImage;
- (double)contentImageScaleFactor;
- (id)contentImageWithHighlight;
- (id)contentImageWithoutSelection;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentImageWithoutSelectionRectInRootViewCoordinates;
- (id)dataInteractionImage;
- (void)dealloc;
- (id)estimatedBackgroundColor;
- (id)initWithImage:(struct CGImage { }*)arg1 scale:(double)arg2;
- (id)initWithImage:(struct CGImage { }*)arg1 textIndicatorData:(const struct TextIndicatorData { struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct FloatRect { struct FloatPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct FloatSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { struct FloatRect {} *x_4_1_1; unsigned int x_4_1_2; unsigned int x_4_1_3; } x4; float x5; struct RefPtr<WebCore::Image, WTF::DumbPtrTraits<WebCore::Image> > { struct Image {} *x_6_1_1; } x6; struct RefPtr<WebCore::Image, WTF::DumbPtrTraits<WebCore::Image> > { struct Image {} *x_7_1_1; } x7; struct RefPtr<WebCore::Image, WTF::DumbPtrTraits<WebCore::Image> > { struct Image {} *x_8_1_1; } x8; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_9_1_1; } x9; unsigned char x10; unsigned short x11; }*)arg2 scale:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionRectInRootViewCoordinates;
- (void)setContentImage:(id)arg1;
- (void)setContentImageScaleFactor:(double)arg1;
- (void)setContentImageWithHighlight:(id)arg1;
- (void)setContentImageWithoutSelection:(id)arg1;
- (void)setContentImageWithoutSelectionRectInRootViewCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDataInteractionImage:(id)arg1;
- (void)setEstimatedBackgroundColor:(id)arg1;
- (void)setSelectionRectInRootViewCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextBoundingRectInRootViewCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextRectsInBoundingRectCoordinates:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textBoundingRectInRootViewCoordinates;
- (id)textRectsInBoundingRectCoordinates;

@end
