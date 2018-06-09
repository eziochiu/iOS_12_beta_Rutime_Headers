/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCInternalAuthenticationResponse : NSObject <BCDictionaryImageSerializable> {
    NSString * _businessIdentifier;
    NSString * _credentials;
    NSArray * _errors;
    NSString * _groupIdentifier;
    NSString * _status;
}

@property (nonatomic, retain) NSString *businessIdentifier;
@property (nonatomic, retain) NSString *credentials;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) BCError *error;
@property (nonatomic, retain) NSArray *errors;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic) NSString *status;

- (void).cxx_destruct;
- (id)businessIdentifier;
- (id)credentials;
- (id)dictionaryValue;
- (id)error;
- (id)errors;
- (id)groupIdentifier;
- (id)initWithBusinessIdentifier:(id)arg1 groupIdentifier:(id)arg2 credentials:(id)arg3 error:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;
- (id)responseMessageFor:(id)arg1 message:(id)arg2;
- (void)setBusinessIdentifier:(id)arg1;
- (void)setCredentials:(id)arg1;
- (void)setErrors:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
