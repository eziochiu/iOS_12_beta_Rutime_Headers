/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchWebAuthTokenOperationResult : CKOperationResult <NSSecureCoding> {
    NSString * _webAuthToken;
}

@property (nonatomic, copy) NSString *webAuthToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setWebAuthToken:(id)arg1;
- (id)webAuthToken;

@end
