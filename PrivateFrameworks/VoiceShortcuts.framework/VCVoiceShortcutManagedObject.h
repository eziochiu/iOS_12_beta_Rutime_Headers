/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCVoiceShortcutManagedObject : NSManagedObject

@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateLastModified;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) bool isMarkedAsDeleted;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, retain) NSData *serializedWorkflowData;
@property (nonatomic, copy) NSString *shortcutDescription;
@property (nonatomic, copy) NSString *shortcutName;
@property (nonatomic, retain) NSSet *syncStates;

+ (id)fetchRequest;

- (id)initWithContext:(id)arg1 voiceShortcut:(id)arg2 error:(id*)arg3;
- (bool)populateWithVoiceShortcut:(id)arg1 error:(id*)arg2;

@end
