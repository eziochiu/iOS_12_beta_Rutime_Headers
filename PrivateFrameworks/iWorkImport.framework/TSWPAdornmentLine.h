/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPAdornmentLine : NSObject <NSCopying> {
    int  _adornmentLocation;
    bool  _allowAntialiasing;
    struct CGColor { } * _color;
    <TSKCGColorProvider> * _colorProvider;
    bool  _isWhitespace;
    double  _length;
    unsigned long long  _lineCount;
    struct CGPoint { 
        double x; 
        double y; 
    }  _start;
    double  _thickness;
    int  _underline;
    double  _underlineAdjustment;
}

@property (nonatomic, readonly) int adornmentLocation;
@property (nonatomic, readonly) bool allowAntialiasing;
@property (nonatomic, readonly) struct CGColor { }*color;
@property (nonatomic, readonly) <TSKCGColorProvider> *colorProvider;
@property (nonatomic, readonly) bool isWhitespace;
@property (nonatomic, readonly) double length;
@property (nonatomic, readonly) unsigned long long lineCount;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } start;
@property (nonatomic, readonly) double thickness;
@property (nonatomic, readonly) int underline;
@property (nonatomic, readonly) double underlineAdjustment;

- (void).cxx_destruct;
- (int)adornmentLocation;
- (bool)allowAntialiasing;
- (struct CGColor { }*)color;
- (id)colorProvider;
- (id)copyWithColor:(struct CGColor { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithStart:(struct CGPoint { double x1; double x2; })arg1 length:(double)arg2 color:(struct CGColor { }*)arg3 thickness:(double)arg4 lineCount:(unsigned long long)arg5 underline:(int)arg6 adornmentLocation:(int)arg7 underLineAdjustment:(double)arg8;
- (id)initWithStart:(struct CGPoint { double x1; double x2; })arg1 length:(double)arg2 color:(struct CGColor { }*)arg3 thickness:(double)arg4 lineCount:(unsigned long long)arg5 underline:(int)arg6 adornmentLocation:(int)arg7 underLineAdjustment:(double)arg8 isWhitespace:(bool)arg9 colorProvider:(id)arg10 allowAntialiasing:(bool)arg11;
- (bool)isWhitespace;
- (double)length;
- (unsigned long long)lineCount;
- (bool)merge:(id)arg1;
- (void)setStart:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })start;
- (double)thickness;
- (int)underline;
- (double)underlineAdjustment;

@end
