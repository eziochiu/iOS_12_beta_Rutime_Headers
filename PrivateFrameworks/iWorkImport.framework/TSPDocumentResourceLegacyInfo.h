/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentResourceLegacyInfo : NSObject <NSCopying> {
    NSString * _digestString;
    NSString * _locator;
}

@property (readonly, copy) NSString *digestString;
@property (readonly, copy) NSString *locator;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)digestString;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDigestString:(id)arg1 locator:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDocumentResourceLegacyInfo:(id)arg1;
- (id)locator;

@end
