/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALocalSearchDropAPinCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SALocalSearchMapItem *mapItem;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)dropAPinCompleted;
+ (id)dropAPinCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mapItem;
- (bool)requiresResponse;
- (void)setMapItem:(id)arg1;

@end
