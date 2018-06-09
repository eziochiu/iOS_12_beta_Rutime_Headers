/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAutoSizedCanvasController : NSObject <STTextTangierInteractiveCanvasControllerDelegate, TSWPEditingControllerDelegate> {
    <SXComponentActionHandler> * _actionHandler;
    STTextTangierCanvasViewController * _cvc;
    <SXAutoSizedCanvasControllerDelegate> * _delegate;
    TSKDocumentRoot * _documentRoot;
    <SXTangierDragItemProvider> * _dragItemProvider;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    STTextTangierInteractiveCanvasController * _icc;
    double  _lineHeight;
}

@property (nonatomic, readonly) <SXComponentActionHandler> *actionHandler;
@property (nonatomic, readonly) bool allowEditMenuToAppear;
@property (nonatomic, readonly) bool allowTextEditingToBegin;
@property (nonatomic, readonly) TSDCanvasView *canvasView;
@property (nonatomic, readonly) STTextTangierCanvasViewController *cvc;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXAutoSizedCanvasControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSKDocumentRoot *documentRoot;
@property (nonatomic, readonly) <SXTangierDragItemProvider> *dragItemProvider;
@property (nonatomic, readonly) bool editorAllowsCaret;
@property (nonatomic, readonly) bool editorAllowsEditMenu;
@property (nonatomic, readonly) bool editorAllowsHyperlinkInteraction;
@property (nonatomic, readonly) bool editorAllowsKeyboard;
@property (nonatomic, readonly) bool editorAllowsListInteraction;
@property (nonatomic, readonly) bool editorAllowsMagnifier;
@property (nonatomic, readonly) bool editorAllowsParagraphMode;
@property (nonatomic, readonly) bool editorAllowsRubyInteraction;
@property (nonatomic, readonly) bool editorShouldAlwaysBeInParagraphMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) STTextTangierInteractiveCanvasController *icc;
@property (nonatomic, readonly) bool interactiveCanvasControllerAllowsHyperlinkInteraction;
@property (nonatomic, readonly) bool isCanvasInteractive;
@property (nonatomic, readonly) bool isPrintingCanvas;
@property (nonatomic, readonly) double lineHeight;
@property (nonatomic, readonly) bool shouldClipToScrollViewBoundsInVisibleBounds;
@property (nonatomic, readonly) bool shouldPopKnobsOutsideEnclosingScrollView;
@property (nonatomic, readonly) bool shouldResizeCanvasToScrollView;
@property (nonatomic, readonly) bool shouldShowInstructionalText;
@property (nonatomic, readonly) bool shouldShowTextOverflowGlyphs;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeOfScrollViewEnclosingCanvas;
@property (nonatomic, readonly) bool spellCheckingSupported;
@property (nonatomic, readonly) bool spellCheckingSuppressed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionHandler;
- (bool)allowCopy;
- (bool)allowHighlighting;
- (bool)allowSelectionPopover;
- (id)canvasView;
- (id)cvc;
- (id)delegate;
- (id)documentRoot;
- (id)dragItemProvider;
- (bool)editorAllowsCaret;
- (bool)editorAllowsEditMenu;
- (id)icc;
- (id)initWithDocumentRoot:(id)arg1 actionHandler:(id)arg2 dragItemProvider:(id)arg3;
- (id)interactiveCanvasController:(id)arg1 dragItemForSmartField:(id)arg2 interaction:(id)arg3 session:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })interactiveCanvasController:(id)arg1 expandVisibleBoundsForTiling:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)interactiveCanvasController:(id)arg1 interactedWithHyperlink:(id)arg2 info:(id)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 touchPoint:(struct CGPoint { double x1; double x2; })arg5 touchAndHold:(bool)arg6;
- (void)invalidateLayoutsAndFrames;
- (bool)isCanvasInteractive;
- (double)lineHeight;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits;
- (void)teardown;
- (Class)wpEditorClassOverride;

@end