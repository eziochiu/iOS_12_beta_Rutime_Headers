/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface ETDataSourceBlobF4 : NSObject <ETDataSource> {
    struct map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 4> > >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  blobs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addBlob:(id)arg1 forKey:(id)arg2;
- (id)dataPointAtIndex:(int)arg1;
- (int)numberOfDataPoints;

@end
