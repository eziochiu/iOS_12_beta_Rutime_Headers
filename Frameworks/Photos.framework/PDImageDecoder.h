/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PDImageDecoder : NSObject

+ (id)sharedDecoder;

- (void)cancelDecodeRequestForID:(unsigned long long)arg1;
- (unsigned long long)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 applyOrientationTransform:(bool)arg4 waitUntilComplete:(bool)arg5 completion:(id /* block */)arg6;

@end
