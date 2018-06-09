/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRDefaultBufferMap : NSObject <TXRBufferMap> {
    TXRDefaultBuffer * _buffer;
    void * _bytes;
}

@property (nonatomic, readonly) void*bytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void*)bytes;
- (id)initForBuffer:(id)arg1 withBytes:(void*)arg2;

@end
