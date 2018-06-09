/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMorphingLabelGlyphSet : NSObject {
    NSAttributedString * _attributedString;
    unsigned long long  _glyphCount;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _glyphFrames;
    struct CGPoint { double x1; double x2; } * _glyphPositions;
    NSMutableArray * _glyphViews;
    unsigned short * _glyphs;
    UIMorphingLabel * _label;
    struct __CTLine { } * _line;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lineOrigin;
    double  _lineWidth;
}

@property (nonatomic, readonly) NSAttributedString *attributedString;
@property (nonatomic, readonly) unsigned long long glyphCount;
@property (nonatomic, readonly) const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*glyphFrames;
@property (nonatomic, readonly) const struct CGPoint { double x1; double x2; }*glyphPositions;
@property (nonatomic, readonly) NSArray *glyphViews;
@property (nonatomic, readonly) const unsigned short*glyphs;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } lineOrigin;
@property (nonatomic, readonly) double lineWidth;

- (id)attributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForGlyphsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)buildGlyphViews;
- (void)dealloc;
- (unsigned long long)glyphCount;
- (const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)glyphFrames;
- (const struct CGPoint { double x1; double x2; }*)glyphPositions;
- (id)glyphViews;
- (const unsigned short*)glyphs;
- (id)initWithLabel:(id)arg1 attributedString:(id)arg2;
- (struct CGPoint { double x1; double x2; })lineOrigin;
- (double)lineWidth;
- (void)placeGlyphs;
- (void)removeGlyphs;

@end
