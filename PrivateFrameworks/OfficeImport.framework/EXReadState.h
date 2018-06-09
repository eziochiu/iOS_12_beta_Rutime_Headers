/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EXReadState : OCXReadState {
    NSMutableArray * mArrayedFormulas;
    <TCCancelDelegate> * mCancelDelegate;
    unsigned long long  mCellStyleXfsOffset;
    ECColumnWidthConvertor * mColumnWidthConvertor;
    OCPPackagePart * mCurrentPart;
    unsigned int  mCurrentRowMaxColumnIndex;
    unsigned int  mCurrentRowMinColumnIndex;
    EDSheet * mCurrentSheet;
    unsigned int  mCurrentSheetIndex;
    double  mDefaultColumnWidth;
    double  mDefaultRowHeight;
    CXNamespace * mEXSpreadsheetDrawingNamespace;
    CXNamespace * mEXSpreadsheetMLNamespace;
    CXNamespace * mEXSpreadsheetRelationsNamespace;
    bool  mIsPredefinedDxfsBeingRead;
    bool  mIsPredefinedTableStylesRead;
    NSMutableArray * mLegacyDrawables;
    bool  mMaxColumnsWarned;
    bool  mMaxRowsWarned;
    EXOAVState * mOAVState;
    EXOfficeArtState * mOfficeArtState;
    NSMutableDictionary * mReferenceForCommentTextBox;
    struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; } * mRelationshipNS;
    EDResources * mResources;
    struct map<long, unsigned long, std::__1::less<long>, std::__1::allocator<std::__1::pair<const long, unsigned long> > > { 
        struct __tree<std::__1::__value_type<long, unsigned long>, std::__1::__map_value_compare<long, std::__1::__value_type<long, unsigned long>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, unsigned long> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, unsigned long>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, unsigned long>, std::__1::less<long>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  mSharedFormulasMap;
    EDReference * mSheetDimension;
    TCImportTracing * mTracing;
    EDWorkbook * mWorkbook;
    OCPPackagePart * mWorkbookPart;
}

@property (nonatomic, retain) CXNamespace *EXSpreadsheetDrawingNamespace;
@property (nonatomic, retain) CXNamespace *EXSpreadsheetMLNamespace;
@property (nonatomic, retain) CXNamespace *EXSpreadsheetRelationsNamespace;
@property (nonatomic, readonly) <TCCancelDelegate> *cancelDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)EXSpreadsheetDrawingNamespace;
- (id)EXSpreadsheetMLNamespace;
- (id)EXSpreadsheetRelationsNamespace;
- (void)addSharedBaseFormulaIndex:(unsigned long long)arg1 withIndex:(long long)arg2;
- (id)arrayedFormulas;
- (id)authorForReference:(id)arg1;
- (id)cancelDelegate;
- (unsigned long long)cellStyleXfsOffset;
- (id)columnWidthConvertor;
- (id)currentPart;
- (unsigned int)currentRowMaxColumnIndex;
- (unsigned int)currentRowMinColumnIndex;
- (id)currentSheet;
- (unsigned int)currentSheetIndex;
- (void)dealloc;
- (double)defaultColumnWidth;
- (double)defaultRowHeight;
- (id)initWithWorkbookPart:(id)arg1 cancelDelegate:(id)arg2 tracing:(id)arg3;
- (bool)isCancelled;
- (bool)isPredefinedDxfsBeingRead;
- (bool)isPredefinedTableStylesRead;
- (id)legacyDrawables;
- (id)oavState;
- (id)officeArtState;
- (struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)relationshipNameSpaceForWorkbook;
- (void)relationshipNameSpaceForWorkbook:(struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)arg1;
- (void)reportWarning:(id)arg1;
- (void)reportWorksheetWarning:(id)arg1;
- (void)resetForNewSheet;
- (id)resources;
- (void)setCellStyleXfsOffset:(unsigned long long)arg1;
- (void)setCurrentPart:(id)arg1;
- (void)setCurrentRowMaxColumnIndex:(unsigned int)arg1;
- (void)setCurrentRowMinColumnIndex:(unsigned int)arg1;
- (void)setCurrentSheet:(id)arg1;
- (void)setCurrentSheetIndex:(unsigned int)arg1;
- (void)setDefaultColumnWidth:(double)arg1;
- (void)setDefaultRowHeight:(double)arg1;
- (void)setEXSpreadsheetDrawingNamespace:(id)arg1;
- (void)setEXSpreadsheetMLNamespace:(id)arg1;
- (void)setEXSpreadsheetRelationsNamespace:(id)arg1;
- (void)setOfficeArtState:(id)arg1;
- (void)setPredefinedDxfsBeingRead:(bool)arg1;
- (void)setPredefinedTableStylesRead:(bool)arg1;
- (void)setResources:(id)arg1;
- (void)setSheetDimension:(id)arg1;
- (void)setTextBox:(id)arg1 author:(id)arg2 forReference:(id)arg3;
- (void)setWorkbook:(id)arg1;
- (void)setupNSForXMLFormat:(int)arg1;
- (unsigned long long)sharedBaseFormulaIndexWithIndex:(long long)arg1;
- (id)sheetDimension;
- (id)textBoxForReference:(id)arg1;
- (id)workbook;
- (id)workbookPart;

@end
