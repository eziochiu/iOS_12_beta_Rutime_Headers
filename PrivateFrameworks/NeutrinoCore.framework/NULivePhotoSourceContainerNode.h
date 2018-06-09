/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NULivePhotoSourceContainerNode : NUSourceContainerNode {
    NUSourceContainerNode * _image;
    NUSourceContainerNode * _video;
}

- (void).cxx_destruct;
- (id)containerNodeForPipelineState:(id)arg1;
- (id)initWithAssetIdentifier:(id)arg1;
- (id)initWithImageContainerNode:(id)arg1 videoContainerNode:(id)arg2 assetIdentifier:(id)arg3;
- (id)primarySourceNode;
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(struct { long long x1; long long x2; }*)arg2 error:(out id*)arg3;
- (id)sourceNodeForPipelineState:(id)arg1 error:(out id*)arg2;

@end
