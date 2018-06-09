/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPNumericDataRecord : NSObject <NSSecureCoding, _DPJSONString, _DPStorageMOConversion> {
    double  _clearNumber;
    double  _creationDate;
    NSString * _key;
    NSManagedObjectID * _objectId;
    double  _privateNumber;
    long long  _reportVersion;
    bool  _submitted;
}

@property (nonatomic) double clearNumber;
@property (nonatomic) double creationDate;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) NSManagedObjectID *objectId;
@property (nonatomic) double privateNumber;
@property (nonatomic) long long reportVersion;
@property (nonatomic) bool submitted;

+ (id)createRecordFromManagedObject:(id)arg1;
+ (id)entityName;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)clearNumber;
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
- (id)initWithKey:(id)arg1 clearNumber:(double)arg2 privateNumber:(double)arg3 creationDate:(double)arg4 submitted:(bool)arg5 objectId:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNumericDataRecord:(id)arg1;
- (id)jsonString;
- (id)key;
- (id)objectId;
- (double)privateNumber;
- (long long)reportVersion;
- (void)setClearNumber:(double)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setKey:(id)arg1;
- (void)setObjectId:(id)arg1;
- (void)setPrivateNumber:(double)arg1;
- (void)setReportVersion:(long long)arg1;
- (void)setSubmitted:(bool)arg1;
- (bool)submitted;

@end
