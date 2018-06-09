/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVRedeemCodeMetadata : NSObject <NSCopying> {
    NSDictionary * _dictionary;
    NSString * _inputCode;
}

@property (nonatomic, readonly) bool allowsAutoSubmission;
@property (nonatomic, readonly) NSString *code;
@property (nonatomic, readonly) NSString *codeType;
@property (nonatomic, copy) NSString *inputCode;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSDictionary *redeemCodeDictionary;

- (void).cxx_destruct;
- (bool)allowsAutoSubmission;
- (id)code;
- (id)codeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRedeemCodeDictionary:(id)arg1;
- (id)inputCode;
- (id)items;
- (id)redeemCodeDictionary;
- (void)setInputCode:(id)arg1;

@end
