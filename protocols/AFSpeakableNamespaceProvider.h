/* made by EzioChiu.
 */

@protocol AFSpeakableNamespaceProvider <NSObject>

@required

- (NSString *)stringForExpression:(NSString *)arg1;

@optional

- (NSURL *)attachmentURLForExpression:(NSString *)arg1;
- (NSString *)identifier;
- (id)initWithAceObject:(AceObject *)arg1;
- (void)setAssistantBulletin:(AFBulletin *)arg1;

@end
