/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchNumberOfDaysBeforeAutomaticRemovalRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _groupIdentifier;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *groupIdentifier;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)setGroupIdentifier:(id)arg1;

@end
