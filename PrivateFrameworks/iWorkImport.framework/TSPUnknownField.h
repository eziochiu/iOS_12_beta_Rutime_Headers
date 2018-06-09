/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnknownField : NSObject {
    struct FieldInfo { 
        int (**_vptr$MessageLite)(); 
        struct UnknownFieldSet { 
            struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *fields_; 
        } _unknown_fields_; 
        unsigned int _has_bits_[1]; 
        int _cached_size_; 
        struct FieldPath {} *path_; 
        int type_; 
        int rule_; 
        struct RepeatedField<unsigned long long> { 
            unsigned long long *elements_; 
            int current_size_; 
            int total_size_; 
        } object_references_; 
        int _object_references_cached_byte_size_; 
        struct RepeatedField<unsigned long long> { 
            unsigned long long *elements_; 
            int current_size_; 
            int total_size_; 
        } data_references_; 
        int _data_references_cached_byte_size_; 
    }  _fieldInfo;
    struct shared_ptr<google::protobuf::UnknownFieldSet> { 
        struct UnknownFieldSet {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fieldSet;
}

+ (id)unknownFieldWithFieldSet:(struct shared_ptr<google::protobuf::UnknownFieldSet> { struct UnknownFieldSet {} *x1; struct __shared_weak_count {} *x2; }*)arg1 fieldInfo:(const struct FieldInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FieldPath {} *x5; int x6; int x7; struct RepeatedField<unsigned long long> { unsigned long long *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; }*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDescription;
- (const struct FieldInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FieldPath {} *x5; int x6; int x7; struct RepeatedField<unsigned long long> { unsigned long long *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; }*)fieldInfo;
- (id)initWithFieldSet:(struct shared_ptr<google::protobuf::UnknownFieldSet> { struct UnknownFieldSet {} *x1; struct __shared_weak_count {} *x2; }*)arg1 fieldInfo:(const struct FieldInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct FieldPath {} *x5; int x6; int x7; struct RepeatedField<unsigned long long> { unsigned long long *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; }*)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)mergeToUnknownFieldSet:(struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x1; }*)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)updateMessageInfo:(struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; unsigned int x7; unsigned int x8; struct RepeatedPtrField<TSP::FieldInfo> { void **x_9_1_1; int x_9_1_2; int x_9_1_3; int x_9_1_4; } x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedField<unsigned long long> { unsigned long long *x_12_1_1; int x_12_1_2; int x_12_1_3; } x12; int x13; struct RepeatedField<unsigned int> { unsigned int *x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; int x15; struct FieldPath {} *x16; struct RepeatedPtrField<TSP::FieldPath> { void **x_17_1_1; int x_17_1_2; int x_17_1_3; int x_17_1_4; } x17; unsigned int x18; }*)arg1;

@end
