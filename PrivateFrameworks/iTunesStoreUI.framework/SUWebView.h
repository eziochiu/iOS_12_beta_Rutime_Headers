/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUWebView : UIWebView {
    bool  _isPinned;
    UIColor * _originalBackgroundColor;
    BOOL  _originalShowsBackgroundShadow;
    double  _pinnedHeaderInsetAdjustment;
    UIView * _pinnedHeaderView;
    unsigned int  _scrollingDisabled;
    bool  _showsTopBackgroundShadow;
    long long  _synchronousLayoutCount;
    UIColor * _topBackgroundColor;
}

@property (nonatomic) <SUWebViewDelegate> *delegate;
@property (getter=isScrollingEnabled, nonatomic) bool scrollingEnabled;
@property (nonatomic) bool showsTopBackgroundShadow;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, retain) UIColor *topBackgroundColor;
@property (nonatomic, readonly) id windowScriptObject;

- (void)_setPinnedHeaderView:(id)arg1 withTopInsetAdjustment:(double)arg2;
- (void)_setRichTextReaderViewportSettings;
- (void)beginSynchronousLayout;
- (void)dealloc;
- (void)endSynchronousLayout;
- (bool)getStatusBarStyle:(long long*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isScrollingEnabled;
- (void)loadArchive:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setScrollingEnabled:(bool)arg1;
- (void)setShowsTopBackgroundShadow:(bool)arg1;
- (void)setTopBackgroundColor:(id)arg1;
- (bool)showsTopBackgroundShadow;
- (id)title;
- (id)topBackgroundColor;
- (void)view:(id)arg1 didSetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 oldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)windowScriptObject;

@end
