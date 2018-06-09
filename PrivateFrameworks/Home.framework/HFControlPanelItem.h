/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFControlPanelItem : HFItem <NAIdentifiable> {
    NSDictionary * _UUIDsByControlItemPointer;
    NSSet * _controlItems;
    NSDictionary * _controlItemsByUUID;
    NSDictionary * _displayResults;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, readonly) NSDictionary *UUIDsByControlItemPointer;
@property (nonatomic, readonly, copy) NSSet *controlItems;
@property (nonatomic, readonly) NSDictionary *controlItemsByUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *displayResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)_controlPanelItemRules;
+ (id)na_identity;
+ (id)standardControlPanelItemsForControlItems:(id)arg1;

- (void).cxx_destruct;
- (id)UUIDsByControlItemPointer;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)controlItemForIdentifier:(id)arg1;
- (id)controlItems;
- (id)controlItemsByUUID;
- (id)displayResults;
- (unsigned long long)hash;
- (id)identifierForControlItem:(id)arg1;
- (id)init;
- (id)initWithControlItems:(id)arg1 displayResults:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)sortPriority;
- (id)uniqueIdentifier;

@end
