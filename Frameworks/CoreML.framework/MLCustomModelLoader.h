/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLCustomModelLoader : NSObject <MLModelSpecificationLoader>

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 error:(id*)arg2;
+ (id)parametersFromCustomModelSpec:(struct CustomModel { int (**x1)(); struct InternalMetadataWithArenaLite { void *x_2_1_1; } x2; struct MapFieldLite<google::protobuf::internal::MapEntryLite<std::__1::basic_string<char>, CoreML::Specification::CustomModel_CustomModelParamValue, google::protobuf::internal::WireFormatLite::TYPE_STRING, google::protobuf::internal::WireFormatLite::TYPE_MESSAGE, 0>, std::__1::basic_string<char>, CoreML::Specification::CustomModel_CustomModelParamValue, google::protobuf::internal::WireFormatLite::TYPE_STRING, google::protobuf::internal::WireFormatLite::TYPE_MESSAGE, 0> { struct Arena {} *x_3_1_1; struct Map<std::__1::basic_string<char>, CoreML::Specification::CustomModel_CustomModelParamValue> { struct Arena {} *x_2_2_1; int x_2_2_2; struct InnerMap {} *x_2_2_3; } x_3_1_2; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_4_1_1; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x_5_1_1; } x5; int x6; }*)arg1 error:(id*)arg2;

@end
