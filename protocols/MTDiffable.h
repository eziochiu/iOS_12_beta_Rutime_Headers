/* made by EzioChiu.
 */

@protocol MTDiffable <MTDictionarySerializable>

@required

- (NSString *)keyForIdentifier;

@optional

- (NSSet *)keysAffectingNotification;
- (NSSet *)keysAffectingScheduling;
- (NSSet *)keysAffectingSnooze;

@end
