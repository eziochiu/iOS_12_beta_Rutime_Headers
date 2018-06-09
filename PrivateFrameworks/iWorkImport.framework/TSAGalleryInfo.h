/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAGalleryInfo : TSDDrawableInfo <TSDCompatibilityAwareMediaContainer, TSDContainerInfo, TSDMixing, TSDModelContainer, TSDReducibleImageContainer, TSWPStorageParent> {
    TSDMediaStyle * _archivedImageStyle;
    long long  _captionMode;
    TSWPStorage * _captionStorage;
    bool  _isInDocument;
    NSArray * _items;
}

@property (getter=isAnchoredToText, nonatomic, readonly) bool anchoredToText;
@property (getter=isAttachedToBodyText, nonatomic, readonly) bool attachedToBodyText;
@property (nonatomic, readonly) bool autoListRecognition;
@property (nonatomic, readonly) bool autoListTermination;
@property (nonatomic) long long captionMode;
@property (nonatomic, readonly) TSWPStorage *captionStorage;
@property (nonatomic, readonly) NSArray *childInfos;
@property (nonatomic, readonly) NSArray *containedModels;
@property (nonatomic, readonly) long long contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFloatingAboveText, nonatomic, readonly) bool floatingAboveText;
@property (nonatomic, copy) TSDInfoGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (getter=isInlineWithText, nonatomic, readonly) bool inlineWithText;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic) bool matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic, readonly) bool preventsChangeTracking;
@property (nonatomic, readonly) bool preventsComments;
@property (nonatomic, readonly) bool storageChangesInvalidateWrap;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsCollaborativeEditing;
@property (nonatomic, readonly) bool supportsMultipleColumns;
@property (nonatomic, readonly) bool textIsLinked;
@property (nonatomic, readonly) bool textIsVertical;

+ (void)addDefaultGalleryCaptionParagraphStyleIfNeededWithFontSize:(double)arg1 toStylesheet:(id)arg2;
+ (id)defaultGalleryCaptionParagraphStyleInStylesheet:(id)arg1;
+ (Class)drawableInfoSubclassForClass:(Class)arg1 unarchiver:(id)arg2;
+ (id)i_newCaptionStorageWithContext:(id)arg1;
+ (id)p_defaultCaptionParagraphStylePropertiesWithFontSize:(double)arg1;
+ (id)p_overrideCaptionParagraphStyleIdentifier;
+ (id)p_paragraphStyleWithLocalizedNameKey:(id)arg1 inStylesheet:(id)arg2;
+ (bool)p_stylesAreEqualForOutgoingStorage:(id)arg1 incomingStorage:(id)arg2;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)animationFilters;
- (bool)autoListRecognition;
- (bool)autoListTermination;
- (long long)captionMode;
- (id)captionStorage;
- (id)childEnumerator;
- (id)childEnumeratorForUserSearch;
- (id)childInfos;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (id)containedModels;
- (long long)contentWritingDirection;
- (id)copyWithContext:(id)arg1;
- (int)elementKind;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 captionStorage:(id)arg3;
- (void)insertContainedModel:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isSelectable;
- (id)items;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct ImageArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)moveModel:(id)arg1 toIndex:(unsigned long long)arg2;
- (bool)needsDownload;
- (bool)preventsChangeTracking;
- (bool)preventsComments;
- (void)removeContainedModel:(id)arg1;
- (Class)repClass;
- (void)saveToArchive:(struct ImageArchive { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setCaptionMode:(long long)arg1;
- (void)setCaptionStorage:(id)arg1;
- (void)setItems:(id)arg1;
- (bool)storageChangesInvalidateWrap;
- (bool)supportsMultipleColumns;
- (bool)supportsParentRotation;
- (struct CGSize { double x1; double x2; })targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (bool)textIsLinked;
- (bool)textIsVertical;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
