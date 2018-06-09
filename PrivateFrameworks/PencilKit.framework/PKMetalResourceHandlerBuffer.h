/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalResourceHandlerBuffer : NSObject {
    PKMetalBuffer * _buffer;
    unsigned long long  _bufferSize;
    unsigned long long  _currentOffset;
    <MTLDevice> * _device;
    unsigned long long  _options;
    bool  _purgeable;
}

- (void).cxx_destruct;
- (id)initWithSize:(unsigned long long)arg1 options:(unsigned long long)arg2 device:(id)arg3 purgeable:(bool)arg4;
- (id)newBufferWithLength:(unsigned long long)arg1 bytes:(const void*)arg2 outOffset:(unsigned long long*)arg3;

@end
