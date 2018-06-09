/* made by EzioChiu.
 */

@protocol TSCEReferenceResolving <NSObject>

@required

+ (struct TSCETableReference { id x1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; })canonicalCellReferenceForReference:(void *)arg1; // needs 1 arg types, found 7: void*, id, SEL, const struct TSCETableReference { id x1; void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*
+ (struct TSCEFormat { int x1; bool x2; void *x3; })format:(void *)arg1 fromCell:(void *)arg2; // needs 2 arg types, found 5: const struct TSCETableReference { id x1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }
+ (struct TSCEFormat { int x1; bool x2; void *x3; })formatFromVector:(void *)arg1 atIndex:(void *)arg2; // needs 2 arg types, found 22: const struct TSCETableReferenceVector { struct TSCETableReference { id x_1_1_1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_1_1_2; void*x_1_1_3; unsigned int x_1_1_4; long doublex_1_1_5; long doublex_1_1_6; void*x_1_1_7; void*x_1_1_8; void*x_1_1_9; void*x_1_1_10; void*x_1_1_11; unsigned short x_1_1_12; void*x_1_1_13; SEL x_1_1_14; SEL x_1_1_15; void*x_1_1_16; void*x_1_1_17; unsigned int x_1_1_18; long doublex_1_1_19; long doublex_1_1_20; void*x_1_1_21; void*x_1_1_22; void*x_1_1_23; void*x_1_1_24; void*x_1_1_25; union { unsigned char x_26_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_26_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_26_2_3; } x_1_1_26; } x1; }*, id, void*, unsigned short, unsigned char, void*, void*, void*, in void*, void*, unsigned char, out out const double, int, in void*, void*, void*, void*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*, void*, unsigned long long
+ (int)getHidingAction:(void *)arg1; // needs 1 arg types, found 4: const struct TSCETableReference { id x1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*
+ (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })getRange:(void *)arg1; // needs 1 arg types, found 4: const struct TSCETableReference { id x1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*
+ (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })getRangeReference:(void *)arg1; // needs 1 arg types, found 4: const struct TSCETableReference { id x1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*
+ (struct TSCETableReference { id x1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; })makeCellReferenceInSameTable:(void *)arg1 cellID:(void *)arg2; // needs 2 arg types, found 8: void*, id, SEL, const struct TSCETableReference { id x1; void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }
+ (struct TSCETableReferenceVector { struct TSCETableReference { id x_1_1_1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_1_1_2; void*x_1_1_3; unsigned int x_1_1_4; long doublex_1_1_5; long doublex_1_1_6; void*x_1_1_7; void*x_1_1_8; void*x_1_1_9; void*x_1_1_10; void*x_1_1_11; unsigned short x_1_1_12; void*x_1_1_13; SEL x_1_1_14; SEL x_1_1_15; void*x_1_1_16; void*x_1_1_17; unsigned int x_1_1_18; long doublex_1_1_19; long doublex_1_1_20; void*x_1_1_21; void*x_1_1_22; void*x_1_1_23; void*x_1_1_24; void*x_1_1_25; union { unsigned char x_26_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_26_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_26_2_3; } x_1_1_26; } x1; })makeReferenceVectorWithReference:(void *)arg1 rangeContext:(void *)arg2 apparentRangePtr:(void *)arg3; // needs 3 arg types, found 26: unsigned short, unsigned char, void*, void*, void*, in void*, void*, unsigned char, out out const double, int, in void*, void*, void*, void*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*, void*, id, SEL, const struct TSCETableReference { id x1; void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*, unsigned char, struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; }*
+ (int)mergeReferences:(void *)arg1 left:(void *)arg2 right:(void *)arg3; // needs 3 arg types, found 12: struct TSCETableReference { id x1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*, const struct TSCETableReference { id x1; void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*, const struct TSCETableReference { id x1; void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*
+ (void)prefetchData:(void *)arg1 fromVectorObject:(void *)arg2 cellID:(void *)arg3; // needs 3 arg types, found 31: struct TSCEReferenceValue { int (**x1)(); struct TSCETableReference { id x_2_1_1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x_2_1_2; void*x_2_1_3; unsigned int x_2_1_4; long doublex_2_1_5; long doublex_2_1_6; void*x_2_1_7; void*x_2_1_8; void*x_2_1_9; void*x_2_1_10; void*x_2_1_11; unsigned short x_2_1_12; void*x_2_1_13; SEL x_2_1_14; SEL x_2_1_15; void*x_2_1_16; void*x_2_1_17; unsigned int x_2_1_18; long doublex_2_1_19; long doublex_2_1_20; void*x_2_1_21; void*x_2_1_22; void*x_2_1_23; void*x_2_1_24; void*x_2_1_25; union { unsigned char x_26_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_26_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_26_2_3; } x_2_1_26; } x2; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct shared_ptr<TSCEValue> { struct TSCEValue {} *x1; struct __shared_weak_count {} *x2; }, bool, bool, unsigned char, bool, struct TSCEWarningReportingContext {}*, void*, struct TSCETableReferenceVector { struct TSCETableReference { id x_1_1_1; void*x_1_1_2; void*x_1_1_3; unsigned int x_1_1_4; long doublex_1_1_5; long doublex_1_1_6; void*x_1_1_7; void*x_1_1_8; void*x_1_1_9; void*x_1_1_10; void*x_1_1_11; unsigned short x_1_1_12; void*x_1_1_13; SEL x_1_1_14; SEL x_1_1_15; void*x_1_1_16; void*x_1_1_17; unsigned int x_1_1_18; long doublex_1_1_19; long doublex_1_1_20; void*x_1_1_21; void*x_1_1_22; void*x_1_1_23; void*x_1_1_24; void*x_1_1_25; union { unsigned char x_26_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_26_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_26_2_3; } x_1_1_26; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; }*, id, void*, unsigned short, unsigned char, void*, void*, void*, in void*, void*, unsigned char, out out const double, int, in void*, void*, void*, void*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*, void*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }
+ (<TSCEResolverContainer> *)resolverContainerMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2;
+ (<TSCEReferenceResolving> *)resolverMatchingName:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextResolver:(id <TSCEReferenceResolving>)arg3;
+ (<TSCEReferenceResolving> *)resolverMatchingNameWithContextContainer:(NSString *)arg1 inDocumentRoot:(TSKDocumentRoot *)arg2 contextContainerName:(NSString *)arg3;
+ (struct TSCEValue { unsigned long long x1[10]; int x2; })scalarValue:(void *)arg1 fromCell:(void *)arg2 permitAccessInsideMergeRegions:(void *)arg3 fetchRichTextAttributesIfPlainText:(void *)arg4; // needs 4 arg types, found 7: const struct TSCETableReference { id x1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; }*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, void*, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, bool, bool

- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })UIDForIndex:(unsigned short)arg1 isRows:(bool)arg2;
- (TSUMutableUUIDSet *)UIDSetForIndexes:(NSIndexSet *)arg1 isRows:(bool)arg2;
- (TSUMutableUUIDSet *)UIDSetForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 isRows:(bool)arg2;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; })UIDsForIndexes:(NSIndexSet *)arg1 isRows:(bool)arg2;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; })UIDsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 isRows:(bool)arg2;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; })allColumnUIDs;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; })allRowUIDs;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })apparentRangeForRange:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 rangeContext:(unsigned char)arg2;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })bodyRangeCoordinate;
- (TSCECalculationEngine *)calcEngine;
- (NSString *)cellRangeName:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1 stickyBits:(unsigned char)arg2 suppressIdenticalEndReference:(bool)arg3 quoteComponents:(bool)arg4 forceEscaping:(bool)arg5 rangeNameContainsColumnOrRowName:(out bool*)arg6;
- (TSWPParagraphStyle *)cellTextStyle:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)cellWasModifiedInThisRecalcCycle:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned char)columnIndexForColumnUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })columnUIDForColumnIndex:(unsigned char)arg1;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; })columnUIDsForColumnIndexes:(NSIndexSet *)arg1;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; })columnUIDsForColumnRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })conditionalStyleFormulaOwnerUID;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })footerRangeCoordinate;
- (bool)hasCellID:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (bool)hasNamesInHeaders;
- (unsigned short)indexForUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1 isRows:(bool)arg2;
- (NSMutableIndexSet *)indexesForUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1 isRows:(bool)arg2;
- (struct TSCETableReference { id x1; /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*x2; void*x3; unsigned int x4; long doublex5; long doublex6; void*x7; void*x8; void*x9; void*x10; void*x11; unsigned short x12; void*x13; SEL x14; SEL x15; void*x16; void*x17; unsigned int x18; long doublex19; long doublex20; void*x21; void*x22; void*x23; void*x24; void*x25; union { unsigned char x_26_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_26_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_26_1_3; } x26; })makeReference:(void *)arg1 bottomRight:(void *)arg2; // needs 2 arg types, found 5: void*, id, SEL, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }, struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; }
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })mergeOwnerUID;
- (NSMutableIndexSet *)mutableColumnIndexesForUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (NSMutableIndexSet *)mutableIndexesForUIDSet:(TSUUUIDSet *)arg1 isRows:(bool)arg2 notFoundUIDs:(TSUMutableUUIDSet *)arg3;
- (NSMutableIndexSet *)mutableRowIndexesForUIDs:(const struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; }*)arg1;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })preMergeRangeFromUidTract:(TSCEUidTract *)arg1;
- (void)resetAllFormulaDependenciesForCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)resetDependenciesForCell:(struct TSUCellCoord { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })resolverExpandCellRangeToCoverMergedCells:(struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg1;
- (bool)resolverIsATable;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })resolverUID;
- (unsigned short)rowIndexForRowUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })rowUIDForRowIndex:(unsigned short)arg1;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; })rowUIDsForRowIndexes:(NSIndexSet *)arg1;
- (struct vector<TSU::UUIDData<TSP::UUIDData>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x1; struct UUIDData<TSP::UUIDData> {} *x2; struct __compressed_pair<TSU::UUIDData<TSP::UUIDData> *, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > > { struct UUIDData<TSP::UUIDData> {} *x_3_1_1; } x3; })rowUIDsForRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (NSString *)sheetName;
- (id)tableInfo;
- (id)tableModel;
- (NSString *)tableName;
- (struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct TSUCellCoord { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })tableRangeCoordinate;

@end
