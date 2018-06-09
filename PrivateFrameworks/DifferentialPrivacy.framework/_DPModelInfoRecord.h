/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPModelInfoRecord : NSObject <NSSecureCoding, _DPStorageMOConversion> {
    double  _creationDate;
    short  _majorVersion;
    short  _minorVersion;
    NSManagedObjectID * _objectId;
    bool  _submitted;
}

@property (nonatomic) double creationDate;
@property (nonatomic) short majorVersion;
@property (nonatomic) short minorVersion;
@property (nonatomic, retain) NSManagedObjectID *objectId;
@property (nonatomic) bool submitted;

+ (id)createRecordFromManagedObject:(id)arg1;
+ (id)entityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)copyFromManagedObject:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMajorVersion:(short)arg1 minorVersion:(short)arg2 creationDate:(double)arg3 objectId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToModelInfo:(id)arg1;
- (short)majorVersion;
- (short)minorVersion;
- (id)objectId;
- (void)setCreationDate:(double)arg1;
- (void)setMajorVersion:(short)arg1;
- (void)setMinorVersion:(short)arg1;
- (void)setObjectId:(id)arg1;
- (void)setSubmitted:(bool)arg1;
- (bool)submitted;

@end
