/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAABMultiPersonSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *personSearchCompleteds;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)multiPersonSearchCompleted;
+ (id)multiPersonSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)personSearchCompleteds;
- (bool)requiresResponse;
- (void)setPersonSearchCompleteds:(id)arg1;

@end