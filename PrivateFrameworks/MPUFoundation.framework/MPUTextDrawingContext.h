/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUTextDrawingContext : NSObject {
    NSAttributedString * _attributedText;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundingSize;
    double  _firstBaselineOffsetFromTop;
    UIImage * _image;
    double  _lastBaselineOffsetFromBottom;
    NSStringDrawingContext * _stringDrawingContext;
    long long  _stringDrawingOptions;
    NSString * _text;
    NSDictionary * _uniformTextAttributes;
}

@property (setter=_setAttributedText:, nonatomic, copy) NSAttributedString *attributedText;
@property (setter=_setBoundingSize:, nonatomic) struct CGSize { double x1; double x2; } boundingSize;
@property (setter=_setFirstBaselineOffsetFromTop:, nonatomic) double firstBaselineOffsetFromTop;
@property (getter=_image, setter=_setImage:, nonatomic, retain) UIImage *image;
@property (setter=_setLastBaselineOffsetFromBottom:, nonatomic) double lastBaselineOffsetFromBottom;
@property (setter=_setStringDrawingContext:, nonatomic, retain) NSStringDrawingContext *stringDrawingContext;
@property (setter=_setStringDrawingOptions:, nonatomic) long long stringDrawingOptions;
@property (setter=_setText:, nonatomic, copy) NSString *text;
@property (setter=_setUniformTextAttributes:, nonatomic, copy) NSDictionary *uniformTextAttributes;

- (void).cxx_destruct;
- (id)_image;
- (void)_setAttributedText:(id)arg1;
- (void)_setBoundingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setFirstBaselineOffsetFromTop:(double)arg1;
- (void)_setImage:(id)arg1;
- (void)_setLastBaselineOffsetFromBottom:(double)arg1;
- (void)_setStringDrawingContext:(id)arg1;
- (void)_setStringDrawingOptions:(long long)arg1;
- (void)_setText:(id)arg1;
- (void)_setUniformTextAttributes:(id)arg1;
- (id)attributedText;
- (struct CGSize { double x1; double x2; })boundingSize;
- (double)firstBaselineOffsetFromTop;
- (double)lastBaselineOffsetFromBottom;
- (id)stringDrawingContext;
- (long long)stringDrawingOptions;
- (id)text;
- (id)uniformTextAttributes;

@end
