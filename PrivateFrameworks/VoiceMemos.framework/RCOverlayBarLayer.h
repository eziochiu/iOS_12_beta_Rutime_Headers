/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCOverlayBarLayer : CALayer {
    CALayer * _bar;
    bool  _barWidthMatchesKnobs;
    CALayer * _bottomKnob;
    UIColor * _color;
    CALayer * _topKnob;
    double  _widthMultiplier;
}

@property (nonatomic) bool barWidthMatchesKnobs;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double widthMultiplier;

+ (double)selectionBarWidth;
+ (double)selectionKnobRadius;

- (void).cxx_destruct;
- (void)_loadWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(bool)arg3 bottomKnob:(bool)arg4;
- (id)barComponents;
- (bool)barWidthMatchesKnobs;
- (id)color;
- (id)initWithColor:(id)arg1 selectionExtentIncludingKnobs:(double)arg2 topKnob:(bool)arg3 bottomKnob:(bool)arg4 widthMultiplier:(double)arg5 barWidthMatchesKnobs:(bool)arg6;
- (double)selectionBarWidth;
- (double)selectionKnobRadius;
- (void)setBarWidthMatchesKnobs:(bool)arg1;
- (void)setColor:(id)arg1;
- (void)setWidthMultiplier:(double)arg1;
- (double)widthMultiplier;

@end
