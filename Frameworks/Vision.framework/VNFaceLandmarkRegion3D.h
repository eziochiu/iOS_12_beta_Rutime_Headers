/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceLandmarkRegion3D : VNFaceLandmarkRegion {
    const /* Warning: Unrecognized filer type: '' using 'void*' */ void** _points;
}

@property const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;

- (void)dealloc;
- (id)initWithFaceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 points:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg2 pointCount:(unsigned long long)arg3;
- (void)pointAtIndex:(unsigned long long)arg1;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (void)setPoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1;

@end
