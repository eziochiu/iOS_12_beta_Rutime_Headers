/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechCorrectionStatistics : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic) long long alternativeSelectCount;
@property (nonatomic) long long characterChangeCount;
@property (nonatomic, copy) NSString *correctionSource;
@property (nonatomic, copy) NSString *correctionText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *sessionId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)speechCorrectionStatistics;
+ (id)speechCorrectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;

- (long long)alternativeSelectCount;
- (long long)characterChangeCount;
- (id)correctionSource;
- (id)correctionText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactionId;
- (bool)requiresResponse;
- (id)sessionId;
- (void)setAlternativeSelectCount:(long long)arg1;
- (void)setCharacterChangeCount:(long long)arg1;
- (void)setCorrectionSource:(id)arg1;
- (void)setCorrectionText:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setSessionId:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (id)siriCore_requestId;
- (void)siriCore_setSessionRequestId:(id)arg1;
- (bool)siriCore_supportedByLocalSession;

@end
