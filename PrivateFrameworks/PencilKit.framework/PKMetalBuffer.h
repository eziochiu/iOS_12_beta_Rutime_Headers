/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalBuffer : NSObject <PKMetalResource> {
    int  _isPurged;
    unsigned long long  _lockCount;
    <MTLBuffer> * _metalBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MTLBuffer> *metalBuffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1 length:(unsigned long long)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4;
- (bool)isPurged;
- (bool)lock;
- (id)metalBuffer;
- (void)unlock;

@end
