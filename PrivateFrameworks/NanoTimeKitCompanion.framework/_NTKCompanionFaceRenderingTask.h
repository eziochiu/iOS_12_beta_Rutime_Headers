/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKCompanionFaceRenderingTask : NSObject {
    id /* block */  _completionHandler;
    long long  _detailMode;
    NTKFace * _face;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) long long detailMode;
@property (nonatomic, readonly) NTKFace *face;
@property (getter=isMemberOfBatch, nonatomic, readonly) bool memberOfBatch;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (long long)detailMode;
- (id)face;
- (id)initWithFace:(id)arg1 detailMode:(long long)arg2 completionHandler:(id /* block */)arg3;
- (bool)isMemberOfBatch;

@end
