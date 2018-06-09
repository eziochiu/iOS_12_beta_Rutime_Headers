/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDModifyPrototypeChange : NSObject <TSDPrototypeChange> {
    TSSPropertyMap * mChangedPropertyMapAfterChange;
    TSSPropertyMap * mChangedPropertyMapBeforeChange;
    TSSMutablePropertySet * mChangedPropertySet;
    TSSMutablePropertySet * mPropertiesWithOldValuesRecordedButNotNewValues;
    TSDPropertySourceForModifyPrototypeChange * mPropertySourceAfterChange;
    TSDPropertySourceForModifyPrototypeChange * mPropertySourceBeforeChange;
    id  mPrototype;
}

@property (readonly, retain) TSSPropertyMap *changedPropertyMapAfterChange;
@property (readonly, retain) TSSPropertyMap *changedPropertyMapBeforeChange;
@property (readonly, retain) TSSMutablePropertySet *changedPropertySet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, retain) TSSMutablePropertySet *i_propertiesWithOldValuesRecordedButNotNewValues;
@property (readonly, retain) <TSSPropertySource> *propertiesAfterChange;
@property (readonly, retain) <TSSPropertySource> *propertiesBeforeChange;
@property (readonly, retain) id prototype;
@property (readonly) bool prototypeIsBeingDeleted;
@property (readonly) bool prototypeIsBeingModified;
@property (readonly) bool prototypeIsBeingReplaced;
@property (readonly, retain) id replacement;
@property (readonly) Class superclass;

- (id)changedPropertyMapAfterChange;
- (id)changedPropertyMapBeforeChange;
- (id)changedPropertySet;
- (void)dealloc;
- (id)description;
- (id)i_propertiesWithOldValuesRecordedButNotNewValues;
- (id)initModifyPrototypeChangeForPrototype:(id)arg1;
- (id)propertiesAfterChange;
- (bool)propertiesAreChanging:(id)arg1;
- (id)propertiesBeforeChange;
- (bool)propertyIsChanging:(int)arg1;
- (id)prototype;
- (bool)prototypeIsBeingDeleted;
- (bool)prototypeIsBeingModified;
- (bool)prototypeIsBeingReplaced;
- (id)replacement;

@end
