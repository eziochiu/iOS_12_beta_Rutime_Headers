/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCardViewDisappearFeedback : SFFeedback <CRCardViewDisappearanceFeedback> {
    unsigned long long  _cardDisappearEvent;
}

@property (nonatomic, readonly) SFFeedback *backingFeedback;
@property (nonatomic) unsigned long long cardDisappearEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (unsigned long long)cardDisappearEvent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(unsigned long long)arg1;
- (void)setCardDisappearEvent:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)backingFeedback;

@end
