/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutOperationFactory : NSObject <SXLayoutOperationFactory> {
    <SXComponentSizerEngine> * _componentSizerEngine;
    <SXLayoutBlueprintFactory> * _layoutBlueprintFactory;
}

@property (nonatomic, readonly) <SXComponentSizerEngine> *componentSizerEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXLayoutBlueprintFactory> *layoutBlueprintFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentSizerEngine;
- (id)initWithComponentSizerEngine:(id)arg1 layoutBlueprintFactory:(id)arg2;
- (id)layoutBlueprintFactory;
- (id)layoutOperationWithViewportSize:(struct CGSize { double x1; double x2; })arg1 constrainedToWidth:(double)arg2 layoutDataProvider:(id)arg3;

@end
