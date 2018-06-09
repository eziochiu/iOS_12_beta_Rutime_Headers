/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBPresentationReaderState : NSObject {
    unsigned int  mBulletIndex;
    <TCCancelDelegate> * mCancel;
    ESDObject * mCurrentBulletStyle;
    ESDObject * mCurrentMacCharStyle;
    struct ChVector<int> { int *x1; int *x2; unsigned int x3; unsigned int x4; unsigned int x5; } * mCurrentSlideTextBlockStartIndexVector;
    ESDRoot * mDocumentRoot;
    NSMutableArray * mFontEntities;
    bool  mHasCharacterPropertyBulletIndex;
    bool  mHasSlideNumberPlaceholder;
    struct __CFDictionary { } * mHyperlinkMap;
    PBOfficeArtReaderState * mOfficeArtState;
    PBOutlineBulletDictionary * mPlaceholderBulletStyles;
    PBOutlineBulletDictionary * mPlaceholderMacCharStyles;
    struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; bool x12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_25_1_1; } x25; } * mPptBinaryReader;
    NSMutableArray * mSlideIndexes;
    OITSUNoCopyDictionary * mSlideMasterToMasterStyles;
    PBSlideState * mSlideState;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } * mSrcCurrentMasterStyleInfoVector;
    struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; } * mSrcDocMasterStyleInfoVector;
    unsigned int  mSrcSlideId;
    ESDContainer * mSrcSlideListHolder;
    NSMutableDictionary * mTargetShapeToSourceTextBoxContainerHolderMap;
    PDPresentation * mTgtPresentation;
    PDSlideBase * mTgtSlide;
}

@property (nonatomic, retain) <TCCancelDelegate> *cancelDelegate;
@property bool hasSlideNumberPlaceholder;
@property ESDContainer *sourceSlideListHolder;

- (void)addFontEntity:(id)arg1 charSet:(int)arg2 type:(int)arg3 family:(int)arg4;
- (void)addSlideIndex:(unsigned long long)arg1;
- (unsigned int)bulletIndex;
- (id)cancelDelegate;
- (id)currentBulletStyle;
- (id)currentMacCharStyle;
- (struct ChVector<int> { int *x1; int *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)currentSlideTextBlockStartIndexVector;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom {} *x1; struct PptTextMasterStyle9Atom {} *x2; }*)currentSourceMasterStyleInfoOfType:(int)arg1;
- (void)dealloc;
- (struct PBReaderMasterStyleInfo { struct PptTextMasterStyleAtom {} *x1; struct PptTextMasterStyle9Atom {} *x2; }*)docSourceMasterStyleInfoOfType:(int)arg1;
- (id)documentRoot;
- (id)fontEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)fontEntityCount;
- (unsigned long long)getSlideIndexAt:(unsigned long long)arg1;
- (bool)hasCharacterPropertyBulletIndex;
- (bool)hasCurrentSourceMasterStyleInfoVector;
- (bool)hasSlideNumberPlaceholder;
- (id)hyperlinkInfoWithId:(unsigned int)arg1 createIfAbsent:(bool)arg2;
- (id)initWithReader:(struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; bool x12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_25_1_1; } x25; }*)arg1 tgtPresentation:(id)arg2;
- (bool)isCancelled;
- (id)masterStyles:(id)arg1;
- (unsigned long long)numberOfSlideIndexes;
- (id)officeArtState;
- (struct PptBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct __sFILE {} *x5; struct SsrwOORootStorage { struct _Storage {} *x_6_1_1; unsigned short x_6_1_2[36]; struct _RootStorage {} *x_6_1_3; } x6; struct SsrwOOStorage {} *x7; struct SsrwOOStorage {} *x8; struct SsrwOOStream {} *x9; struct SsrwOOStream {} *x10; int x11; bool x12; struct PptEshReader {} *x13; struct PptEshReader {} *x14; struct PptParserVisitor {} *x15; struct PptPersistDir {} *x16; struct EshHeader {} *x17; struct EshObject {} *x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; struct ChMap<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int> > { struct map<unsigned int, PptBinaryReader::SKIP_CONDITIONS, CsLess<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, PptBinaryReader::SKIP_CONDITIONS>, CsLess<unsigned int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_25_1_1; } x25; }*)reader;
- (void)resetSlideState;
- (void)setBulletIndex:(unsigned int)arg1;
- (void)setCancelDelegate:(id)arg1;
- (void)setCurrentBulletStyle:(id)arg1 macCharStyle:(id)arg2;
- (void)setCurrentSourceMasterStyleInfoVector:(struct ChVector<PBReaderMasterStyleInfo> { struct PBReaderMasterStyleInfo {} *x1; struct PBReaderMasterStyleInfo {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (void)setCurrentTextType:(int)arg1 placeholderIndex:(unsigned int)arg2;
- (void)setDocumentRoot:(id)arg1;
- (void)setHasCharacterPropertyBulletIndex:(bool)arg1;
- (void)setHasSlideNumberPlaceholder:(bool)arg1;
- (void)setMasterStyles:(id)arg1 slideMaster:(id)arg2;
- (void)setPlaceholderBulletStyles:(id)arg1;
- (void)setPlaceholderMacCharStyles:(id)arg1;
- (void)setSourceSlideId:(unsigned int)arg1;
- (void)setSourceSlideListHolder:(id)arg1;
- (void)setSourceTextBoxContainerHolder:(id)arg1 forTargetShape:(id)arg2;
- (void)setTgtSlide:(id)arg1;
- (id)slideIndexesRef;
- (id)slideState;
- (id)sourceSlideListHolder;
- (id)sourceTextBoxContainerHolderForTargetShape:(id)arg1;
- (id)tgtPresentation;
- (id)tgtSlide;

@end
