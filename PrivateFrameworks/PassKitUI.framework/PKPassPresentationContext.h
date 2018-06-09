/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPresentationContext : NSObject {
    NSArray * _additionalPassUniqueIdentifiers;
    bool  _animated;
    bool  _fieldDetect;
    bool  _persistentCardEmulation;
    bool  _postPayment;
    <NSCopying> * _userInfo;
    bool  _wasAutomaticallySelected;
}

@property (nonatomic, copy) NSArray *additionalPassUniqueIdentifiers;
@property (nonatomic) bool animated;
@property (getter=isFieldDetect, nonatomic) bool fieldDetect;
@property (getter=wantsPersistentCardEmulation, nonatomic) bool persistentCardEmulation;
@property (getter=isPostPayment, nonatomic) bool postPayment;
@property (nonatomic, copy) <NSCopying> *userInfo;
@property (nonatomic) bool wasAutomaticallySelected;

+ (id)contextWithAnimation:(bool)arg1;
+ (id)contextWithAnimation:(bool)arg1 additionalPassUniqueIdentifiers:(id)arg2;
+ (id)contextWithAnimation:(bool)arg1 wasAutomaticallySelected:(bool)arg2 additionalPassUniqueIdentifiers:(id)arg3;
+ (id)contextWithAnimation:(bool)arg1 wasAutomaticallySelected:(bool)arg2 additionalPassUniqueIdentifiers:(id)arg3 userInfo:(id)arg4;

- (void).cxx_destruct;
- (id)additionalPassUniqueIdentifiers;
- (bool)animated;
- (id)description;
- (bool)isFieldDetect;
- (bool)isPostPayment;
- (void)setAdditionalPassUniqueIdentifiers:(id)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setFieldDetect:(bool)arg1;
- (void)setPersistentCardEmulation:(bool)arg1;
- (void)setPostPayment:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWasAutomaticallySelected:(bool)arg1;
- (id)userInfo;
- (bool)wantsPersistentCardEmulation;
- (bool)wasAutomaticallySelected;

@end
