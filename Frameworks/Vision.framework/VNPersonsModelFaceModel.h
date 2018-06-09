/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNPersonsModelFaceModel : NSObject <NSSecureCoding> {
    struct shared_ptr<vision::mod::FaceIDModel> { 
        struct FaceIDModel {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _faceIDModel;
    int  _maximumElementsPerID;
    NSMapTable * _serialNumberToPersonUniqueIdentifierMapTable;
}

+ (struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> { struct ImageDescriptorBufferFloat32 {} *x1; struct __shared_weak_count {} *x2; })_concatenateFaceprintImageDescriptorBuffer:(struct shared_ptr<vision::mod::ImageDescriptorBufferFloat32> { struct ImageDescriptorBufferFloat32 {} *x1; struct __shared_weak_count {} *x2; })arg1 withFaceprints:(id)arg2 forIdentityWithSerialNumber:(int)arg3 faceprintLabels:(struct vector<int, std::__1::allocator<int> > { int *x1; int *x2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_1_1; } x3; }*)arg4;
+ (id)modelBuiltFromConfiguration:(id)arg1 dataProvider:(id)arg2 canceller:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_personPredictionsForFace:(id)arg1 withDescriptor:(const struct ImageDescriptorBufferFloat32 { int (**x1)(); struct vector<long long, std::__1::allocator<long long> > { long long *x_2_1_1; long long *x_2_1_2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_2_1; } x_2_1_3; } x2; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg2 limit:(unsigned long long)arg3 faceIDCanceller:(struct CVMLCanceller { int (**x1)(); bool x2; int x3; }*)arg4 error:(id*)arg5;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)arg1;
- (id)faceCountsForAllPersons;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceIDModel:(struct shared_ptr<vision::mod::FaceIDModel> { struct FaceIDModel {} *x1; struct __shared_weak_count {} *x2; })arg1 maximumElementsPerID:(unsigned long long)arg2 personUniqueIdentifierToSerialNumberMapping:(id)arg3;
- (unsigned long long)personCount;
- (id)personPredictionsForFace:(id)arg1 withDescriptor:(const struct ImageDescriptorBufferFloat32 { int (**x1)(); struct vector<long long, std::__1::allocator<long long> > { long long *x_2_1_1; long long *x_2_1_2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_2_1; } x_2_1_3; } x2; struct map<long long, int, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, int> > > { struct __tree<std::__1::__value_type<long long, int>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, int>, std::__1::less<long long>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; }*)arg2 limit:(unsigned long long)arg3 canceller:(id)arg4 error:(id*)arg5;
- (id)personUniqueIdentifiers;

@end
