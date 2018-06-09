/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebFrameView : WAKView <WebCoreFrameView> {
    WebFrameViewPrivate * _private;
}

@property (nonatomic) bool allowsScrolling;
@property (nonatomic, readonly) WAKView<WebDocumentView> *documentView;
@property (nonatomic, readonly) bool documentViewShouldHandlePrint;
@property (nonatomic, readonly) WebFrame *webFrame;

+ (bool)_canShowMIMETypeAsHTML:(id)arg1;
+ (Class)_viewClassForMIMEType:(id)arg1 allowingPlugins:(bool)arg2;
+ (id)_viewTypesAllowImageTypeOmission:(bool)arg1;

- (float)_area;
- (id)_contentView;
- (Class)_customScrollViewClass;
- (bool)_firstResponderIsFormControl;
- (void)_forwardMouseEvent:(id)arg1;
- (void)_frameSizeChanged;
- (void)_goBack;
- (void)_goForward;
- (bool)_hasScrollBars;
- (float)_horizontalKeyboardScrollDistance;
- (float)_horizontalPageScrollDistance;
- (void)_install;
- (bool)_isFlippedDocument;
- (bool)_isScrollable;
- (bool)_isVerticalDocument;
- (id)_largestChildWithScrollBars;
- (id)_largestScrollableChild;
- (id)_makeDocumentViewForDataSource:(id)arg1;
- (bool)_pageHorizontally:(bool)arg1;
- (bool)_pageInBlockProgressionDirection:(bool)arg1;
- (bool)_pageVertically:(bool)arg1;
- (bool)_scrollHorizontallyBy:(float)arg1;
- (bool)_scrollLineHorizontally:(bool)arg1;
- (bool)_scrollLineVertically:(bool)arg1;
- (bool)_scrollOverflowInDirection:(unsigned char)arg1 granularity:(unsigned char)arg2;
- (bool)_scrollToBeginningOfDocument;
- (bool)_scrollToEndOfDocument;
- (bool)_scrollVerticallyBy:(float)arg1;
- (id)_scrollView;
- (void)_setDocumentView:(id)arg1;
- (void)_setWebFrame:(id)arg1;
- (float)_verticalKeyboardScrollDistance;
- (float)_verticalPageScrollDistance;
- (Class)_viewClassForMIMEType:(id)arg1;
- (id)_webView;
- (struct Frame { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct Ref<WebCore::WindowProxy, WTF::DumbPtrTraits<WebCore::WindowProxy> > { struct WindowProxy {} *x_3_1_1; } x3; struct HashSet<WebCore::FrameDestructionObserver *, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct HashTable<WebCore::FrameDestructionObserver *, WebCore::FrameDestructionObserver *, WTF::IdentityExtractor, WTF::PtrHash<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *>, WTF::HashTraits<WebCore::FrameDestructionObserver *> > { struct FrameDestructionObserver {} **x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_4_1_1; } x4; struct Frame {} *x5; struct Page {} *x6; struct RefPtr<WebCore::Settings, WTF::DumbPtrTraits<WebCore::Settings> > { struct Settings {} *x_7_1_1; } x7; struct FrameTree { struct Frame {} *x_8_1_1; struct Frame {} *x_8_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_8_1_3; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_4_2_1; } x_8_1_4; struct RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> > { struct Frame {} *x_5_2_1; } x_8_1_5; struct Frame {} *x_8_1_6; struct RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> > { struct Frame {} *x_7_2_1; } x_8_1_7; struct Frame {} *x_8_1_8; unsigned int x_8_1_9; unsigned long long x_8_1_10; } x8; }*)_web_frame;
- (id)_webcore_effectiveFirstResponder;
- (bool)acceptsFirstResponder;
- (bool)allowsScrolling;
- (bool)becomeFirstResponder;
- (void)dealloc;
- (id)documentView;
- (bool)documentViewShouldHandlePrint;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)frameSizeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOpaque;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)printDocumentView;
- (void)scrollLineDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (void)scrollToEndOfDocument:(id)arg1;
- (bool)scrollView:(id)arg1 shouldScrollToPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAllowsScrolling:(bool)arg1;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNextKeyView:(id)arg1;
- (void)viewDidMoveToWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (id)webFrame;

@end
