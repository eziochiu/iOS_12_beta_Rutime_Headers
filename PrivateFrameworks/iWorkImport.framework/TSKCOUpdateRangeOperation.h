/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOUpdateRangeOperation : TSKCOUpdateOperation <TSKCORangeOperation, TSKCOTransforming, TSKCOUpdateRangeOperationSubset> {
    TSKCORangeAddress * _address;
    int  _transformBehavior;
}

@property (nonatomic, readonly) TSKCORangeAddress *address;
@property (nonatomic, readonly) int transformBehavior;

+ (id)stringForTransformBehavior:(int)arg1;

- (void).cxx_destruct;
- (id)address;
- (id)initWithRangeAddress:(id)arg1 propertyName:(id)arg2;
- (id)initWithRangeAddress:(id)arg1 propertyName:(id)arg2 noop:(bool)arg3;
- (id)initWithRangeAddress:(id)arg1 selectionPropertyName:(id)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg2;
- (id)operationWithNewAddress:(id)arg1;
- (id)operationWithNewNoop:(bool)arg1;
- (id)p_initWithRangeAddress:(id)arg1 propertyName:(id)arg2 transformBehavior:(int)arg3 noop:(bool)arg4;
- (void)saveToArchiver:(id)arg1 message:(struct Operation { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg2;
- (id)toString;
- (id)toUpdateRangeOperation;
- (int)transformBehavior;
- (id)transformDynamicByAnyOperation:(id)arg1 byHigherPriority:(bool)arg2 history:(id)arg3;
- (id)transformIdPlacementBaseOperation:(id)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (id)transformStaticByAnyOperation:(id)arg1 byHigherPriority:(bool)arg2 history:(id)arg3;
- (id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (id)ut_transformByTransformer:(id)arg1;

@end
