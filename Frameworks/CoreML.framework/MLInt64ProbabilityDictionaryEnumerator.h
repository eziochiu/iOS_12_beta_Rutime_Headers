/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLInt64ProbabilityDictionaryEnumerator : NSEnumerator {
    struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> > { 
        struct __tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__ptr_; 
        } __i_; 
    }  _iter;
    struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> > { 
        struct __tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__ptr_; 
        } __i_; 
    }  _iterEnd;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long' */ struct  iter; /* unknown property attribute:  long>=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}}} */
@property (nonatomic) /* Warning: unhandled struct encoding: '{__map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long' */ struct  iterEnd; /* unknown property attribute:  long>=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}}} */

+ (id)enumeratorFromMap:(struct map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > > { struct __tree<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1;

- (id).cxx_construct;
- (id)initWithIntMap:(struct map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > > { struct __tree<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, unsigned long> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, unsigned long>, std::__1::less<unsigned long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> > { struct __tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; } x1; })iter;
- (struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> > { struct __tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; } x1; })iterEnd;
- (id)nextObject;
- (void)setIter:(struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> > { struct __tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; } x1; })arg1;
- (void)setIterEnd:(struct __map_iterator<std::__1::__tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> > { struct __tree_iterator<std::__1::__value_type<unsigned long, unsigned long>, std::__1::__tree_node<std::__1::__value_type<unsigned long, unsigned long>, void *> *, long> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; } x1; })arg1;

@end
