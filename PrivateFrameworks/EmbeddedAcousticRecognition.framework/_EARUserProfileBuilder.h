/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARUserProfileBuilder : NSObject {
    struct shared_ptr<quasar::LmeDataFactory> { 
        struct LmeDataFactory {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _dataFactory;
    struct unique_ptr<quasar::G2P, std::__1::default_delete<quasar::G2P> > { 
        struct __compressed_pair<quasar::G2P *, std::__1::default_delete<quasar::G2P> > { 
            struct G2P {} *__value_; 
        } __ptr_; 
    }  _g2p;
    struct unique_ptr<quasar::PersonalizationRecipe, std::__1::default_delete<quasar::PersonalizationRecipe> > { 
        struct __compressed_pair<quasar::PersonalizationRecipe *, std::__1::default_delete<quasar::PersonalizationRecipe> > { 
            struct PersonalizationRecipe {} *__value_; 
        } __ptr_; 
    }  _personalizationRecipe;
    struct shared_ptr<quasar::PronCache<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > > { 
        struct PronCache<std::__1::basic_string<char>, std::__1::vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > > {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _pronCache;
    struct unique_ptr<quasar::LmeData, std::__1::default_delete<quasar::LmeData> > { 
        struct __compressed_pair<quasar::LmeData *, std::__1::default_delete<quasar::LmeData> > { 
            struct LmeData {} *__value_; 
        } __ptr_; 
    }  _quasarLmeData;
    struct BasicTextSanitizer { 
        int (**_vptr$TextSanitizer)(); 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mUnicodeOutliers; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mSpecialChars; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mDupSpacePattern; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mCtrlCharsPattern; 
        int state; 
        struct unordered_map<std::__1::basic_string<char>, std::__1::basic_string<char>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::basic_string<char> > > > { 
            struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> > > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> *> {} **__value_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> *> *> > { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, void *> *> {} *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::hash<std::__1::basic_string<char> >, true> > { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, true> > { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } UTF8_MAP; 
        struct unordered_map<char32_t, char32_t, std::__1::hash<char32_t>, std::__1::equal_to<char32_t>, std::__1::allocator<std::__1::pair<const char32_t, char32_t> > > { 
            struct __hash_table<std::__1::__hash_value_type<char32_t, char32_t>, std::__1::__unordered_map_hasher<char32_t, std::__1::__hash_value_type<char32_t, char32_t>, std::__1::hash<char32_t>, true>, std::__1::__unordered_map_equal<char32_t, std::__1::__hash_value_type<char32_t, char32_t>, std::__1::equal_to<char32_t>, true>, std::__1::allocator<std::__1::__hash_value_type<char32_t, char32_t> > > { 
                struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> *> *> > > { 
                    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> *> *> > > { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> *> {} **__value_; 
                        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> *> *> > { 
                            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> *> *> > { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> *> { 
                        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<char32_t, char32_t>, void *> *> {} *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<char32_t, std::__1::__hash_value_type<char32_t, char32_t>, std::__1::hash<char32_t>, true> > { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__1::__unordered_map_equal<char32_t, std::__1::__hash_value_type<char32_t, char32_t>, std::__1::equal_to<char32_t>, true> > { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } unicode_map; 
    }  _sanitizer;
    struct unique_ptr<sdapi::SdapiTokenizer, std::__1::default_delete<sdapi::SdapiTokenizer> > { 
        struct __compressed_pair<sdapi::SdapiTokenizer *, std::__1::default_delete<sdapi::SdapiTokenizer> > { 
            struct SdapiTokenizer {} *__value_; 
        } __ptr_; 
    }  _tokenizer;
    struct map<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > > > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::vector<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> >, std::__1::allocator<std::__1::vector<quasar::LmeDataFactoryBase::Word, std::__1::allocator<quasar::LmeDataFactoryBase::Word> > > > >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _userData;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPersonalizationData:(id)arg1;
- (void)addPersonalizationJsonData:(id)arg1;
- (void)addWordWithParts:(id)arg1 templateName:(id)arg2;
- (id)dataProfile;
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 generalVoc:(id)arg5 emptyVoc:(id)arg6 pgVoc:(id)arg7 lexiconEnh:(id)arg8 tokenEnh:(id)arg9 paramsetHolder:(id)arg10;
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 sdapiOverrides:(id)arg3 generalVoc:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 lexiconEnh:(id)arg7 tokenEnh:(id)arg8 paramsetHolder:(id)arg9;
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiOverrides:(id)arg3 withSdapiConfig:(id)arg4;
- (id)pronunciationsForOrthography:(id)arg1;
- (void)readUserProfile:(id)arg1;
- (void)removeAllWords;
- (id)sanitizedStringWithString:(id)arg1;
- (void)writeOutUserDataToJson:(id)arg1 withConfig:(id)arg2;

@end