/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVMonogramDescription : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    double  _borderWidth;
    double  _cornerRadius;
    UIColor * _fillColor;
    NSString * _firstName;
    UIFont * _font;
    bool  _hasPlaceholder;
    NSURL * _imageURL;
    NSString * _lastName;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    <IKNetworkRequestLoader> * _requestLoader;
    long long  _scaleMode;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    NSString * _text;
    double  _upscaleAdjustment;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIColor *fillColor;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) UIFont *font;
@property (nonatomic) bool hasPlaceholder;
@property (nonatomic, readonly, copy) NSURL *imageURL;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) <IKNetworkRequestLoader> *requestLoader;
@property (nonatomic) long long scaleMode;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) double upscaleAdjustment;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)borderColor;
- (double)borderWidth;
- (id)copyWithType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (id)fillColor;
- (id)firstName;
- (id)font;
- (bool)hasPlaceholder;
- (id)imageURL;
- (id)init;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4;
- (id)lastName;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (unsigned long long)preferedMonogramType;
- (id)requestLoader;
- (long long)scaleMode;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setHasPlaceholder:(bool)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setRequestLoader:(id)arg1;
- (void)setScaleMode:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setText:(id)arg1;
- (void)setUpscaleAdjustment:(double)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)text;
- (double)upscaleAdjustment;

@end
