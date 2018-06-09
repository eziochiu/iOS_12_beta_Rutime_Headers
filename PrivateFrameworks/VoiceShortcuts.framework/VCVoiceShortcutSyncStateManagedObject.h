/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCVoiceShortcutSyncStateManagedObject : NSManagedObject

@property (nonatomic) bool hasSynced;
@property (nonatomic, retain) NSData *metadata;
@property (nonatomic, copy) NSString *syncServiceIdentifier;
@property (nonatomic, retain) VCVoiceShortcutManagedObject *voiceShortcut;

+ (id)fetchRequest;

@end
