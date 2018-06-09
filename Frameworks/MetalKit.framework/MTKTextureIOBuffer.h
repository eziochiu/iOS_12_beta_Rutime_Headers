/* made by EzioChiu
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKTextureIOBuffer : NSObject <TXRBuffer> {
    <MTLBuffer> * _buffer;
}

@property (nonatomic, readonly) <MTLBuffer> *buffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buffer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocNotification:(id /* block */)arg3 device:(id)arg4 error:(id*)arg5;
- (id)initWithLength:(unsigned long long)arg1 device:(id)arg2;
- (id)map;

@end
