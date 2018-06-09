/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFDiscoveredAccessoryItem : HFItem <HFHomeKitItemProtocol> {
    HFDiscoveredAccessory * _discoveredAccessory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HFDiscoveredAccessory *discoveredAccessory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)discoveredAccessory;
- (id)homeKitObject;
- (id)init;
- (id)initWithDiscoveredAccessory:(id)arg1;

@end
