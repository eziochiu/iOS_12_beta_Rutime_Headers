/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding, REDonatedActionIdentifierProviding> {
    NSString * _label;
    long long  _type;
    NSString * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *value;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)label;
- (long long)type;
- (id)value;

// Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore

+ (id)__im_assistant_extractIntentHandleLabelAndTypeFromContact:(id)arg1 forNormalizedID:(id)arg2;

- (id)__im_assistant_initWithUnstructuredValue:(id)arg1;
- (bool)__im_assistant_isEqualIgnoringFormatting:(id)arg1 ignoringLabel:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

@end
