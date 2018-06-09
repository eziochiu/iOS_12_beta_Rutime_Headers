/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFSelectorPipelineStage : PFPipelineStage {
    SEL  _workSelector;
}

@property (readonly) SEL workSelector;

- (id)description;
- (id)initWithWorkSelector:(SEL)arg1;
- (void)invokeWorkForJob:(id)arg1 completion:(id /* block */)arg2;
- (SEL)workSelector;

@end
