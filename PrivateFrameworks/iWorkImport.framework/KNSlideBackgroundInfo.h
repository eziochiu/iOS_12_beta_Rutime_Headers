/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideBackgroundInfo : NSObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject> {
    TSSPropertySetChangeDetails * _changes;
    TSDInfoGeometry * _geometry;
    NSObject<TSDContainerInfo> * _parentInfo;
    KNAbstractSlide * _slide;
}

@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TSDFill *fill;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic, readonly) bool isUserModifiable;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic, readonly) KNAbstractSlide *slide;
@property (readonly) Class superclass;

+ (id)backgroundWithSlide:(id)arg1 andGeometry:(id)arg2;

- (void).cxx_destruct;
- (void)beginCollectingChanges;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)copyWithContext:(id)arg1;
- (id)endCollectingChanges;
- (id)fill;
- (id)geometry;
- (id)initWithSlide:(id)arg1 andGeometry:(id)arg2;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isSelectable;
- (bool)isThemeContent;
- (bool)isUserModifiable;
- (Class)layoutClass;
- (struct CGSize { double x1; double x2; })minimumSize;
- (id)originalPDFDataForCopy;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (id)parentInfo;
- (Class)repClass;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
- (id)slide;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)willChangeProperty:(int)arg1;

@end
