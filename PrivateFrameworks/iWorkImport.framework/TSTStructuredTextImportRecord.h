/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStructuredTextImportRecord : NSObject <NSCopying> {
    double  _confidence;
    NSDate * _importDate;
    TSKStructuredTextImportSettings * _importSettings;
    NSURL * _importSource;
    TSTCellRegion * _importedRegion;
    NSArray * _pasteInverseCommands;
    unsigned long long  _pasteType;
    bool  _pasteWasUpdate;
    unsigned long long  _sourceColumnCount;
    NSData * _sourceData;
    unsigned long long  _sourceRowCount;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSDate *importDate;
@property (nonatomic, retain) TSKStructuredTextImportSettings *importSettings;
@property (nonatomic, retain) NSURL *importSource;
@property (nonatomic, retain) TSTCellRegion *importedRegion;
@property (nonatomic, retain) NSArray *pasteInverseCommands;
@property (nonatomic) unsigned long long pasteType;
@property (nonatomic) bool pasteWasUpdate;
@property (getter=isReimportable, nonatomic, readonly) bool reimportable;
@property (nonatomic) unsigned long long sourceColumnCount;
@property (nonatomic, copy) NSData *sourceData;
@property (nonatomic) unsigned long long sourceRowCount;
@property (getter=isWholeTableImport, nonatomic, readonly) bool wholeTableImport;

+ (id)record;
+ (id)recordFromArchive:(const struct StructuredTextImportRecord { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StructuredTextImportSettings {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; double x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; unsigned long long x9; struct CellRegion {} *x10; unsigned long long x11; unsigned long long x12; float x13; }*)arg1;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeToArchive:(struct StructuredTextImportRecord { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StructuredTextImportSettings {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; double x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; unsigned long long x9; struct CellRegion {} *x10; unsigned long long x11; unsigned long long x12; float x13; }*)arg1;
- (id)importDate;
- (id)importSettings;
- (id)importSource;
- (id)importedRegion;
- (id)initFromArchive:(const struct StructuredTextImportRecord { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct StructuredTextImportSettings {} *x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; double x7; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x8; unsigned long long x9; struct CellRegion {} *x10; unsigned long long x11; unsigned long long x12; float x13; }*)arg1;
- (bool)isReimportable;
- (bool)isWholeTableImport;
- (id)pasteInverseCommands;
- (unsigned long long)pasteType;
- (bool)pasteWasUpdate;
- (void)setConfidence:(double)arg1;
- (void)setImportDate:(id)arg1;
- (void)setImportSettings:(id)arg1;
- (void)setImportSource:(id)arg1;
- (void)setImportedRegion:(id)arg1;
- (void)setPasteInverseCommands:(id)arg1;
- (void)setPasteType:(unsigned long long)arg1;
- (void)setPasteWasUpdate:(bool)arg1;
- (void)setSourceColumnCount:(unsigned long long)arg1;
- (void)setSourceData:(id)arg1;
- (void)setSourceRowCount:(unsigned long long)arg1;
- (unsigned long long)sourceColumnCount;
- (id)sourceData;
- (unsigned long long)sourceRowCount;

@end
