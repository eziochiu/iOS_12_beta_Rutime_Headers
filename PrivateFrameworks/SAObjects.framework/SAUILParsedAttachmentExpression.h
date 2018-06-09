/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUILParsedAttachmentExpression : SAUILParsedExpression

@property (nonatomic, copy) NSData *attachment;

+ (id)parsedAttachmentExpression;
+ (id)parsedAttachmentExpressionWithDictionary:(id)arg1 context:(id)arg2;

- (id)attachment;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAttachment:(id)arg1;

@end
