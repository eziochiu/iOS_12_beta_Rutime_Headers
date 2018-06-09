/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDecompressionInfo : NSObject {
    bool  decompressionComplete;
    NSData * imageData;
    unsigned long long  jpegDecodeRequestID;
    struct CGSize { 
        double width; 
        double height; 
    }  maxSize;
    bool  metadataComplete;
    NSObject<OS_dispatch_semaphore> * metadataSemaphore;
    int  renderingIntent;
    NSObject<OS_dispatch_semaphore> * syncSemaphore;
}

- (void).cxx_destruct;
- (id)initWithData:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 renderingIntent:(int)arg3;

@end
