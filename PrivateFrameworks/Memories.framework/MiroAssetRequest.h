/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAssetRequest : NSObject {
    PHAsset * _asset;
    bool  _isLocal;
    double  _progress;
    int  _requestID;
    PHAssetResource * _resource;
    double  _sizeFactor;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic) bool isLocal;
@property (nonatomic) double progress;
@property (nonatomic) int requestID;
@property (nonatomic, retain) PHAssetResource *resource;
@property (nonatomic) double sizeFactor;

- (void).cxx_destruct;
- (id)asset;
- (id)description;
- (bool)isLocal;
- (double)progress;
- (int)requestID;
- (id)resource;
- (void)setAsset:(id)arg1;
- (void)setIsLocal:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setRequestID:(int)arg1;
- (void)setResource:(id)arg1;
- (void)setSizeFactor:(double)arg1;
- (double)sizeFactor;

@end
