/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAErrorIndicatorStatus : AceObject <SABackgroundContextObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool deviceFixingProblems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *values;

+ (id)errorIndicatorStatus;
+ (id)errorIndicatorStatusWithDictionary:(id)arg1 context:(id)arg2;

- (bool)deviceFixingProblems;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDeviceFixingProblems:(bool)arg1;
- (void)setValues:(id)arg1;
- (id)values;

@end
