/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UILayoutManagerBasedDraggableGeometry : NSObject <UITextDraggableGeometry, UITextDraggableGeometryFastSameViewOperationsSupporting> {
    long long  _geometryOptions;
    NSLayoutManager * _layoutManager;
    UIView<UITextDragSupporting><UITextDropSupporting> * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long geometryOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLayoutManager *layoutManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView<UITextDragSupporting><UITextDropSupporting> *view;

- (void).cxx_destruct;
- (id)_draggableTextInRange:(id)arg1;
- (bool)_isUsableLink:(id)arg1;
- (id /* block */)_previewProviderForTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)_renderTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 image:(out id*)arg2 boundingRectangles:(out id*)arg3 forLifting:(bool)arg4;
- (id /* block */)_targetedPreviewProviderForImage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id /* block */)_targetedPreviewProviderForTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id /* block */)_targetedPreviewProviderForTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 overrideLifting:(id /* block */)arg2;
- (struct CGPoint { double x1; double x2; })_textOriginOffsetForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_textRectForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inView:(id)arg2;
- (id)_textStorage;
- (id)attributedStringsForTextRanges:(id)arg1;
- (id)draggableObjectsForTextRange:(id)arg1;
- (long long)geometryOptions;
- (id)initWithView:(id)arg1 layoutManager:(id)arg2;
- (id)layoutManager;
- (id)performSameViewDropOperation:(id)arg1;
- (id)previewForDroppingText:(id)arg1 toPosition:(id)arg2 inContainerView:(id)arg3;
- (void)setGeometryOptions:(long long)arg1;
- (id)textRangeForAttachmentInTextRange:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)textRangesForAttachmentsInTextRange:(id)arg1;
- (id)view;

@end
