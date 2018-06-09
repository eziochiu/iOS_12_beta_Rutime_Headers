/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDAttachment : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _cloudIdentifier;
    NSDate * _creationDate;
    NSUUID * _identifier;
    NSNumber * _size;
    NSString * _uti;
}

@property (retain) NSUUID *cloudIdentifier;
@property (retain) NSDate *creationDate;
@property (retain) NSUUID *identifier;
@property (retain) NSNumber *size;
@property (retain) NSString *uti;

+ (id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cloudIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5;
- (bool)isEqual:(id)arg1;
- (void)setCloudIdentifier:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setUti:(id)arg1;
- (id)size;
- (id)uti;

@end
