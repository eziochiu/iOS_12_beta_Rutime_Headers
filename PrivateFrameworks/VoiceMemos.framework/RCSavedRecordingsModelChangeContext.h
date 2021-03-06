/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSavedRecordingsModelChangeContext : NSObject {
    NSArray * _deletedObjects;
    NSArray * _insertedObjects;
    NSArray * _updatedObjects;
}

@property (nonatomic, readonly, copy) NSArray *deletedObjects;
@property (nonatomic, readonly, copy) NSArray *insertedObjects;
@property (nonatomic, readonly, copy) NSArray *updatedObjects;

- (void).cxx_destruct;
- (id)_recordingURIsInArray:(id)arg1 includeTemporaryURIs:(bool)arg2;
- (id)deletedObjects;
- (id)deletedRecordingURIsIncludingTemporaryURIs:(bool)arg1;
- (id)initWithStateFromManagedObjectContext:(id)arg1;
- (id)insertedObjects;
- (id)insertedRecordingURIsIncludingTemporaryURIs:(bool)arg1;
- (id)updatedObjects;
- (id)updatedRecordingURIsIncludingTemporaryURIs:(bool)arg1;

@end
