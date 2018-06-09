/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDNoChangePrototypeChange : NSObject <TSDPrototypeChange> {
    id  mPrototype;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, retain) <TSSPropertySource> *propertiesAfterChange;
@property (readonly, retain) <TSSPropertySource> *propertiesBeforeChange;
@property (readonly, retain) id prototype;
@property (readonly) bool prototypeIsBeingDeleted;
@property (readonly) bool prototypeIsBeingModified;
@property (readonly) bool prototypeIsBeingReplaced;
@property (readonly, retain) id replacement;
@property (readonly) Class superclass;

- (id)changedPropertySet;
- (void)dealloc;
- (id)description;
- (id)initNoChangePrototypeChangeForPrototype:(id)arg1;
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
