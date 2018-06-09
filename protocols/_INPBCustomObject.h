/* made by EzioChiu.
 */

@protocol _INPBCustomObject <NSObject>

@required

- (NSString *)displayString;
- (bool)hasDisplayString;
- (bool)hasIdentifier;
- (bool)hasPronunciationHint;
- (NSString *)identifier;
- (NSString *)pronunciationHint;
- (void)setDisplayString:(NSString *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setPronunciationHint:(NSString *)arg1;

@end
