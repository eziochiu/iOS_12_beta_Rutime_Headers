/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCVoiceShortcutSuggestionListManagedObject : NSManagedObject

@property (nonatomic, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, retain) NSData *serializedSuggestions;

+ (id)fetchRequest;

@end
