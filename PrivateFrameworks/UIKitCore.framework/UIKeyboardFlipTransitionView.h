/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardFlipTransitionView : UIKeyboardSplitTransitionView {
    CALayer * _backDarkening;
    CALayer * _backDarkeningLeft;
    CALayer * _backDarkeningRight;
    CALayer * _backFace;
    CALayer * _container;
    NSMutableDictionary * _controlKeys;
    UIKBCacheToken * _endKeyplaneToken;
    CALayer * _frontDarkening;
    CALayer * _frontFace;
    struct { 
        unsigned int shiftKeys : 1; 
        unsigned int returnKeys : 1; 
        unsigned int moreIntlKeys : 1; 
    }  _rebuildFlags;
    bool  _showingFrontFace;
    UIKBCacheToken * _startKeyplaneToken;
}

@property (getter=isShowingFrontFace, nonatomic) bool showingFrontFace;

- (void)_delayedUpdateTransition;
- (void)_flipToFront:(bool)arg1 animated:(bool)arg2;
- (void)dealloc;
- (struct CGImage { }*)defaultKeyboardImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingFrontFace;
- (void)rebuildBackgroundTransition;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (void)rebuildControlSlicesForKeyName:(id)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;
- (void)rebuildMoreIntlKeys;
- (void)rebuildReturnSlices;
- (void)rebuildShiftSlices;
- (void)rebuildTransition;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShowingFrontFace:(bool)arg1;
- (struct CGImage { }*)splitKeyboardImage;
- (bool)transitionIsVisible;
- (void)updateMoreIntlKey:(id)arg1 asStart:(bool)arg2 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 showIntl:(bool)arg4 showDictKey:(bool)arg5;
- (void)updateTransition;

@end
