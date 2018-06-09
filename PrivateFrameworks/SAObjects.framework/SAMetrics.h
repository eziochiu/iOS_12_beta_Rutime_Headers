/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMetrics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *eventInformation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *originalCommandId;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *timings;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)metrics;
+ (id)metricsWithDictionary:(id)arg1 context:(id)arg2;

- (id)_descriptionHint;
- (id)category;
- (id)encodedClassName;
- (id)eventInformation;
- (id)groupIdentifier;
- (id)originalCommandId;
- (bool)requiresResponse;
- (void)setCategory:(id)arg1;
- (void)setEventInformation:(id)arg1;
- (void)setOriginalCommandId:(id)arg1;
- (void)setTimings:(id)arg1;
- (id)timings;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (bool)siriCore_isRetryable;
- (id)siriCore_requestId;
- (void)siriCore_setSessionRequestId:(id)arg1;
- (bool)siriCore_supportedByLocalSession;

@end
