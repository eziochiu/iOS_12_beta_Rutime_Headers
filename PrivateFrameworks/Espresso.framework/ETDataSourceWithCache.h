/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface ETDataSourceWithCache : NSObject <ETDataSource> {
    struct map<int, ETDataPoint *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, ETDataPoint *> > > { 
        struct __tree<std::__1::__value_type<int, ETDataPoint *>, std::__1::__map_value_compare<int, std::__1::__value_type<int, ETDataPoint *>, std::__1::less<int>, true>, std::__1::allocator<std::__1::__value_type<int, ETDataPoint *> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<int, ETDataPoint *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<int, std::__1::__value_type<int, ETDataPoint *>, std::__1::less<int>, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _cache;
    <ETDataSource> * _source;
    bool  dump_descriptors;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { 
        struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { 
            struct __rep { 
                union { 
                    struct __long { 
                        char *__data_; 
                        unsigned long long __size_; 
                        unsigned long long __cap_; 
                    } __l; 
                    struct __short { 
                        BOOL __data_[23]; 
                        struct { 
                            unsigned char __size_; 
                        } ; 
                    } __s; 
                    struct __raw { 
                        unsigned long long __words[3]; 
                    } __r; 
                } ; 
            } __value_; 
        } __r_; 
    }  dump_path;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataPointAtIndex:(int)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 dumpPath:(id)arg2;
- (int)numberOfDataPoints;

@end
