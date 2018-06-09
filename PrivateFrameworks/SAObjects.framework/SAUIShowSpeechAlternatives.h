/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIShowSpeechAlternatives : SABaseClientBoundCommand

@property (nonatomic, retain) SASRecognition *recognition;
@property (nonatomic, copy) NSString *requestId;
@property (nonatomic, copy) NSString *title;

+ (id)showSpeechAlternatives;
+ (id)showSpeechAlternativesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recognition;
- (id)requestId;
- (bool)requiresResponse;
- (void)setRecognition:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
