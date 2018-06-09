/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WBReader : OCBReader {
    struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } * mAnnotationBookmarkTable;
    NSMutableArray * mAnnotationOwners;
    id  mAnnotationRangeStart;
    struct WrdAnnotationTable { int (**x1)(); struct ChVector<WrdAnnotation *> { struct WrdAnnotation {} **x_2_1_1; struct WrdAnnotation {} **x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; } * mAnnotationTable;
    NSMutableDictionary * mBookmarkIndexToAnnotationRangeStartMap;
    struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } * mBookmarkTable;
    struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } * mEndnoteTable;
    struct WrdEshObjectFactory { int (**x1)(); bool x2; } * mEshObjectFactory;
    struct WrdFieldPositionTable {} * mFieldPositionTables;
    struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } * mFileShapeAddressHeaderTable;
    struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } * mFileShapeAddressTable;
    struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } * mFootnoteTable;
    struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } * mHeaderStoryTable;
    OITSUNoCopyDictionary * mIndexToFonts;
    OITSUNoCopyDictionary * mIndexToStyles;
    struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; } x3; } * mLastRowParagraphProperties;
    WBOfficeArtReaderState * mOfficeArtState;
    bool  mReportProgress;
    struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } * mStoryTable;
    struct WrdCPTableHeaders { int (**x1)(); struct ChVector<int> { int *x_2_1_1; int *x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; } * mTableHeaders;
    WDDocument * mTargetDocument;
    struct vector<WBTextBoxReaderInfo, std::__1::allocator<WBTextBoxReaderInfo> > { struct WBTextBoxReaderInfo {} *x1; struct WBTextBoxReaderInfo {} *x2; struct __compressed_pair<WBTextBoxReaderInfo *, std::__1::allocator<WBTextBoxReaderInfo> > { struct WBTextBoxReaderInfo {} *x_3_1_1; } x3; } * mTextBoxes;
}

@property (nonatomic) WDDocument *targetDocument;

- (void)addFont:(id)arg1 index:(int)arg2;
- (void)addStyle:(id)arg1 index:(int)arg2;
- (struct OCCBinaryStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { }*)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)annotationBookmarkTable;
- (id)annotationOwner:(int)arg1;
- (id)annotationRangeStart;
- (id)annotationRangeStartForBookmarkIndex:(unsigned long long)arg1;
- (struct WrdAnnotationTable { int (**x1)(); struct ChVector<WrdAnnotation *> { struct WrdAnnotation {} **x_2_1_1; struct WrdAnnotation {} **x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; }*)annotationTable;
- (struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)bookmarkTable;
- (void)cacheTextBox:(id)arg1 withChainIndex:(unsigned short)arg2;
- (void)dealloc;
- (id)drawableForShapeId:(unsigned int)arg1;
- (struct OCCEncryptionInfoReader { int (**x1)(); }*)encryptionInfoReader;
- (struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)endnoteTable;
- (struct WrdEshObjectFactory { int (**x1)(); bool x2; }*)eshObjectFactory;
- (struct WrdFieldPositionTable { int (**x1)(); int x2; struct ChVector<WrdFieldPosition *> { struct WrdFieldPosition {} **x_3_1_1; struct WrdFieldPosition {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fieldPositionTableForTextType:(int)arg1;
- (struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fileShapeAddressHeaderTable;
- (struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fileShapeAddressTable;
- (id)fontAtIndex:(int)arg1;
- (struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)footnoteTable;
- (struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)headerStoryTable;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (void)initialize;
- (struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; } x3; }*)lastRowParagraphProperties;
- (id)officeArtState;
- (id)read;
- (id)readCharactersForTextRun:(struct WrdTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)readCharactersFrom:(unsigned int)arg1 to:(unsigned int)arg2 textType:(int)arg3;
- (bool)reportProgress;
- (void)setAnnotationRangeStart:(id)arg1;
- (void)setAnnotationRangeStart:(id)arg1 forBookmarkIndex:(unsigned long long)arg2;
- (void)setLastRowParagraphProperties:(struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; } x3; }*)arg1;
- (void)setOfficeArtState:(id)arg1;
- (void)setReportProgress:(bool)arg1;
- (void)setTargetDocument:(id)arg1;
- (bool)start;
- (struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)storyTable;
- (id)styleAtIndex:(int)arg1;
- (id)styleAtIndex:(int)arg1 expectedType:(int)arg2;
- (struct WrdCPTableHeaders { int (**x1)(); struct ChVector<int> { int *x_2_1_1; int *x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; }*)tableHeaders;
- (id)targetDocument;
- (unsigned long long)textBoxCount;
- (struct WBTextBoxReaderInfo { id x1; })textBoxInfoAtIndex:(unsigned long long)arg1;
- (struct WrdBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct WrdParser {} *x5; struct WrdEshReader { int (**x_6_1_1)(); struct SsrwOOStream {} *x_6_1_2; struct EshParserVisitor {} *x_6_1_3; struct EshObjectFactory {} *x_6_1_4; unsigned int x_6_1_5; unsigned int x_6_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_6_1_7; unsigned int x_6_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_6_1_9; bool x_6_1_10; } x6; struct WrdRdrText {} *x7; struct WrdBinTable {} *x8; struct WrdPAPXFKP {} *x9; unsigned int x10; struct WrdBinTable {} *x11; struct WrdCHPXFKP {} *x12; unsigned int x13; int x14; struct WrdSectionDescriptorTable {} *x15; struct WrdStyleSheet {} *x16; struct WrdEmbeddedTTFRecordTable {} *x17; struct WrdDocumentFileRecord {} *x18; struct ChMap<unsigned int, unsigned int, CsLess<unsigned int> > { struct map<unsigned int, unsigned int, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int> > > { struct __tree<std::__1::__value_type<unsigned int, unsigned int>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, unsigned int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, unsigned int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, unsigned int>, CsLess<unsigned int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_19_1_1; } x19[8]; }*)wrdReader;

@end
