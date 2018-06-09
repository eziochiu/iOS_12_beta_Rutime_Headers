/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOIdPlacementBaseOperation : TSKCOAbstractOperation <TSKCOIdOperation, TSKCOTransforming> {
    TSKCOIdAddress * _address;
    int  _fromIndex;
    bool  _isDominating;
    int  _placementType;
    int  _toIndex;
}

@property (nonatomic, readonly) TSKCOIdAddress *address;
@property (nonatomic, readonly) int fromIndex;
@property (nonatomic, readonly) bool isDominating;
@property (nonatomic, readonly) int placementType;
@property (nonatomic, readonly) int toIndex;

+ (id)stringForPlacementType:(int)arg1;

- (void).cxx_destruct;
- (id)address;
- (int)fromIndex;
- (unsigned long long)hash;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(bool)arg4 noop:(bool)arg5;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(bool)arg4 placementType:(int)arg5 noop:(bool)arg6;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg2;
- (bool)isDominating;
- (bool)isEqual:(id)arg1;
- (bool)isFromToIndexEqual;
- (id)operationWithNewFromIndex:(int)arg1 toIndex:(int)arg2 dominating:(bool)arg3;
- (id)operationWithNewNoop:(bool)arg1;
- (int)placementType;
- (void)saveToArchiver:(id)arg1 message:(struct Operation { int (**x1)(); struct ExtensionSet { struct map<int, google::protobuf::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_3_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_5_1; } x_2_4_1; } x_1_3_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, google::protobuf::internal::ExtensionSet::Extension>, std::__1::less<int>, true> > { unsigned long long x_3_4_1; } x_1_3_3; } x_1_2_1; } x_2_1_1; } x2; }*)arg2;
- (int)toIndex;
- (id)toString;
- (id)transformAddOperation:(id)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (struct pair<int, int> { int x1; int x2; })transformBothIndexesByAdd:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(bool)arg3 history:(id)arg4;
- (struct pair<int, int> { int x1; int x2; })transformBothIndexesByRearrange:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(bool)arg3 history:(id)arg4;
- (struct pair<int, int> { int x1; int x2; })transformBothIndexesByRemove:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(bool)arg3 history:(id)arg4;
- (id)transformDynamicByAnyOperation:(id)arg1 byHigherPriority:(bool)arg2 history:(id)arg3;
- (int)transformFromIndexByRearrange:(int)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (id)transformIdPlacementBaseOperation:(id)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (int)transformIndexByAdd:(int)arg1 isHigherPriority:(bool)arg2 isFromIndex:(bool)arg3 history:(id)arg4;
- (int)transformIndexByRemove:(int)arg1 isHigherPriority:(bool)arg2 isFromIndex:(bool)arg3 history:(id)arg4;
- (id)transformRearrangeOrPlacementOperation:(id)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (id)transformRemoveOperation:(id)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (id)transformStaticByAnyOperation:(id)arg1 byHigherPriority:(bool)arg2 history:(id)arg3;
- (int)transformToIndexByRearrange:(int)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(bool)arg2 history:(id)arg3;
- (id)ut_transformByTransformer:(id)arg1;

@end
