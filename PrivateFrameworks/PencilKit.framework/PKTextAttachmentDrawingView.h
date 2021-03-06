/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKTextAttachmentDrawingView : _UITextAttachmentDrawingView <PKTextAttachmentView, UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    PKTextAttachmentDrawingResizeView * _bottomResizeView;
    bool  _inserted;
    CALayer * _linesLayer;
    UITapGestureRecognizer * _menuTapGestureRecognizer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _originalContentInset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalDrawingBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _originalViewBounds;
    UIPanGestureRecognizer * _resizeDragGestureRecognizer;
    PKTextAttachmentDrawingViewTouchRecognizer * _resizeHighlightGestureRecognizer;
    bool  _resizeUpper;
    NSTextAttachment * _textAttachment;
    struct CGPoint { 
        double x; 
        double y; 
    }  _textViewContentOffsetStartLocation;
    UIScrollView * _tileMaskView;
    UIView * _tileScaleView;
    PKTextAttachmentDrawingResizeView * _topResizeView;
    double  _zoomScale;
    struct CGPoint { 
        double x; 
        double y; 
    }  _zoomStartLocationInAttachment;
    struct CGPoint { 
        double x; 
        double y; 
    }  _zoomStartLocationInWindow;
    double  _zoomStartScale;
    bool  _zoomingProgramatically;
}

@property (nonatomic, retain) PKTextAttachmentDrawingResizeView *bottomResizeView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double drawingAspectRatio;
@property (nonatomic, readonly) bool drawingMenuVisible;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawingVisibleSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inserted;
@property (nonatomic, readonly) bool isAtBeginningOfDocument;
@property (nonatomic, retain) CALayer *linesLayer;
@property (nonatomic, retain) UITapGestureRecognizer *menuTapGestureRecognizer;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } originalContentInset;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originalDrawingBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } originalViewBounds;
@property (nonatomic, retain) UIPanGestureRecognizer *resizeDragGestureRecognizer;
@property (nonatomic, retain) PKTextAttachmentDrawingViewTouchRecognizer *resizeHighlightGestureRecognizer;
@property (nonatomic) bool resizeUpper;
@property (readonly) Class superclass;
@property (nonatomic) NSTextAttachment *textAttachment;
@property (nonatomic) struct CGPoint { double x1; double x2; } textViewContentOffsetStartLocation;
@property (nonatomic, readonly) UIView *tileScaleView;
@property (nonatomic, retain) PKTextAttachmentDrawingResizeView *topResizeView;
@property (nonatomic) double zoomScale;
@property (nonatomic) struct CGPoint { double x1; double x2; } zoomStartLocationInAttachment;
@property (nonatomic) struct CGPoint { double x1; double x2; } zoomStartLocationInWindow;
@property (nonatomic) double zoomStartScale;
@property (nonatomic) bool zoomingProgramatically;

- (void).cxx_destruct;
- (void)_adjustResizeIndicatorVisiblity;
- (void)_adjustResizeIndicatorVisiblity:(bool)arg1;
- (long long)_characterIndex;
- (void)_setHeight:(double)arg1 originalHeight:(double)arg2 growFromTop:(bool)arg3;
- (void)_share:(id)arg1;
- (id)_textView;
- (void)_triggerRedraw;
- (void)_updateAttachmentBounds;
- (bool)becomeFirstResponder;
- (id)bottomResizeView;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)copyStrokeSelection:(id)arg1;
- (void)cut:(id)arg1;
- (void)cutStrokeSelection:(id)arg1;
- (id)dataForTextAttachment:(id)arg1;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)deleteStrokeSelection:(id)arg1;
- (void)didMoveToSuperview;
- (void)drawLines;
- (double)drawingAspectRatio;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingBounds;
- (void)drawingDataDidChange:(id)arg1;
- (void)drawingDidChange;
- (bool)drawingMenuVisible;
- (void)drawingScrollViewDidScroll:(id)arg1;
- (struct CGSize { double x1; double x2; })drawingVisibleSize;
- (void)drawingWillBegin;
- (void)fingerDrawingEnabledDidChange;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldDelayLift:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)higlightResize:(id)arg1;
- (bool)hitChrome:(struct CGPoint { double x1; double x2; })arg1 isStylus:(bool)arg2;
- (bool)hitTestResizeHandles:(struct CGPoint { double x1; double x2; })arg1 threshold:(double)arg2;
- (id)init;
- (id)initWithAttachment:(id)arg1 inserted:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)inserted;
- (bool)isAtBeginningOfDocument;
- (bool)isAtEndOfDocument;
- (id)keyCommands;
- (void)layoutSubviews;
- (void)layoutTileViews;
- (id)linesLayer;
- (void)menuDidHide:(id)arg1;
- (id)menuTapGestureRecognizer;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })originalContentInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalDrawingBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })originalViewBounds;
- (void)paste:(id)arg1;
- (void)resetZoom;
- (bool)resignFirstResponder;
- (id)resizeDragGestureRecognizer;
- (void)resizeDrawing:(id)arg1;
- (id)resizeHighlightGestureRecognizer;
- (bool)resizeUpper;
- (void)scaleDrawing:(double)arg1;
- (void)scaleDrawing:(double)arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2 animated:(bool)arg3;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setBottomResizeView:(id)arg1;
- (void)setContentHidden:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInserted:(bool)arg1;
- (void)setLinesLayer:(id)arg1;
- (void)setMenuTapGestureRecognizer:(id)arg1;
- (void)setOriginalContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOriginalDrawingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOriginalViewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setResizeDragGestureRecognizer:(id)arg1;
- (void)setResizeHighlightGestureRecognizer:(id)arg1;
- (void)setResizeUpper:(bool)arg1;
- (void)setTextAttachment:(id)arg1;
- (void)setTextViewContentOffsetStartLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTopResizeView:(id)arg1;
- (void)setZoomScale:(double)arg1;
- (void)setZoomStartLocationInAttachment:(struct CGPoint { double x1; double x2; })arg1;
- (void)setZoomStartLocationInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (void)setZoomStartScale:(double)arg1;
- (void)setZoomingProgramatically:(bool)arg1;
- (void)showDrawingMenu:(id)arg1;
- (id)textAttachment;
- (struct CGPoint { double x1; double x2; })textViewContentOffsetStartLocation;
- (id)tileMaskView;
- (id)tileScaleView;
- (id)topResizeView;
- (void)updateDrawingHeight:(double)arg1;
- (void)updateDrawingHeight:(double)arg1 notifyDrawingDidChange:(bool)arg2;
- (void)updateFrameForTextContainer;
- (void)updateTileContainerViewFrame;
- (id)viewForZoomingInScrollView:(id)arg1;
- (double)zoomScale;
- (struct CGPoint { double x1; double x2; })zoomStartLocationInAttachment;
- (struct CGPoint { double x1; double x2; })zoomStartLocationInWindow;
- (double)zoomStartScale;
- (bool)zoomingProgramatically;

@end
