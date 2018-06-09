/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *weatherLocationId;

+ (id)locationAddCompleted;
+ (id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationAddCompletedWithError:(id)arg1;
+ (id)locationAddCompletedWithWeatherLocationId:(id)arg1;

- (id)encodedClassName;
- (id)error;
- (id)groupIdentifier;
- (id)initWithError:(id)arg1;
- (id)initWithWeatherLocationId:(id)arg1;
- (bool)requiresResponse;
- (void)setError:(id)arg1;
- (void)setWeatherLocationId:(id)arg1;
- (id)weatherLocationId;

@end
