/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKResourceHandler : NSObject {
    int  _backingHeight;
    int  _backingWidth;
    DKDGLShader * _blitShader;
    struct unordered_map<unsigned long long, DKDGLFrameBufferTextureConfig *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, DKDGLFrameBufferTextureConfig *> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, std::__1::hash<unsigned long long>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, std::__1::equal_to<unsigned long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _drawingTexConfigs;
    DKDGLShader * _linesShader;
    DKDGLShader * _paintCircleShader;
    DKDGLShader * _paintShader;
    DKDGLFrameBufferTextureConfig * _paintTexConfig;
    DKDGLShader * _paperShader;
    DKDGLShader * _particleShader;
    DKDGLDataBuffer * _quadBuffer;
    PKGLContext * _sharedContext;
    struct __CVOpenGLESTextureCache { } * _textureCache;
    struct unordered_map<unsigned long long, DKDGLShader *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, DKDGLShader *> > > { 
        struct __hash_table<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, DKDGLShader *> > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *> *> {} **__value_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *> *> *> > { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *> *> {} *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, std::__1::hash<unsigned long long>, true> > { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, std::__1::equal_to<unsigned long long>, true> > { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _uberShaders;
}

@property (nonatomic, readonly) int backingHeight;
@property (nonatomic, readonly) int backingWidth;
@property (nonatomic, readonly) DKDGLShader *blitShader;
@property (nonatomic, readonly) DKDGLShader *linesShader;
@property (nonatomic, readonly) DKDGLShader *paintCircleShader;
@property (nonatomic, readonly) DKDGLShader *paintShader;
@property (nonatomic, readonly) DKDGLShader *paperShader;
@property (nonatomic, readonly) DKDGLShader *particleShader;

+ (id)inkBundle;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)backingHeight;
- (int)backingWidth;
- (id)blitShader;
- (id)cachedQuadDataBuffer;
- (id)claimDrawingFrameBuffer;
- (id)claimDrawingFrameBufferWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)claimPaintFrameBuffer;
- (id)compositeEraseShaderWithMode:(long long)arg1 clipping:(bool)arg2;
- (id)compositeMultiplyShaderWithMode:(long long)arg1 clipping:(bool)arg2;
- (id)compositeOverShaderWithMode:(long long)arg1 clipping:(bool)arg2;
- (id)compositePaperShaderWithMode:(long long)arg1;
- (id)compositeSoftWhiteShaderWithMode:(long long)arg1 clipping:(bool)arg2;
- (id)createFramebuffer:(struct CGSize { double x1; double x2; })arg1 textureConfig:(id)arg2;
- (void)dealloc;
- (id)definesForMode:(long long)arg1 clipping:(bool)arg2;
- (id)drawingTexConfigWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)flushMemoryIfPossible;
- (id)glVersionString;
- (id)init;
- (id)initWithPixelSize:(struct CGSize { double x1; double x2; })arg1 andGLContext:(id)arg2;
- (id)lineDataBuffer;
- (id)linesShader;
- (id)paintCircleShader;
- (id)paintDataBufferWithCapacity:(unsigned long long)arg1 dynamicDraw:(bool)arg2;
- (id)paintShader;
- (id)paintTexConfig;
- (id)paperShader;
- (id)particleShader;
- (void)preloadResources;
- (id)quadDataBufferForDynamicDraw:(bool)arg1;
- (void)setPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (id)uberShaderForKey:(struct { union { struct { unsigned int x_1_2_1 : 3; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 4; } x_1_1_1; unsigned long long x_1_1_2; } x1; })arg1;
- (void)updateFullScreenQuadDataBuffer:(id)arg1 flipped:(bool)arg2;

@end
