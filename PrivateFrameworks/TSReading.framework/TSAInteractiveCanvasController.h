/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSAInteractiveCanvasController : TSWPInteractiveCanvasController {
    TSAAnnotationController * _annotationController;
    bool  _supportsAnnotations;
    TSDDrawableInfo * mInfoBeingDragInserted;
}

@property (nonatomic, readonly) TSAAnnotationController *annotationController;
@property (nonatomic, retain) TSDDrawableInfo *infoBeingDragInserted;
@property (nonatomic, readonly) bool supportsAnnotations;
@property (nonatomic, readonly) bool wantsCanvasReferenceController;

- (id)additionalVisibleInfosForCanvas:(id)arg1;
- (id)annotationController;
- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)dealloc;
- (void)didSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(bool)arg3;
- (void)handleHyperlinkGesture:(id)arg1;
- (bool)hasEmptyWPSelection;
- (bool)hasInspectableSelection;
- (id)infoBeingDragInserted;
- (void)loadDocument;
- (id)p_activeTextRep;
- (bool)requiresSimilarInfos;
- (void)selectAll:(id)arg1;
- (void)setInfoBeingDragInserted:(id)arg1;
- (bool)supportsAnnotations;
- (void)teardown;
- (void)unloadDocument;
- (bool)wantsCanvasReferenceController;
- (bool)wantsHyperlinkGestureRecognizer;
- (void)willSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(bool)arg3;

@end
