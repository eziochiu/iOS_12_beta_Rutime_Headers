/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIConfirmationOption : AceObject <SAAceSerializable>

@property (nonatomic) bool active;
@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

+ (id)confirmationOption;
+ (id)confirmationOptionWithDictionary:(id)arg1 context:(id)arg2;

- (bool)active;
- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)label;
- (void)setActive:(bool)arg1;
- (void)setCommands:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
