/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCInternalAuthenticationRequest : NSObject <BCDictionaryImageSerializable, NSSecureCoding> {
    NSString * _businessIdentifier;
    NSString * _groupIdentifier;
    NSDictionary * _labels;
    NSString * _responseEncryptionKey;
    NSArray * _retrieve;
}

@property (nonatomic, retain) NSString *businessIdentifier;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic, retain) NSDictionary *labels;
@property (nonatomic, retain) NSString *responseEncryptionKey;
@property (nonatomic, retain) NSArray *retrieve;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)businessIdentifier;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;
- (id)labels;
- (id)responseEncryptionKey;
- (id)retrieve;
- (void)setBusinessIdentifier:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setResponseEncryptionKey:(id)arg1;
- (void)setRetrieve:(id)arg1;

@end
