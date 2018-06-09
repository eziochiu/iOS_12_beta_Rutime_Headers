/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface AREnvironmentProbeUpdate : NSObject <ARResultData> {
    NSArray * _addedProbeAnchors;
    AREnvironmentProbeManager * _manager;
    NSArray * _removedProbeAnchors;
    NSArray * _updatedProbeAnchors;
}

@property (nonatomic, retain) NSArray *addedProbeAnchors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) AREnvironmentProbeManager *manager;
@property (nonatomic, retain) NSArray *removedProbeAnchors;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *updatedProbeAnchors;

- (void).cxx_destruct;
- (id)addedProbeAnchors;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)manager;
- (id)removedProbeAnchors;
- (void)setAddedProbeAnchors:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setRemovedProbeAnchors:(id)arg1;
- (void)setUpdatedProbeAnchors:(id)arg1;
- (id)updatedProbeAnchors;

@end
