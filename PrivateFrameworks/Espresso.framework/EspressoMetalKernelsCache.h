/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface EspressoMetalKernelsCache : NSObject {
    <MTLDevice> * _device;
    NSString * _kernelPrefix;
    NSDictionary * _m_kernelCache;
    NSMutableDictionary * auxLibraries;
    NSObject<OS_dispatch_queue> * dictionary_write_queue;
    bool  isSupportingiOSGPUFamilyV2;
    <MTLLibrary> * m_DefaultLibrary;
    <MTLLibrary> * m_ShaderLibrary;
    NSMutableDictionary * m_kernelCache_rw;
}

@property (nonatomic, retain) NSString *kernelPrefix;
@property (retain) NSDictionary *m_kernelCache;

- (void).cxx_destruct;
- (void)addLibraryAtPath:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)kernelForFunction:(const char *)arg1;
- (id)kernelForFunction:(const char *)arg1 cacheString:(const char *)arg2 withConstants:(id)arg3;
- (id)kernelPrefix;
- (void)loadLibraryNamed:(id)arg1;
- (id)m_kernelCache;
- (void)setKernelPrefix:(id)arg1;
- (void)setM_kernelCache:(id)arg1;
- (bool)shouldUseTexArray;

@end
