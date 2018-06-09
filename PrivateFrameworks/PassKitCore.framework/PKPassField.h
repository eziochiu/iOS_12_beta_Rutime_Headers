/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassField : NSObject <NSSecureCoding> {
    long long  _cellStyle;
    NSString * _changeMessage;
    unsigned long long  _dataDetectorTypes;
    NSString * _foreignReferenceIdentifier;
    long long  _foreignReferenceType;
    NSString * _key;
    NSString * _label;
    NSDictionary * _semantics;
    long long  _textAlignment;
    long long  _type;
    id  _unformattedValue;
    NSString * _value;
}

@property (nonatomic) long long cellStyle;
@property (nonatomic, copy) NSString *changeMessage;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (nonatomic, retain) NSString *foreignReferenceIdentifier;
@property (nonatomic) long long foreignReferenceType;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSDictionary *semantics;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long type;
@property (nonatomic, copy) id unformattedValue;
@property (readonly) NSString *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cellStyle;
- (id)changeMessage;
- (unsigned long long)dataDetectorTypes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)flushCachedValue;
- (id)foreignReferenceIdentifier;
- (long long)foreignReferenceType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)key;
- (id)label;
- (id)semantics;
- (void)setCellStyle:(long long)arg1;
- (void)setChangeMessage:(id)arg1;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (void)setForeignReferenceIdentifier:(id)arg1;
- (void)setForeignReferenceType:(long long)arg1;
- (void)setKey:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setSemantics:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUnformattedValue:(id)arg1;
- (long long)textAlignment;
- (long long)type;
- (id)unformattedValue;
- (id)value;

@end
