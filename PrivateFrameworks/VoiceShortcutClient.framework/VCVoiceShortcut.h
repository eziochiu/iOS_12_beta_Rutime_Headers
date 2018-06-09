/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface VCVoiceShortcut : NSObject <INSpeakable, NSSecureCoding> {
    NSString * _associatedAppBundleIdentifier;
    NSDate * _dateCreated;
    NSDate * _dateLastModified;
    NSString * _identifier;
    NSString * _phrase;
    NSData * _serializedWorkflowData;
    NSString * _shortcutDescription;
    NSString * _shortcutName;
    WFLWorkflow * _workflow;
}

@property (nonatomic, readonly) NSArray *alternativeSpeakableMatches;
@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, retain) NSDate *dateCreated;
@property (nonatomic, retain) NSDate *dateLastModified;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasBeenModified;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, readonly) NSString *pronunciationHint;
@property (nonatomic, retain) NSData *serializedWorkflowData;
@property (nonatomic, copy) NSString *shortcutDescription;
@property (nonatomic, copy) NSString *shortcutName;
@property (nonatomic, readonly) NSString *spokenPhrase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *vocabularyIdentifier;
@property (nonatomic, retain) WFLWorkflow *workflow;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (void)initialize;
+ (bool)isValidVoiceShortcut:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedAppBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (id)dateLastModified;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasBeenModified;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 phrase:(id)arg2 shortcutName:(id)arg3 shortcutDescription:(id)arg4 associatedAppBundleIdentifier:(id)arg5 dateCreated:(id)arg6 dateLastModified:(id)arg7 serializedWorkflowData:(id)arg8 error:(id*)arg9;
- (id)initWithPhrase:(id)arg1 workflow:(id)arg2 error:(id*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isValid:(id*)arg1;
- (id)phrase;
- (id)serializedWorkflowData;
- (void)setAssociatedAppBundleIdentifier:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDateLastModified:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPhrase:(id)arg1;
- (void)setSerializedWorkflowData:(id)arg1;
- (void)setShortcutDescription:(id)arg1;
- (void)setShortcutName:(id)arg1;
- (void)setWorkflow:(id)arg1;
- (id)shortcutDescription;
- (id)shortcutName;
- (id)workflow;

// Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts

- (id)alternativeSpeakableMatches;
- (id)dictionaryRepresentation;
- (id)initFromProtobufObject:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithManagedObject:(id)arg1 error:(id*)arg2;
- (id)initWithRecord:(id)arg1;
- (id)pronunciationHint;
- (id)protobufObject;
- (id)searchableItemRepresentation;
- (id)spokenPhrase;
- (id)vocabularyIdentifier;

@end
