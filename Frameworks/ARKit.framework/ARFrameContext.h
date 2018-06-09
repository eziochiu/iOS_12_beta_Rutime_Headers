/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFrameContext : NSObject <ARResultDataContext> {
    NSMutableArray * _anchorsToAdd;
    NSMutableArray * _anchorsToRemove;
    bool  _didRelocalize;
    unsigned long long  _frameDebugOptions;
    ARImageData * _imageData;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _relocalizationDeltaTransform;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _sessionTransform;
    bool  _sessionTransformReset;
    bool  _sessionTransformShouldResumeCameraHeading;
    bool  _sessionTransformShouldResumeCameraPosition;
    bool  _sessionTransformUpdated;
    bool  _shouldRemoveExistingAnchors;
    long long  _worldAlignment;
    ARWorldMap * _worldMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didRelocalize;
@property (nonatomic) unsigned long long frameDebugOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ARImageData *imageData;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } relocalizationDeltaTransform;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } sessionTransform;
@property (nonatomic, readonly) bool sessionTransformReset;
@property (nonatomic, readonly) bool sessionTransformShouldResumeCameraHeading;
@property (nonatomic, readonly) bool sessionTransformShouldResumeCameraPosition;
@property (nonatomic, readonly) bool sessionTransformUpdated;
@property (nonatomic, readonly) bool shouldRemoveExistingAnchors;
@property (readonly) Class superclass;
@property (nonatomic) long long worldAlignment;
@property (nonatomic, retain) ARWorldMap *worldMap;

- (void).cxx_destruct;
- (void)addAnchor:(id)arg1;
- (id)anchorsToAdd;
- (id)anchorsToRemove;
- (long long)cameraPosition;
- (void)clearAddedAnchors;
- (bool)didRelocalize;
- (unsigned long long)frameDebugOptions;
- (id)imageData;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })relocalizationDeltaTransform;
- (void)removeAnchor:(id)arg1;
- (void)resetSessionTransform;
- (id)resultDataOfClass:(Class)arg1;
- (void)resumeSessionCameraPosition;
- (void)resumeSessionCameraPositionAndHeading;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })sessionTransform;
- (bool)sessionTransformReset;
- (bool)sessionTransformShouldResumeCameraHeading;
- (bool)sessionTransformShouldResumeCameraPosition;
- (bool)sessionTransformUpdated;
- (void)setDidRelocalize:(bool)arg1;
- (void)setFrameDebugOptions:(unsigned long long)arg1;
- (void)setImageData:(id)arg1;
- (void)setRelocalizationDeltaTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setSessionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWorldAlignment:(long long)arg1;
- (void)setWorldMap:(id)arg1;
- (bool)shouldRemoveExistingAnchors;
- (long long)worldAlignment;
- (id)worldMap;

@end
