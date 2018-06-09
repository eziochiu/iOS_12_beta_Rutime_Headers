/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
 */

@interface EMKLayoutManager : NSLayoutManager {
    NSMutableAttributedString * _attributes;
    UIColor * _currentColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _currentOffset;
    double  _currentScale;
    UIColor * _currentShadowColor;
    bool  _emojiConversionActive;
    bool  _emojiConversionEnabled;
    NSArray * _emojiConversionLanguages;
    EMKTextEnumerator * _enumerator;
    NSMutableData * _glyphIndexTable;
    EMKGlyphRippler * _rippler;
}

@property (getter=isEmojiConversionEnabled) bool emojiConversionEnabled;

- (void).cxx_destruct;
- (id)attributes;
- (bool)convertGlyphIndex:(unsigned long long)arg1 toAttributeRelativeGlyphIndex:(unsigned long long*)arg2 numberOfAttributedGlyphs:(unsigned long long*)arg3;
- (void)drawAttributedGlyphsForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)emojiConversionLanguages;
- (void)flushGlyphIndexTable;
- (id)init;
- (bool)isEmojiAnimationActive;
- (bool)isEmojiConversionActive;
- (bool)isEmojiConversionEnabled;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (void)setDelayFrames:(unsigned long long)arg1;
- (void)setEmojiConversionActive:(bool)arg1;
- (void)setEmojiConversionEnabled:(bool)arg1;
- (void)setEmojiConversionLanguages:(id)arg1;
- (void)setPostFrames:(unsigned long long)arg1;
- (void)setPreFrames:(unsigned long long)arg1;
- (void)showCGGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { double x1; double x2; }*)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5 attributes:(id)arg6 inContext:(struct CGContext { }*)arg7;
- (void)startOrStopTimer;

@end
