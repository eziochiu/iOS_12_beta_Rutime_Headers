/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLCountersTraceCommandBuffer : NSObject {
    struct BinaryBuffer { 
        int (**_vptr$AppendBuffer)(); 
        struct StreamBuffer { 
            char *bytes; 
            char *pWrite; 
            char *pEnd; 
        } stream; 
    }  _commands;
    NSMutableArray * _encoders;
    unsigned long long  _flags;
    struct AppendBuffer { 
        int (**_vptr$AppendBuffer)(); 
        struct StreamBuffer { 
            char *bytes; 
            char *pWrite; 
            char *pEnd; 
        } stream; 
    }  _samples;
    unsigned long long  _timestamp;
}

- (id).cxx_construct;
- (void)appendSamples:(const void*)arg1 length:(unsigned long long)arg2;
- (id)blitCommandEncoder;
- (id)computeCommandEncoder;
- (void)dealloc;
- (id)init:(bool)arg1;
- (void)presentDrawable:(id)arg1;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (id)renderCommandEncoder;
- (void)saveCommandBuffer:(const void*)arg1 queue:(id)arg2 profilingResults:(id)arg3;
- (void)waitUntilCompleted;
- (void)waitUntilScheduled;

@end
