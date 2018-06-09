/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICNoteData : NSManagedObject {
    bool  needsToBeSaved;
    bool  settingNoteData;
}

@property (nonatomic, retain) NSData *cryptoInitializationVector;
@property (nonatomic, retain) NSData *cryptoTag;
@property (nonatomic, retain) NSData *data;
@property bool needsToBeSaved;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic, readonly) NSData *primitiveData;
@property (getter=isSettingNoteData, nonatomic) bool settingNoteData;

- (bool)isSettingNoteData;
- (bool)needsToBeSaved;
- (void)saveNoteDataIfNeeded;
- (void)setNeedsToBeSaved:(bool)arg1;
- (void)setSettingNoteData:(bool)arg1;
- (void)willAccessValueForKey:(id)arg1;
- (void)willSave;

@end