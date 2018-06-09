/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceLandmarks2D : VNFaceLandmarks {
    VNFaceLandmarkRegion2D * _allPoints;
    VNFaceLandmarkRegion2D * _faceContour;
    VNFaceLandmarkRegion2D * _innerLips;
    VNFaceLandmarkRegion2D * _leftEye;
    VNFaceLandmarkRegion2D * _leftEyebrow;
    VNFaceLandmarkRegion2D * _leftPupil;
    VNFaceLandmarkRegion2D * _medianLine;
    VNFaceLandmarkRegion2D * _nose;
    VNFaceLandmarkRegion2D * _noseCrest;
    VNFaceLandmarkRegion2D * _outerLips;
    VNFaceLandmarkRegion2D * _rightEye;
    VNFaceLandmarkRegion2D * _rightEyebrow;
    VNFaceLandmarkRegion2D * _rightPupil;
}

@property (readonly) VNFaceLandmarkRegion2D *allPoints;
@property (readonly) VNFaceLandmarkRegion2D *faceContour;
@property (readonly) VNFaceLandmarkRegion2D *innerLips;
@property (readonly) VNFaceLandmarkRegion2D *leftEye;
@property (readonly) VNFaceLandmarkRegion2D *leftEyebrow;
@property (readonly) VNFaceLandmarkRegion2D *leftPupil;
@property (readonly) VNFaceLandmarkRegion2D *medianLine;
@property (readonly) VNFaceLandmarkRegion2D *nose;
@property (readonly) VNFaceLandmarkRegion2D *noseCrest;
@property (readonly) VNFaceLandmarkRegion2D *outerLips;
@property (readonly) VNFaceLandmarkRegion2D *rightEye;
@property (readonly) VNFaceLandmarkRegion2D *rightEyebrow;
@property (readonly) VNFaceLandmarkRegion2D *rightPupil;

- (void).cxx_destruct;
- (id)allPoints;
- (void*)createPointArray:(const int*)arg1 count:(unsigned long long)arg2;
- (id)faceContour;
- (id)innerLips;
- (id)leftEye;
- (id)leftEyebrow;
- (id)leftPupil;
- (id)medianLine;
- (id)nose;
- (id)noseCrest;
- (id)outerLips;
- (id)rightEye;
- (id)rightEyebrow;
- (id)rightPupil;

@end
