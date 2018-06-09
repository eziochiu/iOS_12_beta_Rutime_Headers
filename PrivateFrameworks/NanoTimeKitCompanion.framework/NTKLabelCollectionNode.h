/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKLabelCollectionNode : NTKCollectionNode {
    double  _color;
    long long  _faceStyle;
    long long  _font;
    double  _fontSize;
    unsigned int  _labels;
    unsigned int  _multiple;
    bool  _paddedWithZeros;
    const struct NTKLabelPosition { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; long long x2; long long x3; } * _positions;
    unsigned int  _repeat;
    unsigned int  _start;
}

@property (nonatomic) double color;
@property (nonatomic) long long faceStyle;
@property (nonatomic) long long font;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned int labels;
@property (nonatomic) unsigned int multiple;
@property (nonatomic) bool paddedWithZeros;
@property (nonatomic) const struct NTKLabelPosition { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; long long x2; long long x3; }*positions;
@property (nonatomic) unsigned int repeat;
@property (nonatomic) unsigned int start;

+ (void)applyLabelPosition:(const struct NTKLabelPosition { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; long long x2; long long x3; }*)arg1 toNode:(id)arg2 forDevice:(id)arg3;
+ (void)applyLabelPosition:(const struct NTKLabelPosition { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; long long x2; long long x3; }*)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2 toNode:(id)arg3 forDevice:(id)arg4;
+ (void)applyLabelPositions:(const struct NTKLabelPosition { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; long long x2; long long x3; }*)arg1 toNodes:(id)arg2 forDevice:(id)arg3;
+ (void)applyLabelPositions:(const struct NTKLabelPosition { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; long long x2; long long x3; }*)arg1 withCenter:(struct CGPoint { double x1; double x2; })arg2 toNodes:(id)arg3 forDevice:(id)arg4;

- (void)applyAppearanceFraction:(double)arg1 inverted:(bool)arg2;
- (double)color;
- (void)colorize:(id)arg1;
- (void)createSubNodes;
- (long long)faceStyle;
- (long long)font;
- (double)fontSize;
- (id)initForDevice:(id)arg1;
- (unsigned int)labels;
- (unsigned int)multiple;
- (bool)paddedWithZeros;
- (const struct NTKLabelPosition { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; long long x2; long long x3; }*)positions;
- (unsigned int)repeat;
- (void)setColor:(double)arg1;
- (void)setFaceStyle:(long long)arg1;
- (void)setFont:(long long)arg1;
- (void)setFontSize:(double)arg1;
- (void)setLabels:(unsigned int)arg1;
- (void)setMultiple:(unsigned int)arg1;
- (void)setPaddedWithZeros:(bool)arg1;
- (void)setPositions:(const struct NTKLabelPosition { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; long long x2; long long x3; }*)arg1;
- (void)setRepeat:(unsigned int)arg1;
- (void)setStart:(unsigned int)arg1;
- (unsigned int)start;
- (void)updateLabelNodePositions;

@end
