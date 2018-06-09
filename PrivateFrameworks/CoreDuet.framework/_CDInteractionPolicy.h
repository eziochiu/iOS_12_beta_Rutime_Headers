/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDInteractionPolicy : NSObject {
    unsigned long long  _lifespanInSeconds;
    unsigned long long  _maxNumberOfAttachments;
    unsigned long long  _maxNumberOfKeywords;
    unsigned long long  _maxNumberOfRecipients;
    unsigned long long  _maxNumberStored;
    _CDRateLimiter * _rateLimiter;
    unsigned long long  _timeResolutionInSeconds;
}

@property unsigned long long lifespanInSeconds;
@property unsigned long long maxNumberOfAttachments;
@property unsigned long long maxNumberOfKeywords;
@property unsigned long long maxNumberOfRecipients;
@property unsigned long long maxNumberStored;
@property (retain) _CDRateLimiter *rateLimiter;
@property unsigned long long timeResolutionInSeconds;

+ (unsigned long long)defaultLifespan;
+ (unsigned long long)defaultMaxNumberOfAttachments;
+ (unsigned long long)defaultMaxNumberOfKeywords;
+ (unsigned long long)defaultMaxNumberOfRecipients;
+ (unsigned long long)defaultMaxNumberStored;
+ (id)defaultPolicy;
+ (id)defaultPolicyForCalls;
+ (id)defaultPolicyForEmail;
+ (id)defaultPolicyForMeetings;
+ (id)defaultPolicyForMessages;
+ (unsigned long long)defaultTimeResolutionInSeconds;
+ (id)policyFromDictionary:(id)arg1;
+ (id)policyWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRateLimiter:(id)arg1 lifespanInSeconds:(unsigned long long)arg2 maxNumberStored:(unsigned long long)arg3 timeResolutionInSeconds:(unsigned long long)arg4 maxNumberOfRecipients:(unsigned long long)arg5 maxNumberOfKeywords:(unsigned long long)arg6 maxNumberOfAttachments:(unsigned long long)arg7;
- (unsigned long long)lifespanInSeconds;
- (unsigned long long)maxNumberOfAttachments;
- (unsigned long long)maxNumberOfKeywords;
- (unsigned long long)maxNumberOfRecipients;
- (unsigned long long)maxNumberStored;
- (id)rateLimiter;
- (void)setLifespanInSeconds:(unsigned long long)arg1;
- (void)setMaxNumberOfAttachments:(unsigned long long)arg1;
- (void)setMaxNumberOfKeywords:(unsigned long long)arg1;
- (void)setMaxNumberOfRecipients:(unsigned long long)arg1;
- (void)setMaxNumberStored:(unsigned long long)arg1;
- (void)setRateLimiter:(id)arg1;
- (void)setTimeResolutionInSeconds:(unsigned long long)arg1;
- (unsigned long long)timeResolutionInSeconds;

@end