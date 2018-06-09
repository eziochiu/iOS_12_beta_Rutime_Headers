/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PDFigDecoder : PDImageDecoder {
    NSMutableDictionary * _containersByRequestID;
    NSObject<OS_dispatch_queue> * _decodeFailureQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PHRecyclableObjectVendor * _optionVendor;
}

+ (id)sharedDecoder;

- (void).cxx_destruct;
- (void)cancelDecodeRequestForID:(unsigned long long)arg1;
- (unsigned long long)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 applyOrientationTransform:(bool)arg4 waitUntilComplete:(bool)arg5 completion:(id /* block */)arg6;
- (id)init;

@end
