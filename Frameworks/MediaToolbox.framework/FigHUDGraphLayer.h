/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigHUDGraphLayer : CALayer {
    struct __CTFont { } * _Font;
    struct CGPoint { double x1; double x2; } * _Lines;
    int  _MaxLength;
    float * _Maxes;
    float * _Mins;
    int  _NumGraphs;
    int * _NumValues;
    int * _StartIndex;
    struct __CFDictionary { } * _TextAttributes;
    float ** _Values;
    NSMutableArray * _valueLabels;
}

- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)init;
- (void)setUpGraph:(int)arg1 min:(float)arg2 max:(float)arg3 numValues:(int)arg4;
- (void)setUpGraphs:(int)arg1;
- (void)updateValue:(int)arg1 value:(float)arg2;
- (void)updateValue:(int)arg1 value:(float)arg2 label:(id)arg3;

@end
