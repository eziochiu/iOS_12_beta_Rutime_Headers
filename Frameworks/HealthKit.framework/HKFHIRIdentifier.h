/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKFHIRIdentifier : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _resourceType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *resourceType;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)FHIRIdentifierWithString:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)SQLWildcardIdentifierForContainedResources;
- (id)SQLWildcardIdentifierForContainedResourcesIdentifierOnly;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)identifierForContainedResourceWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResourceType:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parentResourceIdentifierWithError:(id*)arg1;
- (id)resourceType;
- (id)stringValue;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
