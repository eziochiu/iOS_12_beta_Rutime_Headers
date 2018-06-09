/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFormulaPredArg : NSObject <NSCopying> {
    struct TSCECellRef { 
        struct TSUCellCoord { 
            unsigned short row; 
            unsigned char column; 
            unsigned char reserved; 
        } coordinate; 
        struct UUIDData<TSP::UUIDData> { 
            union { 
                unsigned char _uuid[16]; 
                struct { 
                    unsigned char byte0; 
                    unsigned char byte1; 
                    unsigned char byte2; 
                    unsigned char byte3; 
                    unsigned char byte4; 
                    unsigned char byte5; 
                    unsigned char byte6; 
                    unsigned char byte7; 
                    unsigned char byte8; 
                    unsigned char byte9; 
                    unsigned char byte10; 
                    unsigned char byte11; 
                    unsigned char byte12; 
                    unsigned char byte13; 
                    unsigned char byte14; 
                    unsigned char byte15; 
                } _cfuuid; 
                struct { 
                    unsigned long long _lower; 
                    unsigned long long _upper; 
                } ; 
            } ; 
        } tableUID; 
    }  _cellRef;
    bool  _hasRelativeCellRef;
    struct TSUCellCoord { 
        unsigned short row; 
        unsigned char column; 
        unsigned char reserved; 
    }  _hostCellCoord;
    id  _objcData;
    struct TSCERelativeCellRef { 
        struct { 
            int row; 
            short column; 
        } relativeCoord; 
        struct UUIDData<TSP::UUIDData> { 
            union { 
                unsigned char _uuid[16]; 
                struct { 
                    unsigned char byte0; 
                    unsigned char byte1; 
                    unsigned char byte2; 
                    unsigned char byte3; 
                    unsigned char byte4; 
                    unsigned char byte5; 
                    unsigned char byte6; 
                    unsigned char byte7; 
                    unsigned char byte8; 
                    unsigned char byte9; 
                    unsigned char byte10; 
                    unsigned char byte11; 
                    unsigned char byte12; 
                    unsigned char byte13; 
                    unsigned char byte14; 
                    unsigned char byte15; 
                } _cfuuid; 
                struct { 
                    unsigned long long _lower; 
                    unsigned long long _upper; 
                } ; 
            } ; 
        } tableUID; 
        unsigned int columnIsAbsolute : 1; 
        unsigned int rowIsAbsolute : 1; 
        unsigned int isSpanningColumn : 1; 
        unsigned int isSpanningRow : 1; 
    }  _relativeCellRef;
    int  _type;
    TSTUidRangeRef * _uidRangeRef;
    union { 
        bool _boolValue; 
        struct { 
            bool _columnIsAbsolute; 
            bool _rowIsAbsolute; 
        } _stickyBits; 
        struct { 
            double _value; 
            int _units; 
        } _duration; 
    }  _union;
}

@property (nonatomic) bool boolValue;
@property (nonatomic) bool columnIsAbsolute;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic) int durationUnits;
@property (nonatomic) double durationValue;
@property (nonatomic, readonly) bool hasRelativeCellRef;
@property (nonatomic) struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; } hostCellCoord;
@property (nonatomic, retain) NSNumber *number;
@property (nonatomic) double numberValue;
@property (nonatomic) bool rowIsAbsolute;
@property (nonatomic, copy) NSString *string;
@property (nonatomic, readonly) int type;
@property (nonatomic, retain) TSTUidRangeRef *uidRangeRef;

+ (id)defaultPredicateArg;

- (id).cxx_construct;
- (bool)boolValue;
- (const struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)cellRef;
- (struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })cellRefForHostCoord:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (id)cellReference;
- (id)cellReferenceForHostCoord:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)columnIsAbsolute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (int)durationUnits;
- (double)durationValue;
- (struct TSCEFormulaCreator { id /* block */ x1; })formulaCreatorForPredArgAtHostCell:(const struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }*)arg1;
- (bool)hasRelativeCellRef;
- (bool)hasUidRangeRef;
- (struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })hostCellCoord;
- (id)init;
- (id)initWithBool:(bool)arg1;
- (id)initWithCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1 columnIsAbsolute:(bool)arg2 rowIsAbsolute:(bool)arg3;
- (id)initWithCellReference:(id)arg1 columnIsAbsolute:(bool)arg2 rowIsAbsolute:(bool)arg3;
- (id)initWithDate:(id)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithDuration:(double)arg1 units:(int)arg2;
- (id)initWithNumber:(id)arg1;
- (id)initWithRelativeCellRef:(const struct TSCERelativeCellRef { struct { int x_1_1_1; short x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; }*)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithUidRangeRef:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 atHostCoord:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (id)number;
- (double)numberValue;
- (const struct TSCERelativeCellRef { struct { int x_1_1_1; short x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; }*)relativeCellRef;
- (bool)rowIsAbsolute;
- (void)setBoolValue:(bool)arg1;
- (void)setCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (void)setCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1 columnIsAbsolute:(bool)arg2 rowIsAbsolute:(bool)arg3;
- (void)setCellReference:(id)arg1;
- (void)setCellReference:(id)arg1 columnIsAbsolute:(bool)arg2 rowIsAbsolute:(bool)arg3;
- (void)setColumnIsAbsolute:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setDurationUnits:(int)arg1;
- (void)setDurationValue:(double)arg1;
- (void)setHostCellCoord:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setNumber:(id)arg1;
- (void)setNumberValue:(double)arg1;
- (void)setRelativeCellRef:(const struct TSCERelativeCellRef { struct { int x_1_1_1; short x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; }*)arg1;
- (void)setRowIsAbsolute:(bool)arg1;
- (void)setString:(id)arg1;
- (void)setUidRangeRef:(id)arg1;
- (id)string;
- (int)type;
- (id)uidRangeRef;

@end
