/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNIdentifyJunkRequest : VNImageBasedRequest

- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
