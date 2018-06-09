/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPFlatVideoOverlayButton : UIButton <RPVideoOverlayButton> {
    SEL  _action;
    long long  _style;
    id  _target;
}

@property (nonatomic) SEL action;
@property (nonatomic) id target;

- (void).cxx_destruct;
- (id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3;
- (void)_handleTap:(id)arg1;
- (id)_highlightedButtonImage;
- (id)_normalButtonImage;
- (SEL)action;
- (id)initWithStyle:(long long)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;
- (id)target;

@end
