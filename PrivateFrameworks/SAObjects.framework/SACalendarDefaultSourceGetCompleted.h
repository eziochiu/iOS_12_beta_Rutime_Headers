/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, retain) SACalendarSource *aceCalendarSource;
@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)defaultSourceGetCompleted;
+ (id)defaultSourceGetCompletedWithAceCalendarSource:(id)arg1;
+ (id)defaultSourceGetCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceCalendarSource;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithAceCalendarSource:(id)arg1;
- (bool)requiresResponse;
- (void)setAceCalendarSource:(id)arg1;

@end
