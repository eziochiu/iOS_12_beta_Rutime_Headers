/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface EspressoDataFrameExecutor : NSObject {
    NSArray * _outputMatchingBuffers;
    struct vector<__CVBuffer *, std::__1::allocator<__CVBuffer *> > { 
        struct __CVBuffer {} **__begin_; 
        struct __CVBuffer {} **__end_; 
        struct __compressed_pair<__CVBuffer **, std::__1::allocator<__CVBuffer *> > { 
            struct __CVBuffer {} **__value_; 
        } __end_cap_; 
    }  pixelbuffers_to_release;
    struct vector<void *, std::__1::allocator<void *> > { 
        void **__begin_; 
        void **__end_; 
        struct __compressed_pair<void **, std::__1::allocator<void *> > { 
            void **__value_; 
        } __end_cap_; 
    }  pointers_to_free;
}

@property (retain) NSArray *outputMatchingBuffers;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)bindInputsFromFrame:(id)arg1 toNetwork:(struct { void *x1; int x2; })arg2;
- (int)bindOutputsFromFrame:(id)arg1 toNetwork:(struct { void *x1; int x2; })arg2;
- (int)bindOutputsFromFrame:(id)arg1 toNetwork:(struct { void *x1; int x2; })arg2 referenceNetwork:(struct { void *x1; int x2; })arg3;
- (void)dealloc;
- (void)freeTemporaryResources;
- (id)outputMatchingBuffers;
- (void)setOutputMatchingBuffers:(id)arg1;

@end
