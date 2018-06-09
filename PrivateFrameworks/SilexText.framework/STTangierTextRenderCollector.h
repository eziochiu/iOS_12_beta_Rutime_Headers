/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STTangierTextRenderCollector : NSObject <STTangierTextRepBehavior, STTextRenderCollector> {
    NSMutableDictionary * _flows;
    NSMutableDictionary * _layoutsByComponentIdentifier;
    NSDictionary * _previousFlows;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *flows;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *layoutsByComponentIdentifier;
@property (nonatomic, retain) NSDictionary *previousFlows;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addTextStorage:(id)arg1 withLayout:(id)arg2 forNamedFlow:(id)arg3 directLayerHostView:(id)arg4 selectable:(bool)arg5 componentIdentifier:(id)arg6;
- (void)buildFlowsAndUpdateInfosWithICC:(id)arg1;
- (void)buildFlowsAndUpdateInfosWithICC:(id)arg1 updateBlock:(id /* block */)arg2;
- (id)flowLayoutForComponentIdentifier:(id)arg1;
- (id)flows;
- (id)infoForStorage:(id)arg1 selection:(id)arg2;
- (id)init;
- (id)itemWithIdentifier:(id)arg1 storage:(id)arg2 inItems:(id)arg3;
- (id)layoutsByComponentIdentifier;
- (id)previousFlows;
- (void)setFlows:(id)arg1;
- (void)setLayoutsByComponentIdentifier:(id)arg1;
- (void)setPreviousFlows:(id)arg1;
- (void)storeItem:(id)arg1 forFlowName:(id)arg2;
- (bool)tangierTextRepAllowsSelection:(id)arg1;

@end
