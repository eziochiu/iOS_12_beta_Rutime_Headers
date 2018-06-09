/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface EspressoInnerProductWeightsForMPS : NSObject <MPSCNNConvolutionDataSource> {
    struct shared_ptr<Espresso::blob<float, 1> > { 
        struct blob<float, 1> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  biases_blob;
    unsigned int  data_type;
    struct inner_product_uniforms { 
        unsigned int nC; 
        unsigned int nB; 
        int has_biases; 
        int has_relu; 
        int has_tanh; 
        float tanh_alpha; 
        float tanh_beta; 
        int has_prelu; 
        int is_lookup; 
        int quantization_mode; 
        int add_to_output; 
        int use_raw_buffers; 
        int fused_activation_mode; 
        float fused_activation_alpha; 
        float fused_activation_beta; 
        unsigned int m; 
        unsigned int k; 
        unsigned int n; 
        unsigned int Abytes; 
        unsigned int Bbytes; 
        unsigned int k4; 
        unsigned int n4; 
        unsigned int n8; 
        unsigned int n8_splitk; 
        int argmax_tree_n_clusters; 
        int argmax_tree_n_clusters_keep; 
    }  params;
    struct shared_ptr<Espresso::blob<float, 1> > { 
        struct blob<float, 1> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  quantization_lut;
    struct unique_ptr<float [] __attribute__((ext_vector_type(2))), std::__1::default_delete<float [] __attribute__((ext_vector_type(2)))> >="__ptr_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::__1::default_delete<float [] __attribute__((ext_vector_type(2)))> >="__value_"^ {}  quantization_ranges;
    struct shared_ptr<Espresso::blob<unsigned char, 2> > { 
        struct blob<unsigned char, 2> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  quantized_weights_blob;
    struct shared_ptr<Espresso::blob<float, 2> > { 
        struct blob<float, 2> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  weights_blob;
    struct shared_ptr<Espresso::blob<unsigned short, 2> > { 
        struct blob<unsigned short, 2> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  weights_f16_blob;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (float*)biasTerms;
- (unsigned int)dataType;
- (id)descriptor;
- (id)initWithParams:(struct inner_product_uniforms { unsigned int x1; unsigned int x2; int x3; int x4; int x5; float x6; float x7; int x8; int x9; int x10; int x11; int x12; int x13; float x14; float x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; int x25; int x26; })arg1;
- (id)label;
- (bool)load;
- (float*)lookupTableForUInt8Kernel;
- (void)purge;
- (/* Warning: Unrecognized filer type: '1' using 'void*' */ void**)rangesForUInt8Kernel;
- (bool)ready;
- (void*)weights;

@end
