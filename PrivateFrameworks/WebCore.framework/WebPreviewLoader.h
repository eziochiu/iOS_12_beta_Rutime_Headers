/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebPreviewLoader : NSObject {
    struct RefPtr<WebCore::SharedBuffer, WTF::DumbPtrTraits<WebCore::SharedBuffer> > { 
        struct SharedBuffer {} *m_ptr; 
    }  _bufferedData;
    struct RetainPtr<NSMutableArray> { 
        void *m_ptr; 
    }  _bufferedDataArray;
    struct RefPtr<WebCore::PreviewLoaderClient, WTF::DumbPtrTraits<WebCore::PreviewLoaderClient> > { 
        struct PreviewLoaderClient {} *m_ptr; 
    }  _client;
    struct unique_ptr<WebCore::PreviewConverter, std::__1::default_delete<WebCore::PreviewConverter> > { 
        struct __compressed_pair<WebCore::PreviewConverter *, std::__1::default_delete<WebCore::PreviewConverter> > { 
            struct PreviewConverter {} *__value_; 
        } __ptr_; 
    }  _converter;
    bool  _hasProcessedResponse;
    bool  _hasSentDidReceiveResponse;
    long long  _lengthReceived;
    bool  _needsToCallDidFinishLoading;
    struct RefPtr<WebCore::ResourceLoader, WTF::DumbPtrTraits<WebCore::ResourceLoader> > { 
        struct ResourceLoader {} *m_ptr; 
    }  _resourceLoader;
    struct ResourceResponse { 
        bool m_isNull; 
        struct URL { 
            struct String { 
                struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
            unsigned int m_isValid : 1; 
            unsigned int m_protocolIsInHTTPFamily : 1; 
            unsigned int m_cannotBeABaseURL : 1; 
            unsigned int m_schemeEnd; 
            unsigned int m_userStart; 
            unsigned int m_userEnd; 
            unsigned int m_passwordEnd; 
            unsigned int m_hostEnd; 
            unsigned int m_portEnd; 
            unsigned int m_pathAfterLastSlash; 
            unsigned int m_pathEnd; 
            unsigned int m_queryEnd; 
        } m_url; 
        struct AtomicString { 
            struct String { 
                struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
        } m_mimeType; 
        long long m_expectedContentLength; 
        struct AtomicString { 
            struct String { 
                struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
        } m_textEncodingName; 
        struct AtomicString { 
            struct String { 
                struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
        } m_httpStatusText; 
        struct AtomicString { 
            struct String { 
                struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
        } m_httpVersion; 
        struct HTTPHeaderMap { 
            struct HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> > { 
                struct HashTable<WebCore::HTTPHeaderName, WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String> >, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName> > { 
                    struct KeyValuePair<WebCore::HTTPHeaderName, WTF::String> {} *m_table; 
                    unsigned int m_tableSize; 
                    unsigned int m_tableSizeMask; 
                    unsigned int m_keyCount; 
                    unsigned int m_deletedCount; 
                } m_impl; 
            } m_commonHeaders; 
            struct HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { 
                struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { 
                    struct KeyValuePair<WTF::String, WTF::String> {} *m_table; 
                    unsigned int m_tableSize; 
                    unsigned int m_tableSizeMask; 
                    unsigned int m_keyCount; 
                    unsigned int m_deletedCount; 
                } m_impl; 
            } m_uncommonHeaders; 
        } m_httpHeaderFields; 
        struct NetworkLoadMetrics { 
            struct Seconds { 
                double m_value; 
            } domainLookupStart; 
            struct Seconds { 
                double m_value; 
            } domainLookupEnd; 
            struct Seconds { 
                double m_value; 
            } connectStart; 
            struct Seconds { 
                double m_value; 
            } secureConnectionStart; 
            struct Seconds { 
                double m_value; 
            } connectEnd; 
            struct Seconds { 
                double m_value; 
            } requestStart; 
            struct Seconds { 
                double m_value; 
            } responseStart; 
            struct Seconds { 
                double m_value; 
            } responseEnd; 
            bool complete; 
            struct String { 
                struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } protocol; 
            struct optional<WTF::String> { 
                bool init_; 
                union storage_t<WTF::String> { 
                    unsigned char dummy_; 
                    struct String { 
                        struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                            struct StringImpl {} *m_ptr; 
                        } m_impl; 
                    } value_; 
                } storage_; 
            } remoteAddress; 
            struct optional<WTF::String> { 
                bool init_; 
                union storage_t<WTF::String> { 
                    unsigned char dummy_; 
                    struct String { 
                        struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { 
                            struct StringImpl {} *m_ptr; 
                        } m_impl; 
                    } value_; 
                } storage_; 
            } connectionIdentifier; 
            struct optional<WebCore::NetworkLoadPriority> { 
                bool init_; 
                union constexpr_storage_t<WebCore::NetworkLoadPriority> { 
                    unsigned char dummy_; 
                    int value_; 
                } storage_; 
            } priority; 
            struct optional<WebCore::HTTPHeaderMap> { 
                bool init_; 
                union storage_t<WebCore::HTTPHeaderMap> { 
                    unsigned char dummy_; 
                    struct HTTPHeaderMap { 
                        struct HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> > { 
                            struct HashTable<WebCore::HTTPHeaderName, WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::HTTPHeaderName, WTF::String> >, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::HashMap<WebCore::HTTPHeaderName, WTF::String, WTF::IntHash<WebCore::HTTPHeaderName>, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::StrongEnumHashTraits<WebCore::HTTPHeaderName> > { 
                                struct KeyValuePair<WebCore::HTTPHeaderName, WTF::String> {} *m_table; 
                                unsigned int m_tableSize; 
                                unsigned int m_tableSizeMask; 
                                unsigned int m_keyCount; 
                                unsigned int m_deletedCount; 
                            } m_impl; 
                        } m_commonHeaders; 
                        struct HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> > { 
                            struct HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::String>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::String> >, WTF::ASCIICaseInsensitiveHash, WTF::HashMap<WTF::String, WTF::String, WTF::ASCIICaseInsensitiveHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::String> >::KeyValuePairTraits, WTF::HashTraits<WTF::String> > { 
                                struct KeyValuePair<WTF::String, WTF::String> {} *m_table; 
                                unsigned int m_tableSize; 
                                unsigned int m_tableSizeMask; 
                                unsigned int m_keyCount; 
                                unsigned int m_deletedCount; 
                            } m_impl; 
                        } m_uncommonHeaders; 
                    } value_; 
                } storage_; 
            } requestHeaders; 
            struct optional<unsigned long long> { 
                bool init_; 
                union constexpr_storage_t<unsigned long long> { 
                    unsigned char dummy_; 
                    unsigned long long value_; 
                } storage_; 
            } requestHeaderBytesSent; 
            struct optional<unsigned long long> { 
                bool init_; 
                union constexpr_storage_t<unsigned long long> { 
                    unsigned char dummy_; 
                    unsigned long long value_; 
                } storage_; 
            } requestBodyBytesSent; 
            struct optional<unsigned long long> { 
                bool init_; 
                union constexpr_storage_t<unsigned long long> { 
                    unsigned char dummy_; 
                    unsigned long long value_; 
                } storage_; 
            } responseHeaderBytesReceived; 
            struct optional<unsigned long long> { 
                bool init_; 
                union constexpr_storage_t<unsigned long long> { 
                    unsigned char dummy_; 
                    unsigned long long value_; 
                } storage_; 
            } responseBodyBytesReceived; 
            struct optional<unsigned long long> { 
                bool init_; 
                union constexpr_storage_t<unsigned long long> { 
                    unsigned char dummy_; 
                    unsigned long long value_; 
                } storage_; 
            } responseBodyDecodedSize; 
        } m_networkLoadMetrics; 
        struct optional<WebCore::CertificateInfo> { 
            bool init_; 
            union storage_t<WebCore::CertificateInfo> { 
                unsigned char dummy_; 
                struct CertificateInfo { 
                    struct RetainPtr<__SecTrust *> { 
                        void *m_ptr; 
                    } m_trust; 
                    struct RetainPtr<const __CFArray *> { 
                        void *m_ptr; 
                    } m_certificateChain; 
                } value_; 
            } storage_; 
        } m_certificateInfo; 
        int m_httpStatusCode; 
        struct optional<WTF::Seconds> { 
            bool init_; 
            union constexpr_storage_t<WTF::Seconds> { 
                unsigned char dummy_; 
                struct Seconds { 
                    double m_value; 
                } value_; 
            } storage_; 
        } m_age; 
        struct optional<WTF::WallTime> { 
            bool init_; 
            union constexpr_storage_t<WTF::WallTime> { 
                unsigned char dummy_; 
                struct WallTime { 
                    double m_value; 
                } value_; 
            } storage_; 
        } m_date; 
        struct optional<WTF::WallTime> { 
            bool init_; 
            union constexpr_storage_t<WTF::WallTime> { 
                unsigned char dummy_; 
                struct WallTime { 
                    double m_value; 
                } value_; 
            } storage_; 
        } m_expires; 
        struct optional<WTF::WallTime> { 
            bool init_; 
            union constexpr_storage_t<WTF::WallTime> { 
                unsigned char dummy_; 
                struct WallTime { 
                    double m_value; 
                } value_; 
            } storage_; 
        } m_lastModified; 
        struct ParsedContentRange { 
            bool m_isValid; 
            long long m_firstBytePosition; 
            long long m_lastBytePosition; 
            long long m_instanceLength; 
        } m_contentRange; 
        struct CacheControlDirectives { 
            struct optional<WTF::Seconds> { 
                bool init_; 
                union constexpr_storage_t<WTF::Seconds> { 
                    unsigned char dummy_; 
                    struct Seconds { 
                        double m_value; 
                    } value_; 
                } storage_; 
            } maxAge; 
            struct optional<WTF::Seconds> { 
                bool init_; 
                union constexpr_storage_t<WTF::Seconds> { 
                    unsigned char dummy_; 
                    struct Seconds { 
                        double m_value; 
                    } value_; 
                } storage_; 
            } maxStale; 
            bool noCache; 
            bool noStore; 
            bool mustRevalidate; 
            bool immutable; 
        } m_cacheControlDirectives; 
        bool m_haveParsedCacheControlHeader; 
        bool m_haveParsedAgeHeader; 
        bool m_haveParsedDateHeader; 
        bool m_haveParsedExpiresHeader; 
        bool m_haveParsedLastModifiedHeader; 
        bool m_haveParsedContentRangeHeader; 
        int m_source; 
        struct optional<std::__1::array<unsigned char, 20> > { 
            bool init_; 
            union constexpr_storage_t<std::__1::array<unsigned char, 20> > { 
                unsigned char dummy_; 
                struct array<unsigned char, 20> { 
                    unsigned char __elems_[20]; 
                } value_; 
            } storage_; 
        } m_cacheBodyKey; 
        int m_type; 
        bool m_isRedirected; 
        int m_tainting; 
        unsigned int m_initLevel : 3; 
        bool m_isQuickLook; 
        struct RetainPtr<NSURLResponse> { 
            void *m_ptr; 
        } m_nsResponse; 
    }  _response;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_sendDidReceiveResponseIfNecessary;
- (void)appendDataArray:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2 lengthReceived:(long long)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)failed;
- (void)finishedAppending;
- (id)initWithResourceLoader:(struct ResourceLoader { int (**x1)(); unsigned int x2; struct RefPtr<WebCore::ResourceHandle, WTF::DumbPtrTraits<WebCore::ResourceHandle> > { struct ResourceHandle {} *x_3_1_1; } x3; struct RefPtr<WebCore::Frame, WTF::DumbPtrTraits<WebCore::Frame> > { struct Frame {} *x_4_1_1; } x4; struct RefPtr<WebCore::DocumentLoader, WTF::DumbPtrTraits<WebCore::DocumentLoader> > { struct DocumentLoader {} *x_5_1_1; } x5; struct ResourceResponse { bool x_6_1_1; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_2_2_1; unsigned int x_2_2_2 : 1; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8; unsigned int x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; unsigned int x_2_2_13; } x_6_1_2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_3_2_1; } x_6_1_3; long long x_6_1_4; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_5_2_1; } x_6_1_5; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_6_2_1; } x_6_1_6; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_7_2_1; } x_6_1_7; } x6; }*)arg1 resourceResponse:(const struct ResourceResponse { bool x1; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5; unsigned int x_2_1_6; unsigned int x_2_1_7; unsigned int x_2_1_8; unsigned int x_2_1_9; unsigned int x_2_1_10; unsigned int x_2_1_11; unsigned int x_2_1_12; unsigned int x_2_1_13; } x2; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; long long x4; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_5_1_1; } x5; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_6_1_1; } x6; struct AtomicString { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_7_1_1; } x7; }*)arg2;

@end
