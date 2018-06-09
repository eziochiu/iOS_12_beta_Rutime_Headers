/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPListLabel : NSObject {
    double  _ascent;
    double  _baselineOffset;
    double  _descent;
    TSDImageProvider * _imageProvider;
    bool  _isLabelRTL;
    bool  _isLabelTateChuYoko;
    double  _labelIndent;
    NSString * _labelString;
    int  _labelType;
    double  _labelTypographicExtent;
    unsigned long long  _listNumber;
    TSDShadow * _shadow;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    const struct __CTLine { } * _textLine;
}

@property (nonatomic, readonly) double ascent;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, readonly) double descent;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) TSDImageProvider *imageProvider;
@property (nonatomic) bool isLabelRTL;
@property (nonatomic, readonly) bool isLabelTateChuYoko;
@property (nonatomic, readonly) const struct __CTFont { }*labelFont;
@property (nonatomic) double labelIndent;
@property (nonatomic, readonly) NSString *labelString;
@property (nonatomic, readonly) int labelType;
@property (nonatomic) double labelTypographicExtent;
@property (nonatomic, readonly) unsigned long long listNumber;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalImageSize;
@property (nonatomic, retain) TSDShadow *shadow;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) const struct __CTLine { }*textLine;
@property (nonatomic, readonly) double width;

- (void).cxx_destruct;
- (double)ascent;
- (double)baselineOffset;
- (void)dealloc;
- (double)descent;
- (double)height;
- (id)imageProvider;
- (id)initWithType:(int)arg1 imageProvider:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 baselineOffset:(double)arg4;
- (id)initWithType:(int)arg1 labelString:(id)arg2 textLine:(struct __CTLine { }*)arg3 listNumber:(unsigned long long)arg4 isTateChuYoko:(bool)arg5 baselineOffset:(double)arg6;
- (bool)isEqualToListLabel:(id)arg1;
- (bool)isLabelRTL;
- (bool)isLabelTateChuYoko;
- (const struct __CTFont { }*)labelFont;
- (double)labelIndent;
- (id)labelString;
- (int)labelType;
- (double)labelTypographicExtent;
- (unsigned long long)listNumber;
- (struct CGSize { double x1; double x2; })naturalImageSize;
- (void)setIsLabelRTL:(bool)arg1;
- (void)setLabelIndent:(double)arg1;
- (void)setLabelTypographicExtent:(double)arg1;
- (void)setShadow:(id)arg1;
- (id)shadow;
- (struct CGSize { double x1; double x2; })size;
- (const struct __CTLine { }*)textLine;
- (double)width;

@end
