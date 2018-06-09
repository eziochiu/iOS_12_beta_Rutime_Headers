/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsSeason : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSNumber *currentSeasonYear;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *relativeSeasonYear;
@property (nonatomic, copy) NSNumber *seasonYear;
@property (readonly) Class superclass;

+ (id)season;
+ (id)seasonWithDictionary:(id)arg1 context:(id)arg2;

- (id)currentSeasonYear;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)relativeSeasonYear;
- (id)seasonYear;
- (void)setCurrentSeasonYear:(id)arg1;
- (void)setRelativeSeasonYear:(id)arg1;
- (void)setSeasonYear:(id)arg1;

@end
