/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFFetchStreamEventsRequest : DMFTaskRequest {
    NSArray * _eventIdentifiers;
    NSString * _organizationIdentifier;
    NSDate * _startDate;
}

@property (nonatomic, copy) NSArray *eventIdentifiers;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, retain) NSDate *startDate;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)organizationIdentifier;
- (void)setEventIdentifiers:(id)arg1;
- (void)setOrganizationIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
