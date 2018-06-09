/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFullscreenCaptionView : UIView <STStandaloneTextLayoutDelegate, SXAutoSizedCanvasControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    <SXComponentActionHandler> * _actionHandler;
    <SXActionProvider> * _actionProvider;
    SXAutoSizedCanvasController * _autoSizeCanvasController;
    UIVisualEffectView * _backgroundView;
    SXFullscreenCaption * _caption;
    STStandaloneTextInfo * _captionInfo;
    STStandaloneTextLayout * _captionLayout;
    <SXFullscreenCaptionViewDelegate> * _delegate;
    STTextTangierDocumentRoot * _documentRoot;
    int  _expansionMode;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _fullInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullSize;
    UIScrollView * _scrollView;
    UISwipeGestureRecognizer * _swipeGestureRecognizer;
    UITapGestureRecognizer * _tapGestureRecognizer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _temporaryLayoutRect;
    SXTextSource * _textSource;
    STTextTangierStorage * _textStorage;
    unsigned long long  _viewIndex;
}

@property (nonatomic, readonly) <SXComponentActionHandler> *actionHandler;
@property (nonatomic, readonly) <SXActionProvider> *actionProvider;
@property (nonatomic, retain) SXAutoSizedCanvasController *autoSizeCanvasController;
@property (nonatomic, retain) UIVisualEffectView *backgroundView;
@property (nonatomic, readonly) SXFullscreenCaption *caption;
@property (nonatomic, retain) STStandaloneTextInfo *captionInfo;
@property (nonatomic, retain) STStandaloneTextLayout *captionLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXFullscreenCaptionViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) STTextTangierDocumentRoot *documentRoot;
@property (nonatomic, readonly) bool expanded;
@property (nonatomic, readonly) int expansionMode;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } fullInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } fullSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UISwipeGestureRecognizer *swipeGestureRecognizer;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } temporaryLayoutRect;
@property (nonatomic, retain) SXTextSource *textSource;
@property (nonatomic, retain) STTextTangierStorage *textStorage;
@property (nonatomic, readonly) unsigned long long viewIndex;

+ (void)_applyStyle:(id)arg1 toStorage:(id)arg2;
+ (id)_overridePropertiesWithComponentStyle:(id)arg1 storage:(id)arg2;

- (void).cxx_destruct;
- (id)actionHandler;
- (id)actionProvider;
- (id)autoSizeCanvasController;
- (id)backgroundView;
- (id)caption;
- (id)captionInfo;
- (id)captionLayout;
- (void)createBackgroundView;
- (void)createScrollView;
- (void)dealloc;
- (id)delegate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })determineFrameInSuperview:(id)arg1;
- (void)didMoveToSuperview;
- (id)documentRoot;
- (bool)expanded;
- (int)expansionMode;
- (bool)forceFullExpandsionMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameWithSuperview:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 forExpansionMode:(int)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })fullInsets;
- (struct CGSize { double x1; double x2; })fullSize;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleSwipeGestureRecognizer:(id)arg1;
- (void)handleTapGestureRecognizer:(id)arg1;
- (id)initWithActionProvider:(id)arg1 actionHandler:(id)arg2;
- (void)initializeTangier;
- (void)layoutSubviews;
- (double)marginForTextLayout:(id)arg1;
- (struct CGPoint { double x1; double x2; })positionForTextLayout:(id)arg1;
- (void)renderCaptionInTangier;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAutoSizeCanvasController:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCaptionInfo:(id)arg1;
- (void)setCaptionLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocumentRoot:(id)arg1;
- (void)setExpansionMode:(int)arg1 animated:(bool)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFullInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFullSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNeedsLayout;
- (void)setScrollView:(id)arg1;
- (void)setSwipeGestureRecognizer:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTemporaryLayoutRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextSource:(id)arg1;
- (void)setTextStorage:(id)arg1;
- (void)setupGestureRecognizers;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)swipeGestureRecognizer;
- (id)tapGestureRecognizer;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })temporaryLayoutRect;
- (id)textSource;
- (id)textStorage;
- (void)updateFrameAnimated:(bool)arg1;
- (void)updateWithCaption:(id)arg1 forViewIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (unsigned long long)viewIndex;
- (double)widthForTextLayout:(id)arg1;

@end
