/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageInfo : NSObject <TSDContainerInfo, TSKModelRootIndexProvider> {
    TPBodyInfo * _bodyInfo;
    TPDocumentRoot * _documentRoot;
    <TPPageLayoutInfoProvider> * _layoutInfoProvider;
    unsigned long long  _pageIndex;
}

@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (nonatomic, readonly) TPBodyInfo *bodyInfo;
@property (nonatomic, readonly) NSArray *childInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TPDocumentRoot *documentRoot;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic, readonly) <TPPageLayoutInfoProvider> *layoutInfoProvider;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic, readonly) unsigned long long pageIndex;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;

+ (unsigned long long)documentSetupLeftSidePageIndex;
+ (unsigned long long)documentSetupPageIndex;
+ (unsigned long long)documentSetupRightSidePageIndex;
+ (bool)hasBodyInfo;
+ (bool)isAlternativePageIndex:(unsigned long long)arg1 documentRoot:(id)arg2;
+ (bool)isDocSetupPageIndex:(unsigned long long)arg1;
+ (bool)isPageTemplatePageIndex:(unsigned long long)arg1 documentRoot:(id)arg2;
+ (unsigned long long)pageIndexFromPageTemplateIndex:(unsigned long long)arg1;
+ (unsigned long long)pageTemplateIndexFromPageIndex:(unsigned long long)arg1 documentRoot:(id)arg2;

- (void).cxx_destruct;
- (id)bodyInfo;
- (id)childInfos;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)documentRoot;
- (id)geometry;
- (unsigned long long)hash;
- (id)infoForSelectionPath:(id)arg1;
- (id)initWithPageIndex:(unsigned long long)arg1 documentRoot:(id)arg2 layoutInfoProvider:(id)arg3;
- (bool)isAnchoredToText;
- (bool)isAttachedToBodyText;
- (bool)isEqual:(id)arg1;
- (bool)isFloatingAboveText;
- (bool)isInlineWithText;
- (bool)isSelectable;
- (bool)isThemeContent;
- (Class)layoutClass;
- (id)layoutInfoProvider;
- (long long)modelRootIndex;
- (id)owningAttachment;
- (id)owningAttachmentNoRecurse;
- (unsigned long long)pageIndex;
- (id)parentInfo;
- (Class)repClass;
- (void)setGeometry:(id)arg1;
- (void)setOwningAttachment:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setPrimitiveGeometry:(id)arg1;

@end
