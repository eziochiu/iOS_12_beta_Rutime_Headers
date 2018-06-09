/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIGetResponseAlternatives : SAStartRequest

@property (nonatomic) bool locallyResolved;
@property (nonatomic, copy) NSString *requestId;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)getResponseAlternatives;
+ (id)getResponseAlternativesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)locallyResolved;
- (id)requestId;
- (bool)requiresResponse;
- (void)setLocallyResolved:(bool)arg1;
- (void)setRequestId:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (id)siriCore_requestId;
- (void)siriCore_setSessionRequestId:(id)arg1;

@end
