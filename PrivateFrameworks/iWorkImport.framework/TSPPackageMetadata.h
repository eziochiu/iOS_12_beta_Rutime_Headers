/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageMetadata : TSPObject {
    TSPDataMetadataMap * _identifierToDataMetadataMap;
    struct PackageMetadata { 
        int (**_vptr$MessageLite)(); 
        struct UnknownFieldSet { 
            struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *fields_; 
        } _unknown_fields_; 
        unsigned int _has_bits_[1]; 
        int _cached_size_; 
        unsigned long long last_object_identifier_; 
        struct DocumentRevision {} *revision_; 
        struct RepeatedPtrField<TSP::ComponentInfo> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } components_; 
        struct RepeatedPtrField<TSP::DataInfo> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } datas_; 
        struct RepeatedField<unsigned int> { 
            unsigned int *elements_; 
            int current_size_; 
            int total_size_; 
        } read_version_; 
        int _read_version_cached_byte_size_; 
        struct RepeatedField<unsigned int> { 
            unsigned int *elements_; 
            int current_size_; 
            int total_size_; 
        } write_version_; 
        int _write_version_cached_byte_size_; 
        struct RepeatedField<unsigned int> { 
            unsigned int *elements_; 
            int current_size_; 
            int total_size_; 
        } file_format_version_; 
        int _file_format_version_cached_byte_size_; 
        unsigned long long save_token_; 
        struct Reference {} *data_metadata_map_; 
        int preferred_package_type_; 
    }  _message;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (struct PackageMetadata { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct DocumentRevision {} *x6; struct RepeatedPtrField<TSP::ComponentInfo> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedPtrField<TSP::DataInfo> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct RepeatedField<unsigned int> { unsigned int *x_9_1_1; int x_9_1_2; int x_9_1_3; } x9; int x10; struct RepeatedField<unsigned int> { unsigned int *x_11_1_1; int x_11_1_2; int x_11_1_3; } x11; int x12; struct RepeatedField<unsigned int> { unsigned int *x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; int x14; unsigned long long x15; struct Reference {} *x16; int x17; }*)message;
- (id)packageLocator;
- (void)saveToArchiver:(id)arg1;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;
- (long long)tsp_identifier;

@end
