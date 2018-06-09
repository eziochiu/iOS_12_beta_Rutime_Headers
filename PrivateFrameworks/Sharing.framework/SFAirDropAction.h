/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropAction : NSObject <NSSecureCoding> {
    id /* block */  _actionHandler;
    NSString * _actionIdentifier;
    NSString * _localizedTitle;
    unsigned long long  _maxTransferState;
    unsigned long long  _minRequiredTransferState;
    bool  _requiresUnlockedUI;
    bool  _shouldUpdateUserResponse;
    NSString * _singleItemLocalizedTitle;
    NSString * _transferIdentifier;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, readonly, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic) unsigned long long maxTransferState;
@property (nonatomic) unsigned long long minRequiredTransferState;
@property (nonatomic) bool requiresUnlockedUI;
@property (nonatomic) bool shouldUpdateUserResponse;
@property (nonatomic, copy) NSString *singleItemLocalizedTitle;
@property (nonatomic, readonly, copy) NSString *transferIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (id)actionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransferIdentifier:(id)arg1 actionIdentifier:(id)arg2 title:(id)arg3 singleItemTitle:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (unsigned long long)maxTransferState;
- (unsigned long long)minRequiredTransferState;
- (bool)requiresUnlockedUI;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaxTransferState:(unsigned long long)arg1;
- (void)setMinRequiredTransferState:(unsigned long long)arg1;
- (void)setRequiresUnlockedUI:(bool)arg1;
- (void)setShouldUpdateUserResponse:(bool)arg1;
- (void)setSingleItemLocalizedTitle:(id)arg1;
- (bool)shouldUpdateUserResponse;
- (id)singleItemLocalizedTitle;
- (id)transferIdentifier;
- (void)triggerAction;

@end
