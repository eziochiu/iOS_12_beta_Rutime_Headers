/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFIrrigationSystemServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)_childValveServiceFilter;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)containsActionableCharacteristics;
- (id)createControlItems;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)servicesToReadForCharacteristicType:(id)arg1;

@end
