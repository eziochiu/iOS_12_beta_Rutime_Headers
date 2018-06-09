/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebNodeHighlightView : WAKView {
    NSMutableArray * _layers;
    WebNodeHighlight * _webNodeHighlight;
}

- (void)_attach:(id)arg1 numLayers:(unsigned long long)arg2;
- (void)_layoutForNodeHighlight:(struct Highlight { struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_1_1_1; } x1; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_2_1_1; } x2; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_3_1_1; } x3; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_4_1_1; } x4; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_5_1_1; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; bool x8; }*)arg1 parent:(id)arg2;
- (void)_layoutForRectsHighlight:(struct Highlight { struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_1_1_1; } x1; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_2_1_1; } x2; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_3_1_1; } x3; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_4_1_1; } x4; struct Color { union { unsigned long long x_1_2_1; struct ExtendedColor {} *x_1_2_2; } x_5_1_1; } x5; int x6; struct Vector<WebCore::FloatQuad, 0, WTF::CrashOnOverflow, 16> { struct FloatQuad {} *x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; } x7; bool x8; }*)arg1 parent:(id)arg2;
- (void)_removeAllLayers;
- (void)dealloc;
- (void)detachFromWebNodeHighlight;
- (id)initWithWebNodeHighlight:(id)arg1;
- (bool)isFlipped;
- (void)layoutSublayers:(id)arg1;
- (id)webNodeHighlight;

@end
