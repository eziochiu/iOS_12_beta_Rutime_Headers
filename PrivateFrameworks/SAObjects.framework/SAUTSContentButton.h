/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUTSContentButton : SAUIButton

@property (nonatomic, copy) NSString *contentType;

+ (id)contentButton;
+ (id)contentButtonWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setContentType:(id)arg1;

@end
