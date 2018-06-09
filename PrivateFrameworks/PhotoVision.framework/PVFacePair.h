/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

@interface PVFacePair : NSObject {
    PVFace * _face1;
    PVFace * _face2;
    double  _score;
}

@property (nonatomic, readonly) PVFace *face1;
@property (nonatomic, readonly) PVFace *face2;
@property (nonatomic, readonly) double score;

- (void).cxx_destruct;
- (id)face1;
- (id)face2;
- (id)initWithFace:(id)arg1 andFace:(id)arg2 andScore:(double)arg3;
- (double)score;

@end
