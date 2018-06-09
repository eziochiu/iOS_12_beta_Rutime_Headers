/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDContextualKeyPathMO : NSManagedObject

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) unsigned long long deviceID;
@property (nonatomic) bool isEphemeral;
@property (nonatomic) bool isUserCentric;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSDate *lastModifiedDate;
@property (nonatomic, retain) NSData *value;

+ (void)hydrateMO:(id)arg1 fromKeyPath:(id)arg2 andValue:(id)arg3;
+ (id)materializedContextValueFrom:(id)arg1;
+ (id)materializedKeyPathFrom:(id)arg1;

@end
