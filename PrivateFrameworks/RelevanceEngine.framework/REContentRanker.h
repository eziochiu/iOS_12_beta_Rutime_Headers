/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REContentRanker : NSObject <RELoggable> {
    struct REContentFeatureExtractor { 
        struct _opaque_pthread_rwlock_t { 
            long long __sig; 
            BOOL __opaque[192]; 
        } m_rwlock; 
        struct REFancyShrinkingDictionary { 
            struct unordered_map<std::__1::basic_string<char>, unsigned short, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short> > > { 
                struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short> > > { 
                    struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > > { 
                        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > > { 
                            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> {} **__value_; 
                            struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > { 
                                struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > { 
                                    unsigned long long __value_; 
                                } __data_; 
                            } __value_; 
                        } __ptr_; 
                    } __bucket_list_; 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> { 
                            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> {} *__next_; 
                        } __value_; 
                    } __p1_; 
                    struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true> > { 
                        unsigned long long __value_; 
                    } __p2_; 
                    struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { 
                        float __value_; 
                    } __p3_; 
                } __table_; 
            } m_mapDocumentFrequency; 
            unsigned long long m_maxSize; 
            unsigned long long m_shrinkSize; 
            int m_nVersion; 
        } m_trueTopTokens; 
        struct REFancyShrinkingDictionary { 
            struct unordered_map<std::__1::basic_string<char>, unsigned short, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, unsigned short> > > { 
                struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short> > > { 
                    struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > > { 
                        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > > { 
                            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> {} **__value_; 
                            struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > { 
                                struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> *> > { 
                                    unsigned long long __value_; 
                                } __data_; 
                            } __value_; 
                        } __ptr_; 
                    } __bucket_list_; 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> { 
                            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, void *> *> {} *__next_; 
                        } __value_; 
                    } __p1_; 
                    struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::hash<std::__1::basic_string<char> >, true> > { 
                        unsigned long long __value_; 
                    } __p2_; 
                    struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, unsigned short>, std::__1::equal_to<std::__1::basic_string<char> >, true> > { 
                        float __value_; 
                    } __p3_; 
                } __table_; 
            } m_mapDocumentFrequency; 
            unsigned long long m_maxSize; 
            unsigned long long m_shrinkSize; 
            int m_nVersion; 
        } m_falseTopTokens; 
    }  _extractor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)collectLoggableState:(id /* block */)arg1;
- (id)init;
- (bool)load:(id)arg1 error:(id*)arg2;
- (long long)negativeMapSize;
- (long long)positiveMapSize;
- (id)predict:(id)arg1;
- (bool)save:(id)arg1 error:(id*)arg2;
- (bool)train:(id)arg1 isPositive:(bool)arg2;

@end
