/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

@interface IXDataPromiseSeed : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _creatorIdentifier;
    NSString * _name;
    unsigned long long  _totalBytesNeededOnDisk;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) Class clientPromiseClass;
@property (nonatomic) unsigned long long creatorIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long totalBytesNeededOnDisk;
@property (nonatomic, retain) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (Class)clientPromiseClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)creatorIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setCreatorIdentifier:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setTotalBytesNeededOnDisk:(unsigned long long)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (unsigned long long)totalBytesNeededOnDisk;
- (id)uniqueIdentifier;

@end
