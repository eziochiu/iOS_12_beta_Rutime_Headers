/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentEventAction : EKPersistentObject

+ (id)relations;

- (int)entityType;
- (id)externalData;
- (id)externalFolderID;
- (id)externalID;
- (id)externalModTag;
- (id)externalScheduleID;
- (id)owner;
- (void)setExternalData:(id)arg1;
- (void)setExternalFolderID:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModTag:(id)arg1;
- (void)setExternalScheduleID:(id)arg1;
- (void)setOwner:(id)arg1;

@end
