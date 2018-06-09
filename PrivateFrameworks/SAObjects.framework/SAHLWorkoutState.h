/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHLWorkoutState : AceObject <SABackgroundContextObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *workoutStateValue;

+ (id)workoutState;
+ (id)workoutStateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setWorkoutStateValue:(id)arg1;
- (id)workoutStateValue;

@end
