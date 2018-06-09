/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFacesArrayGalleryCollection : NTKCGalleryCollection {
    NSArray * _faces;
}

@property (nonatomic, retain) NSArray *faces;

- (void).cxx_destruct;
- (id)faceAtIndex:(unsigned long long)arg1;
- (id)faces;
- (unsigned long long)indexOfFace:(id)arg1;
- (id)initWithTitle:(id)arg1 faces:(id)arg2;
- (unsigned long long)numberOfFaces;
- (void)setFaces:(id)arg1;

@end
