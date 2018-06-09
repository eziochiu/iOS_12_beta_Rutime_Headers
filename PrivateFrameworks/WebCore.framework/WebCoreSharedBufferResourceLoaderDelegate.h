/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    bool  _complete;
    struct RetainPtr<NSData> { 
        void *m_ptr; 
    }  _data;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                unsigned char __a_; 
            } value; 
        } m_byte; 
    }  _dataLock;
    long long  _expectedContentSize;
    struct ImageDecoderAVFObjC { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct RetainPtr<AVURLAsset> { void *x_5_1_1; } x5; struct RetainPtr<AVAssetTrack> { void *x_6_1_1; } x6; struct RetainPtr<WebCoreSharedBufferResourceLoaderDelegate> { void *x_7_1_1; } x7; struct RetainPtr<OpaqueVTImageRotationSession *> { void *x_8_1_1; } x8; struct RetainPtr<__CVPixelBufferPool *> { void *x_9_1_1; } x9; struct Ref<WebCore::WebCoreDecompressionSession, WTF::DumbPtrTraits<WebCore::WebCoreDecompressionSession> > { struct WebCoreDecompressionSession {} *x_10_1_1; } x10; struct SampleMap { struct DecodeOrderSampleMap { struct map<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, WTF::FastAllocator<std::__1::pair<const std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > > { struct __tree<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::__map_value_compare<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, true>, WTF::FastAllocator<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_4_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, WTF::FastAllocator<std::__1::__tree_node<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_6_1; } x_2_5_1; } x_1_4_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, true> > { unsigned long long x_3_5_1; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_11_1_1; } x11; } * _parent;
    struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16> { 
        struct RetainPtr<AVAssetResourceLoadingRequest> {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _requests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)canFulfillRequest:(id)arg1;
- (void)enqueueRequest:(id)arg1;
- (void)fulfillPendingRequests;
- (void)fulfillRequest:(id)arg1;
- (id)initWithParent:(struct ImageDecoderAVFObjC { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct RetainPtr<AVURLAsset> { void *x_5_1_1; } x5; struct RetainPtr<AVAssetTrack> { void *x_6_1_1; } x6; struct RetainPtr<WebCoreSharedBufferResourceLoaderDelegate> { void *x_7_1_1; } x7; struct RetainPtr<OpaqueVTImageRotationSession *> { void *x_8_1_1; } x8; struct RetainPtr<__CVPixelBufferPool *> { void *x_9_1_1; } x9; struct Ref<WebCore::WebCoreDecompressionSession, WTF::DumbPtrTraits<WebCore::WebCoreDecompressionSession> > { struct WebCoreDecompressionSession {} *x_10_1_1; } x10; struct SampleMap { struct DecodeOrderSampleMap { struct map<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, WTF::FastAllocator<std::__1::pair<const std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > > { struct __tree<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::__map_value_compare<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, true>, WTF::FastAllocator<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_4_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, WTF::FastAllocator<std::__1::__tree_node<std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_6_1; } x_2_5_1; } x_1_4_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, std::__1::__value_type<std::__1::pair<WTF::MediaTime, WTF::MediaTime>, WTF::RefPtr<WebCore::MediaSample, WTF::DumbPtrTraits<WebCore::MediaSample> > >, std::__1::less<std::__1::pair<WTF::MediaTime, WTF::MediaTime> >, true> > { unsigned long long x_3_5_1; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_11_1_1; } x11; }*)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)setExpectedContentSize:(long long)arg1;
- (void)updateData:(id)arg1 complete:(bool)arg2;

@end
