/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICInlineDrawingTextAttachment : ICBaseTextAttachment <PKTextAttachment> {
    ICInlineDrawingChangeCoalescer * _changeCoalescer;
    UIView * _inlineDrawingView;
}

@property (nonatomic, retain) ICInlineDrawingChangeCoalescer *changeCoalescer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIView *inlineDrawingView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attachmentAsNSTextAttachment;
- (bool)canDragWithoutSelecting;
- (id)changeCoalescer;
- (id)contents;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (void)drawingDataDidChange:(id)arg1;
- (id)inlineDrawingView;
- (void)placeView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)printableTextContent;
- (void)resetZoom;
- (void)saveIfNeeded;
- (void)setChangeCoalescer:(id)arg1;
- (void)setInlineDrawingView:(id)arg1;

@end
