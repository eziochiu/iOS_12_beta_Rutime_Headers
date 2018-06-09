/* made by EzioChiu.
 */

@protocol ASDRingBuffer <NSObject>

@required

- (void)allocate;
- (void)clear;
- (void)deallocate;
- (long long)frameCapacity;
- (bool)isAllocated;
- (id /* block */)readBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*, unsigned int, long long, void*, id, SEL
- (ASDStreamFormat *)readFormat;
- (id /* block */)readWithZerosBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*, unsigned int, long long, unsigned int*, unsigned int*, unsigned int*, void*, id, SEL
- (void)setFrameCapacity:(long long)arg1;
- (void)setReadFormat:(ASDStreamFormat *)arg1;
- (void)setWriteFormat:(ASDStreamFormat *)arg1;
- (id /* block */)writeBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*, unsigned int, long long, void*, id, SEL
- (ASDStreamFormat *)writeFormat;

@end
