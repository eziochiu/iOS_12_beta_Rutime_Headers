/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSRegistrationControlChosenMetric : NSObject <CUTAWDMetric> {
    bool  _isInterestingRegion;
    long long  _registrationControlStatus;
    long long  _registrationType;
}

@property (readonly) unsigned int awdIdentifier;
@property (readonly) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInterestingRegion;
@property (readonly) NSString *name;
@property (nonatomic, readonly) long long registrationControlStatus;
@property (nonatomic, readonly) long long registrationType;
@property (readonly) Class superclass;

- (unsigned int)awdIdentifier;
- (id)awdRepresentation;
- (id)initWithRegistrationType:(long long)arg1 registrationControlStatus:(long long)arg2 isInterestingRegion:(bool)arg3;
- (bool)isInterestingRegion;
- (id)name;
- (long long)registrationControlStatus;
- (long long)registrationType;

@end
