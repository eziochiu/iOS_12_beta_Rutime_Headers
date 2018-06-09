/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARCubemapCompletion : NSObject {
    float  _alpha_threshold;
    float  _b_bias;
    double  _bias_exposure_threshold;
    unsigned long long  _bias_height;
    int  _bias_mask;
    CIContext * _contextWithMTLDevice;
    ARGPUCubemapConverter * _cubemapConverter;
    CIContext * _defaultContext;
    <MTLDevice> * _device;
    void * _espresso_ctx;
    struct { 
        void *plan; 
        int network_index; 
    }  _espresso_net;
    void * _espresso_plan;
    struct { 
        float bias_r; 
        float bias_g; 
        float bias_b; 
        float scale; 
        bool network_wants_bgr; 
    }  _espresso_processing_params;
    float  _g_bias;
    unsigned long long  _gan_size;
    <MTLCommandQueue> * _queue;
    float  _r_bias;
    struct vector<unsigned char, std::__1::allocator<unsigned char> > { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { 
            char *__value_; 
        } __end_cap_; 
    }  _randomNumbers;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  _vImageBuffer;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)blendSeam:(id)arg1;
- (id)completeCubemap:(id)arg1 cameraExposure:(double)arg2;
- (id)completeLatLongImage:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)toCIImage:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1;
- (id)toMTLTexture:(id)arg1;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })toVImageBuffer:(id)arg1;

@end
