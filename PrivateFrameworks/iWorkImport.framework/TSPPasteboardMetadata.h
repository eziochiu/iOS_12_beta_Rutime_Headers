/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardMetadata : TSPObject {
    NSHashTable * _dataReferences;
    TSPDataMetadataMap * _identifierToDataMetadataMap;
    bool  _isCrossAppPaste;
    bool  _isCrossDocumentPaste;
    struct PasteboardMetadata { 
        int (**_vptr$MessageLite)(); 
        struct UnknownFieldSet { 
            struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *fields_; 
        } _unknown_fields_; 
        unsigned int _has_bits_[1]; 
        int _cached_size_; 
        struct RepeatedField<unsigned int> { 
            unsigned int *elements_; 
            int current_size_; 
            int total_size_; 
        } version_; 
        int _version_cached_byte_size_; 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *app_name_; 
        struct RepeatedPtrField<TSP::DataInfo> { 
            void **elements_; 
            int current_size_; 
            int allocated_size_; 
            int total_size_; 
        } datas_; 
        struct UUID {} *source_document_uuid_; 
        struct Reference {} *data_metadata_map_; 
    }  _message;
}

@property (nonatomic, readonly) NSHashTable *dataReferences;
@property (nonatomic, readonly) bool isCrossAppPaste;
@property (nonatomic, readonly) bool isCrossDocumentPaste;

+ (id)appNameAndVersion;
+ (id)bundleIdentifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataMetadataForDataIdentifier:(long long)arg1;
- (id)dataReferences;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 dataReferences:(id)arg2;
- (bool)isCrossAppPaste;
- (bool)isCrossDocumentPaste;
- (void)loadFromUnarchiver:(id)arg1;
- (struct PasteboardMetadata { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedField<unsigned int> { unsigned int *x_5_1_1; int x_5_1_2; int x_5_1_3; } x5; int x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct RepeatedPtrField<TSP::DataInfo> { void **x_8_1_1; int x_8_1_2; int x_8_1_3; int x_8_1_4; } x8; struct UUID {} *x9; struct Reference {} *x10; }*)message;
- (void)saveToArchiver:(id)arg1;
- (void)setDataMetadata:(id)arg1 forDataIdentifier:(long long)arg2;
- (long long)tsp_identifier;

@end
