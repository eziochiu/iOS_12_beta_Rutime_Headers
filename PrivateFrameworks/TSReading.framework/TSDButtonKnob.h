/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDButtonKnob : TSDKnob {
    bool  mEnabled;
    bool  mHighlighted;
    TSUImage * mImage;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) TSUImage *image;

- (void)dealloc;
- (id)image;
- (id)initWithImage:(id)arg1 tag:(unsigned long long)arg2 onRep:(id)arg3;
- (id)initWithType:(int)arg1 position:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 tag:(unsigned long long)arg4 onRep:(id)arg5;
- (bool)isEnabled;
- (bool)isHighlighted;
- (bool)isHitByUnscaledPoint:(struct CGPoint { double x1; double x2; })arg1 andRep:(id)arg2 returningDistance:(double*)arg3;
- (id)knobImage;
- (void)p_updateLayerImage;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;

@end
