/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentCodableDescription : INCodableDescription <NSSecureCoding> {
    NSString * _descriptiveText;
    NSString * _descriptiveTextLocID;
    long long  _intentCategory;
    NSString * _title;
    NSString * _titleLocID;
    bool  _userConfirmationRequired;
    NSString * _verb;
}

@property (nonatomic, copy) NSString *descriptiveText;
@property (nonatomic, copy) NSString *descriptiveTextLocID;
@property (nonatomic) long long intentCategory;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocID;
@property (nonatomic) bool userConfirmationRequired;
@property (nonatomic, copy) NSString *verb;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)attributes;
- (id)descriptiveText;
- (id)descriptiveTextLocID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)intentCategory;
- (void)setDescriptiveText:(id)arg1;
- (void)setDescriptiveTextLocID:(id)arg1;
- (void)setIntentCategory:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLocID:(id)arg1;
- (void)setUserConfirmationRequired:(bool)arg1;
- (void)setVerb:(id)arg1;
- (id)title;
- (id)titleLocID;
- (bool)userConfirmationRequired;
- (id)verb;

@end
