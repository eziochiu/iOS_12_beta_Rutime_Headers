/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageTemplate : TSPObject <TPMasterDrawableProvider, TSDDrawableContainerInfo, TSKDocumentObject, TSKModel, TSKModelRootIndexProvider, TSSPropertySource, TSWPStorageParentStatisticsFilter> {
    TSDFill * _backgroundFill;
    TPDrawablesZOrder * _drawablesZOrder;
    bool  _headersFootersMatchPreviousPage;
    bool  _hideHeadersFooters;
    NSMutableArray * _masterDrawables;
    NSString * _name;
    NSMutableDictionary * _placeholderDrawables;
}

@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (nonatomic, retain) TSDFill *backgroundFill;
@property (nonatomic, readonly) NSArray *childInfos;
@property (nonatomic, readonly) unsigned long long countOfMasterDrawables;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TPDrawablesZOrder *drawablesZOrder;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool headersFootersMatchPreviousPage;
@property (nonatomic) bool hideHeadersFooters;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic, retain) NSMutableArray *masterDrawables;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfDerivedPagesInDocument;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic, retain) NSMutableDictionary *placeholderDrawables;
@property (readonly) Class superclass;

+ (bool)isUserDefinedTag:(id)arg1;
+ (bool)needsObjectUUID;

- (void).cxx_destruct;
- (double)CGFloatValueForProperty:(int)arg1;
- (void)addMasterDrawable:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(bool)arg4;
- (void)addMasterDrawables:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(bool)arg4;
- (void)applyTag:(id)arg1 toPlaceholder:(id)arg2;
- (id)backgroundFill;
- (id)boxedObjectForProperty:(int)arg1;
- (id)childEnumerator;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (bool)containsModelObject:(id)arg1;
- (bool)containsProperty:(int)arg1;
- (id)copyWithContext:(id)arg1;
- (unsigned long long)countOfMasterDrawables;
- (id)description;
- (double)doubleValueForProperty:(int)arg1;
- (id)drawablesZOrder;
- (void)enumeratePlaceholderDrawablesWithBlock:(id /* block */)arg1;
- (float)floatValueForProperty:(int)arg1;
- (id)geometry;
- (bool)headersFootersMatchPreviousPage;
- (bool)hideHeadersFooters;
- (double)highestScaleFactorForRenderingDrawableInfo:(id)arg1;
- (unsigned long long)indexOfMasterDrawable:(id)arg1;
- (id)infoForSelectionPath:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 placeholderDrawables:(id)arg3 placeholderTagsInZOrder:(id)arg4 masterDrawables:(id)arg5;
- (int)intValueForProperty:(int)arg1;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isSelectable;
- (bool)isThemeContent;
- (bool)isUniqueTag:(id)arg1;
- (Class)layoutClass;
- (void)loadFromUnarchiver:(id)arg1;
- (id)masterDrawables;
- (id)masterDrawablesSortedByZOrder:(id)arg1;
- (long long)modelRootIndex;
- (id)name;
- (unsigned long long)numberOfDerivedPagesInDocument;
- (id)objectForProperty:(int)arg1;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (id)parentInfo;
- (id)placeholderDrawables;
- (void)removeMasterDrawable:(id)arg1 suppressDOLC:(bool)arg2;
- (Class)repClass;
- (void)saveToArchiver:(id)arg1;
- (void)setBackgroundFill:(id)arg1;
- (void)setDrawablesZOrder:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setHeadersFootersMatchPreviousPage:(bool)arg1;
- (void)setHideHeadersFooters:(bool)arg1;
- (void)setMasterDrawables:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setPlaceholderDrawables:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;
- (bool)statisticsShouldExcludeContainedStorage:(id)arg1;
- (id)tagForDrawable:(id)arg1;
- (unsigned long long)templateIndex;
- (unsigned long long)templatePreviewPageIndex;
- (id)topLevelParentInfoForInfo:(id)arg1;
- (id)userDefinedTagForDrawable:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
