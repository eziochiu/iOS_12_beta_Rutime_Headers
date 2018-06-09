/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
 */

@interface RTCI420Buffer : NSObject <RTCI420Buffer> {
    struct scoped_refptr<webrtc::I420BufferInterface> { 
        struct I420BufferInterface {} *ptr_; 
    }  _i420Buffer;
}

@property (nonatomic, readonly) int chromaHeight;
@property (nonatomic, readonly) int chromaWidth;
@property (nonatomic, readonly) const char *dataU;
@property (nonatomic, readonly) const char *dataV;
@property (nonatomic, readonly) const char *dataY;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) int strideU;
@property (nonatomic, readonly) int strideV;
@property (nonatomic, readonly) int strideY;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int width;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)chromaHeight;
- (int)chromaWidth;
- (const char *)dataU;
- (const char *)dataV;
- (const char *)dataY;
- (int)height;
- (id)initWithFrameBuffer:(struct scoped_refptr<webrtc::I420BufferInterface> { struct I420BufferInterface {} *x1; })arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 strideY:(int)arg3 strideU:(int)arg4 strideV:(int)arg5;
- (int)strideU;
- (int)strideV;
- (int)strideY;
- (id)toI420;
- (int)width;

@end
