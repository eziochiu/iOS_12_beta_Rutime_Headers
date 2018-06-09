/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLayoutBlueprintFactory : NSObject <SXLayoutBlueprintFactory> {
    <SXComponentBlueprintFactory> * _componentBlueprintFactory;
}

@property (nonatomic, readonly) <SXComponentBlueprintFactory> *componentBlueprintFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)componentBlueprintFactory;
- (id)createLayoutBlueprint;
- (id)initWithComponentBlueprintFactory:(id)arg1;

@end
