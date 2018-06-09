/* made by EzioChiu.
 */

@protocol TSDCanvasEditor <TSDEditor, TSDSubcommandProvider, TSDTextInput>

@required

+ (<TSDCanvasSelection> *)canvasSelectionWithInfos:(NSSet *)arg1;
+ (<TSDCanvasSelection> *)canvasSelectionWithInfos:(NSSet *)arg1 andContainer:(TSDDrawableInfo<TSDContainerInfo> *)arg2;

- (bool)canGroupDrawable:(TSDDrawableInfo *)arg1;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canvasEditorCanCopyStyleWithSender:(id)arg1;
- (bool)canvasEditorCanCopyWithSender:(id)arg1;
- (bool)canvasEditorCanCutWithSender:(id)arg1;
- (bool)canvasEditorCanDeleteWithSender:(id)arg1;
- (bool)canvasEditorCanDuplicateWithSender:(id)arg1;
- (bool)canvasEditorCanGroupWithSender:(id)arg1;
- (bool)canvasEditorCanSelectAllWithSender:(id)arg1;
- (bool)canvasEditorCanUngroupWithSender:(id)arg1;
- (TSDCanvasEditorHelper *)canvasEditorHelper;
- (void)canvasInfosDidChange;
- (TSKSelection<TSDCanvasSelection> *)canvasSelection;
- (<TSDCanvasSelection> *)canvasSelectionWithInfos:(NSSet *)arg1;
- (<TSDCanvasSelection> *)canvasSelectionWithInfos:(NSSet *)arg1 andContainer:(TSDDrawableInfo<TSDContainerInfo> *)arg2;
- (void)connectWithConnectionLine:(id)arg1;
- (void)copy:(id)arg1;
- (void)copyToPasteboard:(TSPPasteboard *)arg1 withSender:(id)arg2;
- (unsigned long long)countOfDrawables;
- (NSArray *)drawables;
- (NSObject<TSDEditor> *)editorToPopToOnEndEditing;
- (id)initWithInteractiveCanvasController:(TSDInteractiveCanvasController *)arg1;
- (TSDInteractiveCanvasController *)interactiveCanvasController;
- (bool)isRepSelectable:(TSDRep *)arg1;
- (bool)isSelectedInfo:(NSObject<TSDInfo> *)arg1;
- (TSPObject *)modelForSelection;
- (void)repWasCreated:(TSDRep *)arg1;
- (void)select:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setSelection:(TSKSelection *)arg1 withFlags:(unsigned long long)arg2;
- (void)setSelectionToInfo:(TSDDrawableInfo *)arg1;
- (void)setSelectionToInfos:(NSSet *)arg1;
- (void)setSelectionToRep:(TSDRep *)arg1;
- (bool)shouldPushNewEditorForNewSelection;
- (bool)shouldUseAlternateSelectionHighlight;
- (void)teardown;

@optional

- (TSDExteriorTextWrap *)exteriorTextWrapForInfos:(NSSet *)arg1;
- (void)setExteriorTextWrap:(TSDExteriorTextWrap *)arg1 forInfos:(NSSet *)arg2;
- (void)setExteriorTextWrapMargin:(double)arg1 forInfos:(NSSet *)arg2;

@end
