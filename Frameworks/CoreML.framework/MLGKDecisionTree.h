/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLGKDecisionTree : NSObject {
    NSMutableArray * __attributes;
    NSMutableOrderedSet * __objectStore;
    struct TreeEnsembleClassifier { int (**x1)(); struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct map<std::__1::pair<unsigned long, unsigned long>, int, std::__1::less<std::__1::pair<unsigned long, unsigned long> >, std::__1::allocator<std::__1::pair<const std::__1::pair<unsigned long, unsigned long>, int> > > { struct __tree<std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, std::__1::__map_value_compare<std::__1::pair<unsigned long, unsigned long>, std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, std::__1::less<std::__1::pair<unsigned long, unsigned long> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::pair<unsigned long, unsigned long>, std::__1::__value_type<std::__1::pair<unsigned long, unsigned long>, int>, std::__1::less<std::__1::pair<unsigned long, unsigned long> >, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_3_1_1; } x3; } * _trc;
    MLTreeEnsembleClassifier * _treeClassifier;
}

@property (nonatomic, retain) NSMutableArray *_attributes;
@property (nonatomic, retain) NSMutableOrderedSet *_objectStore;

- (void).cxx_destruct;
- (id)_attributes;
- (id)_init;
- (id)_initWithFlattenedTree:(id)arg1;
- (void)_loadModelAssetWithModelAtPath:(id)arg1 withError:(id)arg2;
- (id)_makeInferenceFromAnswers:(id)arg1 withError:(id)arg2;
- (id)_objectStore;
- (bool)_saveModelAssetWithModelToPath:(id)arg1 withError:(id)arg2;
- (void)dealloc;
- (void)set_attributes:(id)arg1;
- (void)set_objectStore:(id)arg1;

@end
