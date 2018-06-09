/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARTechniqueGatherContext : NSObject <ARResultDataContext> {
    id  _parentContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *gatheredData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id parentContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)anchorsToAdd;
- (id)anchorsToRemove;
- (long long)cameraPosition;
- (id)captureGatheredData;
- (id)gatheredData;
- (id)imageData;
- (id)initWithParentContext:(id)arg1;
- (id)parentContext;
- (id)resultDataOfClass:(Class)arg1;

@end
