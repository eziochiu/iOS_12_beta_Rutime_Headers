/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDContextualChangeRegistrationMO : NSManagedObject

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *properties;

+ (void)hydrateMO:(id)arg1 fromRegistration:(id)arg2;
+ (id)materializedRegistrationFrom:(id)arg1;

@end
