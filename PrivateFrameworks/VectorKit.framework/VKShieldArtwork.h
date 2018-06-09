/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKShieldArtwork : NSObject {
    struct CGImage { } * _backgroundImage;
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    NSCache * _imageCache;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _imageCacheLock;
    double  _lineHeight;
    double  _lineSpacing;
    id /* block */  _newContext;
    struct __CTFont { } * _nonDigitFont;
    struct CGColor { } * _nonDigitFontColor;
    bool  _resizable;
    struct { 
        double leftCapWidth; 
        double rightCapWidth; 
        double leftPadding; 
        double rightPadding; 
    }  _resizableInfo;
    double  _scale;
    struct CGColor { } * _shadowColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    double  _shadowRadius;
    NSDictionary * _stringAttributes;
    struct CGContext { } * _templateContext;
    double  _textBaseline;
    double  _textCenterOffsetX;
    NSMutableDictionary * _textSpecificArtworks;
}

@property (nonatomic, readonly) double scale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithBackgroundImage:(struct CGImage { }*)arg1 contentScale:(double)arg2 resizableInfo:(struct { double x1; double x2; double x3; double x4; }*)arg3 font:(struct __CTFont { }*)arg4 nonDigitFont:(struct __CTFont { }*)arg5 textColor:(struct CGColor { }*)arg6 nonDigitTextColor:(struct CGColor { }*)arg7 textCenterOffsetX:(double)arg8 textBaseline:(double)arg9 textStrokeWidth:(double)arg10 textStrokeColor:(struct CGColor { }*)arg11 textShadowOffset:(struct CGSize { double x1; double x2; })arg12 textShadowRadius:(double)arg13 textShadowColor:(struct CGColor { }*)arg14 lineSpacing:(double)arg15;
- (void)dealloc;
- (id)imageWithShieldText:(id)arg1;
- (id)imageWithShieldText:(id)arg1 allowMultiline:(bool)arg2;
- (id)imageWithShieldText:(id)arg1 allowMultiline:(bool)arg2 widthPaddingMultiple:(double)arg3;
- (id)imageWithShieldText:(id)arg1 widthPaddingMultiple:(double)arg2;
- (id)initWithBackgroundImage:(struct CGImage { }*)arg1 contentScale:(double)arg2 font:(struct __CTFont { }*)arg3 nonDigitFont:(struct __CTFont { }*)arg4 textColor:(struct CGColor { }*)arg5 nonDigitTextColor:(struct CGColor { }*)arg6 textCenterOffsetX:(double)arg7 textBaseline:(double)arg8 textStrokeWidth:(double)arg9 textStrokeColor:(struct CGColor { }*)arg10 textShadowOffset:(struct CGSize { double x1; double x2; })arg11 textShadowRadius:(double)arg12 textShadowColor:(struct CGColor { }*)arg13;
- (id)initWithPackedVariant:(id)arg1 backgroundImage:(struct CGImage { }*)arg2 scale:(double)arg3 colors:(struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; }*)arg4;
- (id)initWithResizableBackgroundImage:(struct CGImage { }*)arg1 resizableInfo:(struct { double x1; double x2; double x3; double x4; }*)arg2 contentScale:(double)arg3 font:(struct __CTFont { }*)arg4 nonDigitFont:(struct __CTFont { }*)arg5 textColor:(struct CGColor { }*)arg6 nonDigitTextColor:(struct CGColor { }*)arg7 textCenterOffsetX:(double)arg8 textBaseline:(double)arg9 textStrokeWidth:(double)arg10 textStrokeColor:(struct CGColor { }*)arg11 textShadowOffset:(struct CGSize { double x1; double x2; })arg12 textShadowRadius:(double)arg13 textShadowColor:(struct CGColor { }*)arg14 lineSpacing:(double)arg15;
- (id)initWithScale:(double)arg1;
- (struct CGImage { }*)newImageWithShieldText:(id)arg1 allowMultiline:(bool)arg2 widthPaddingMultiple:(double)arg3 centerPoint:(struct CGPoint { double x1; double x2; }*)arg4;
- (double)scale;
- (void)setTextSpecificArtwork:(id)arg1 forStrings:(id)arg2;

@end
