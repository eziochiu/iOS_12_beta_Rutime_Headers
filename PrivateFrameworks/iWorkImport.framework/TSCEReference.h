/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEReference : NSObject {
    NSString * mOverrideText;
    NSString * mOverrideTextAsTyped;
    struct TSCECReference { 
        unsigned short referenceType; 
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
        } cellRef; 
        struct TSCERangeRef { 
            struct TSCERangeCoordinate { 
                struct TSUCellCoord { 
                    unsigned short row; 
                    unsigned char column; 
                    unsigned char reserved; 
                } mTopLeft; 
                struct TSUCellCoord { 
                    unsigned short row; 
                    unsigned char column; 
                    unsigned char reserved; 
                } mBottomRight; 
            } range; 
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
        } rangeRef; 
        struct TSCESpanningRangeRef { 
            struct TSCERangeRef { 
                struct TSCERangeCoordinate { 
                    struct TSUCellCoord { 
                        unsigned short row; 
                        unsigned char column; 
                        unsigned char reserved; 
                    } mTopLeft; 
                    struct TSUCellCoord { 
                        unsigned short row; 
                        unsigned char column; 
                        unsigned char reserved; 
                    } mBottomRight; 
                } range; 
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
            } rangeRef; 
            unsigned char rangeContext; 
        } spanningRangeRef; 
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
        } uuidValue; 
    }  mRef;
    unsigned char  mStickyBits;
    bool  mWasConstructedViaNames;
}

- (id).cxx_construct;
- (struct TSCECReference { unsigned short x1; struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_2_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_2_1_2; } x2; struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_1_2_1; struct TSUCellCoord { unsigned short x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; } x_1_2_2; } x_3_1_1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_3_1[16]; struct { unsigned char x_2_4_1; unsigned char x_2_4_2; unsigned char x_2_4_3; unsigned char x_2_4_4; unsigned char x_2_4_5; unsigned char x_2_4_6; unsigned char x_2_4_7; unsigned char x_2_4_8; unsigned char x_2_4_9; unsigned char x_2_4_10; unsigned char x_2_4_11; unsigned char x_2_4_12; unsigned char x_2_4_13; unsigned char x_2_4_14; unsigned char x_2_4_15; unsigned char x_2_4_16; } x_1_3_2; struct { unsigned long long x_3_4_1; unsigned long long x_3_4_2; } x_1_3_3; } x_2_2_1; } x_3_1_2; } x3; })cReference;
- (void)dealloc;
- (id)initWithCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (id)initWithRangeRef:(const struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)overrideText;
- (id)overrideTextAsTyped;
- (id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(bool)arg2;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct TSUCellCoord { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })rangeRef;
- (id)rangeReference;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(bool)arg5;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(bool)arg5;
- (id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2;
- (id)referenceTextWithCalculationEngine:(id)arg1 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
- (void)setOverrideText:(id)arg1;
- (void)setOverrideTextAsTyped:(id)arg1;
- (void)setStickyBits:(unsigned char)arg1;
- (void)setWasConstructedViaNames:(bool)arg1;
- (unsigned char)stickyBits;
- (struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; })tableUID;
- (bool)wasConstructedViaNames;

@end
