/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CAInterAppAudioSwitcherView : UIView <UIScrollViewDelegate> {
    CAIAANodeInfo * info;
    bool  isHostConnected;
    CAIAANodeContainer * nodeView;
    struct OpaqueAudioComponentInstance { } * outputUnit;
    UIPageControl * pageControl;
    NSTimer * refreshTimer;
    bool  showingAppNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isShowingAppNames) bool showingAppNames;
@property (readonly) Class superclass;

- (void)appHasGoneForeground;
- (void)appHasGoneInBackground;
- (void)audioUnitPropertyChangedListener:(void*)arg1 unit:(struct OpaqueAudioComponentInstance { }*)arg2 propID:(unsigned int)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5;
- (void)changePage:(id)arg1;
- (double)contentWidth;
- (void)didMoveToSuperview;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)initialize;
- (bool)isHostConnected;
- (bool)isShowingAppNames;
- (void)layoutSubviews;
- (void)nodePressed:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeFromSuperview;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance { }*)arg1;
- (void)setShowingAppNames:(bool)arg1;
- (void)startTimer;
- (void)updateInfo;
- (void)updateNodeList;

@end
