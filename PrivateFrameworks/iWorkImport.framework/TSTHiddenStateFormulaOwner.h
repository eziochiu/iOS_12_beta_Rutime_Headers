/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTHiddenStateFormulaOwner : TSPObject <TSCEFormulaOwning> {
    TSCECalculationEngine * _calculationEngine;
    struct vector<TSUCellRect, std::__1::allocator<TSUCellRect> > { 
        struct TSUCellRect {} *__begin_; 
        struct TSUCellRect {} *__end_; 
        struct __compressed_pair<TSUCellRect *, std::__1::allocator<TSUCellRect> > { 
            struct TSUCellRect {} *__value_; 
        } __end_cap_; 
    }  _cellRangesToInvalidate;
    struct vector<unsigned short, std::__1::allocator<unsigned short> > { 
        unsigned short *__begin_; 
        unsigned short *__end_; 
        struct __compressed_pair<unsigned short *, std::__1::allocator<unsigned short> > { 
            unsigned short *__value_; 
        } __end_cap_; 
    }  _hiddenRowIndices;
    bool  _needsToUpdateFilterSetForImport;
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
    }  _ownerUID;
    struct vector<std::__1::pair<unsigned short, bool>, std::__1::allocator<std::__1::pair<unsigned short, bool> > > { 
        struct pair<unsigned short, bool> {} *__begin_; 
        struct pair<unsigned short, bool> {} *__end_; 
        struct __compressed_pair<std::__1::pair<unsigned short, bool> *, std::__1::allocator<std::__1::pair<unsigned short, bool> > > { 
            struct pair<unsigned short, bool> {} *__value_; 
        } __end_cap_; 
    }  _pendingComputedShowRowResults;
    NSObject<OS_dispatch_queue> * _pendingComputedShowRowResultsQueue;
    TSTTableFilterSet * _rewrittenFilterSet;
    TSTInfo * _tableInfo;
    NSMutableArray * _thresholdCellValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; } ownerUID;
@property (readonly) Class superclass;
@property (nonatomic) TSTInfo *tableInfo;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)beginRewriteForCalculationEngine:(id)arg1 spec:(id)arg2;
- (id)calculationEngine;
- (struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })cellReferenceForIndex:(unsigned short)arg1;
- (void)dealloc;
- (void)dirtyFilterState;
- (void)filterSetUpdated;
- (void)hiddenStateChangedForIndex:(unsigned short)arg1;
- (id)initWithContext:(id)arg1 tableInfo:(id)arg2;
- (void)invalidateForCalculationEngine:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })ownerUID;
- (void)p_registerAllFormulaToCalculationEngine;
- (void)p_removeAllFormulaFromCalculationEngine;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })rangeReferenceFromIndex:(unsigned short)arg1 toIndex:(unsigned short)arg2;
- (struct { bool x1; bool x2; bool x3; })recalculateForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; })arg2 isInCycle:(bool)arg3 hasCalculatedPrecedents:(bool)arg4;
- (int)registerWithCalculationEngine:(id)arg1;
- (void)rewriteForCalculationEngine:(id)arg1 formulaID:(struct { unsigned int x1 : 24; })arg2 rewriteSpec:(id)arg3;
- (void)saveToArchiver:(id)arg1;
- (void)setOwnerUID:(struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })arg1;
- (void)setTableInfo:(id)arg1;
- (id)tableInfo;
- (id)thresholdCellValues;
- (void)writeResultsForCalculationEngine:(id)arg1;

@end
