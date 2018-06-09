/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKStructuredTextImportSettings : NSObject <NSCopying> {
    bool  _automaticDelimiters;
    bool  _automaticOffsets;
    bool  _collapseConsecutiveDelimiters;
    NSIndexSet * _columnOffsets;
    NSSet * _decimalSeparators;
    NSSet * _delimiters;
    unsigned long long  _sourceEncoding;
    unsigned long long  _startingRow;
    NSSet * _textQualifiers;
    NSSet * _thousandsSeparators;
    bool  _transposeRowsAndColumns;
    long long  _type;
}

@property (nonatomic) bool automaticDelimiters;
@property (nonatomic) bool automaticOffsets;
@property (nonatomic) bool collapseConsecutiveDelimiters;
@property (nonatomic, copy) NSIndexSet *columnOffsets;
@property (nonatomic, copy) NSSet *decimalSeparators;
@property (nonatomic, copy) NSSet *delimiters;
@property (nonatomic, readonly) bool hasAnyAutomaticSettings;
@property (nonatomic) unsigned long long sourceEncoding;
@property (nonatomic) unsigned long long startingRow;
@property (nonatomic, copy) NSSet *textQualifiers;
@property (nonatomic, copy) NSSet *thousandsSeparators;
@property (nonatomic) bool transposeRowsAndColumns;
@property (nonatomic) long long type;

+ (id)keyPathsForValuesAffectingIsValid;
+ (id)settings;
+ (id)settingsFromArchive:(const struct StructuredTextImportSettings { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; int x6; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct IndexSet {} *x11; unsigned long long x12; bool x13; bool x14; bool x15; bool x16; }*)arg1;
+ (id)settingsWithType:(long long)arg1;

- (void).cxx_destruct;
- (bool)automaticDelimiters;
- (bool)automaticOffsets;
- (bool)collapseConsecutiveDelimiters;
- (id)columnOffsets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decimalSeparators;
- (id)delimiters;
- (void)encodeToArchive:(struct StructuredTextImportSettings { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; int x6; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct IndexSet {} *x11; unsigned long long x12; bool x13; bool x14; bool x15; bool x16; }*)arg1;
- (id)errorString;
- (bool)hasAnyAutomaticSettings;
- (unsigned long long)hash;
- (id)init;
- (id)initFromArchive:(const struct StructuredTextImportSettings { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; int x6; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x_10_1_1; int x_10_1_2; int x_10_1_3; int x_10_1_4; } x10; struct IndexSet {} *x11; unsigned long long x12; bool x13; bool x14; bool x15; bool x16; }*)arg1;
- (id)initWithType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;
- (void)setAutomaticDelimiters:(bool)arg1;
- (void)setAutomaticOffsets:(bool)arg1;
- (void)setCollapseConsecutiveDelimiters:(bool)arg1;
- (void)setColumnOffsets:(id)arg1;
- (void)setDecimalSeparators:(id)arg1;
- (void)setDelimiters:(id)arg1;
- (void)setSourceEncoding:(unsigned long long)arg1;
- (void)setStartingRow:(unsigned long long)arg1;
- (void)setTextQualifiers:(id)arg1;
- (void)setThousandsSeparators:(id)arg1;
- (void)setTransposeRowsAndColumns:(bool)arg1;
- (void)setType:(long long)arg1;
- (unsigned long long)sourceEncoding;
- (unsigned long long)startingRow;
- (id)textQualifiers;
- (id)thousandsSeparators;
- (bool)transposeRowsAndColumns;
- (long long)type;

@end
