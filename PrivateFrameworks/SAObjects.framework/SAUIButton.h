/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIButton : SAAceView

@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, copy) NSString *text;

+ (id)button;
+ (id)buttonWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (id)secondaryText;
- (void)setCommands:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
