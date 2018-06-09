/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFunctionsInUse : NSObject {
    TSCECalculationEngine * _calcEngine;
    struct unordered_map<TSCEFunctionIndex, TSCEReferenceSet *, std::__1::hash<TSCEFunctionIndex>, std::__1::equal_to<TSCEFunctionIndex>, std::__1::allocator<std::__1::pair<const TSCEFunctionIndex, TSCEReferenceSet *> > > { 
        struct __hash_table<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::__1::__unordered_map_hasher<TSCEFunctionIndex, std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::__1::hash<TSCEFunctionIndex>, true>, std::__1::__unordered_map_equal<TSCEFunctionIndex, std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::__1::equal_to<TSCEFunctionIndex>, true>, std::__1::allocator<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSCEFunctionIndex, std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::__1::hash<TSCEFunctionIndex>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<TSCEFunctionIndex, std::__1::__hash_value_type<TSCEFunctionIndex, TSCEReferenceSet *>, std::__1::equal_to<TSCEFunctionIndex>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _cellRefsUsingFunction;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
}

@property (nonatomic, readonly, retain) TSCECalculationEngine *calcEngine;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFunctionUsesInFormula:(const struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; } x2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_3_1_1; } x3; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_4_1_1; } x4; }*)arg1 atCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg2;
- (void)addUseOfFunction:(int)arg1 atCellRef:(const struct TSCECellRef { struct TSUCellCoord { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; }*)arg2;
- (id)calcEngine;
- (void)dealloc;
- (void)dirtyCellsUsingFunction:(int)arg1;
- (id)initWithCalcEngine:(id)arg1;

@end
