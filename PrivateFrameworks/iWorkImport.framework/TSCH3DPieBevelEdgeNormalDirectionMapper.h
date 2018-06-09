/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DPieBevelEdgeNormalDirectionMapper : TSCH3DNormalDirectionMapper {
    long long  mAngleLimit;
    long long  mAngleSteps;
    long long  mRadiusLimit;
    long long  mRadiusSteps;
    long long  mTopMeshOffset;
}

- (id)initWithTopMeshOffset:(long long)arg1 angleSteps:(long long)arg2 radiusSteps:(long long)arg3 angleLimit:(long long)arg4 radiusLimit:(long long)arg5;
- (void)mapFromVertexArray:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 normalArray:(const struct tvec3<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg2 normalMatrix:(const struct tmat3x3<float> { struct tvec3<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; } x1[3]; }*)arg3 numVertices:(long long)arg4 destination:(struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x1; char *x2; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x_3_1_1; } x3; }*)arg5;

@end
