/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCardSectionEngagementFeedback : SFCardSectionFeedback <CRCardSectionEngagementFeedback> {
    unsigned long long  _actionCardType;
    SFPunchout * _destination;
    unsigned long long  _triggerEvent;
}

@property (nonatomic) unsigned long long actionCardType;
@property (nonatomic, readonly) SFFeedback *backingFeedback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SFPunchout *destination;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long triggerEvent;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)actionCardType;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCardSection:(id)arg1 destination:(id)arg2 triggerEvent:(unsigned long long)arg3 actionCardType:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;
- (void)setActionCardType:(unsigned long long)arg1;
- (void)setDestination:(id)arg1;
- (void)setTriggerEvent:(unsigned long long)arg1;
- (unsigned long long)triggerEvent;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)backingFeedback;

@end
