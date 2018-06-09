/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
 */

@interface RTIDocumentTraits : NSObject <NSCopying, NSSecureCoding> {
    NSIndexSet * _PINEntrySeparatorIndexes;
    NSString * _appId;
    NSString * _appName;
    NSArray * _associatedDomains;
    NSDictionary * _autofillContext;
    unsigned long long  _autofillMode;
    NSString * _bundleId;
    NSString * _localizedAppName;
    NSString * _prompt;
    TITextInputTraits * _textInputTraits;
    NSString * _title;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _validTextRange;
}

@property (nonatomic, retain) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, retain) NSArray *associatedDomains;
@property (nonatomic, retain) NSDictionary *autofillContext;
@property (nonatomic) unsigned long long autofillMode;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic, copy) NSString *localizedAppName;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic, retain) TITextInputTraits *textInputTraits;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)PINEntrySeparatorIndexes;
- (id)appId;
- (id)appName;
- (id)associatedDomains;
- (id)autofillContext;
- (unsigned long long)autofillMode;
- (id)bundleId;
- (void)copyContextualPropertiesFromDocumentTraits:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedAppName;
- (id)prompt;
- (void)setAppId:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAssociatedDomains:(id)arg1;
- (void)setAutofillContext:(id)arg1;
- (void)setAutofillMode:(unsigned long long)arg1;
- (void)setBundleId:(id)arg1;
- (void)setLocalizedAppName:(id)arg1;
- (void)setPINEntrySeparatorIndexes:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setTextInputTraits:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValidTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)textInputTraits;
- (id)title;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })validTextRange;

@end
