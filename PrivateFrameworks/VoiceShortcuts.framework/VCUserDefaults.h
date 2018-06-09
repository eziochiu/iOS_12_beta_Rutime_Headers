/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCUserDefaults : NSUserDefaults

+ (void)initialize;
+ (id)sharedUserDefaults;

- (id)codableObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (bool)setCodableObject:(id)arg1 forKey:(id)arg2 error:(id*)arg3;

@end
