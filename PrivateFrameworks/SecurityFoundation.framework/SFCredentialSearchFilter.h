/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFCredentialSearchFilter : NSObject <NSCopying, NSSecureCoding> {
    NSPredicate * _attributesPredicate;
    id  _credentialSearchFilterInternal;
}

@property (nonatomic, retain) NSPredicate *attributesPredicate;
@property (nonatomic, retain) NSDate *maximumCreationDate;
@property (nonatomic, retain) NSDate *maximumModificationDate;
@property (nonatomic, retain) NSDate *minimumCreationDate;
@property (nonatomic, retain) NSDate *minimumModificationDate;
@property (nonatomic, retain) NSArray<_SFServiceIdentifier> *serviceIdentifiers;
@property (nonatomic, retain) NSArray *usernames;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributesPredicate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)maximumCreationDate;
- (id)maximumModificationDate;
- (id)minimumCreationDate;
- (id)minimumModificationDate;
- (id)serviceIdentifiers;
- (void)setAttributesPredicate:(id)arg1;
- (void)setMaximumCreationDate:(id)arg1;
- (void)setMaximumModificationDate:(id)arg1;
- (void)setMinimumCreationDate:(id)arg1;
- (void)setMinimumModificationDate:(id)arg1;
- (void)setServiceIdentifiers:(id)arg1;
- (void)setUsernames:(id)arg1;
- (id)usernames;

@end
