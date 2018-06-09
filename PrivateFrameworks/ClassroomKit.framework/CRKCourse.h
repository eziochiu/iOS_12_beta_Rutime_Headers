/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCourse : NSObject <NSSecureCoding> {
    NSDate * _automaticRemovalDate;
    NSString * _courseDescription;
    DMFControlGroupIdentifier * _courseIdentifier;
    NSString * _courseName;
    CRKUser * _courseUser;
    bool  _expired;
    NSDictionary * _instructorsByIdentifier;
    bool  _mustRequestUnenroll;
    bool  _requestingUnenroll;
    bool  _studentCredentialsAreValid;
    NSSet * _trustedCertificatePersistentIds;
    unsigned long long  _type;
    NSSet * _validTrustedCertificatePersistentIds;
}

@property (nonatomic, retain) NSDate *automaticRemovalDate;
@property (nonatomic, copy) NSString *courseDescription;
@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, copy) NSString *courseName;
@property (nonatomic, retain) CRKUser *courseUser;
@property (getter=isExpired, nonatomic) bool expired;
@property (nonatomic, copy) NSDictionary *instructorsByIdentifier;
@property (getter=isManaged, nonatomic, readonly) bool managed;
@property (nonatomic) bool mustRequestUnenroll;
@property (getter=isRequestingUnenroll, nonatomic) bool requestingUnenroll;
@property (nonatomic) bool studentCredentialsAreValid;
@property (nonatomic, retain) NSSet *trustedCertificatePersistentIds;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSSet *validTrustedCertificatePersistentIds;

+ (id)new;
+ (id)stringForType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)automaticRemovalDate;
- (id)courseDescription;
- (id)courseIdentifier;
- (id)courseName;
- (id)courseUser;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 managed:(bool)arg2;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)instructorsByIdentifier;
- (bool)isDeeplyEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCourse:(id)arg1;
- (bool)isExpired;
- (bool)isManaged;
- (bool)isRequestingUnenroll;
- (bool)mustRequestUnenroll;
- (void)setAutomaticRemovalDate:(id)arg1;
- (void)setCourseDescription:(id)arg1;
- (void)setCourseIdentifier:(id)arg1;
- (void)setCourseName:(id)arg1;
- (void)setCourseUser:(id)arg1;
- (void)setExpired:(bool)arg1;
- (void)setInstructorsByIdentifier:(id)arg1;
- (void)setManaged:(bool)arg1;
- (void)setMustRequestUnenroll:(bool)arg1;
- (void)setRequestingUnenroll:(bool)arg1;
- (void)setStudentCredentialsAreValid:(bool)arg1;
- (void)setTrustedCertificatePersistentIds:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValidTrustedCertificatePersistentIds:(id)arg1;
- (bool)studentCredentialsAreValid;
- (id)trustedCertificatePersistentIds;
- (unsigned long long)type;
- (id)validTrustedCertificatePersistentIds;

@end
