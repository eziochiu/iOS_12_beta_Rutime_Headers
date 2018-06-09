/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSResponseAction : NSObject <NSCopying> {
    SSAccount * _account;
    NSString * _actionType;
    NSString * _clientIdentifier;
    NSString * _creditsString;
    SSDialog * _dialog;
    NSString * _footerSection;
    NSURL * _url;
    long long  _urlBagType;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) long long URLBagType;
@property (nonatomic, readonly) SSAccount *account;
@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *creditsString;
@property (nonatomic, readonly) SSDialog *dialog;
@property (nonatomic, readonly) NSString *footerSection;

+ (id)_actionWithActionType:(id)arg1;
+ (id)_checkInAppQueueActionWithClientID:(id)arg1 environment:(id)arg2;
+ (id)_dialogActionWithDialog:(id)arg1;
+ (id)_dialogActionWithTouchIDDialog:(id)arg1;
+ (id)_invalidateURLBagsAction;
+ (id)_selectFooterActionWithSection:(id)arg1;
+ (id)_setActiveAccountActionWithAccount:(id)arg1;
+ (id)_setCreditsActionWithCredits:(id)arg1 account:(id)arg2;
+ (id)_urlActionWithType:(id)arg1 URL:(id)arg2;

- (void).cxx_destruct;
- (id)URL;
- (long long)URLBagType;
- (id)account;
- (id)actionType;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creditsString;
- (id)description;
- (id)dialog;
- (id)footerSection;

@end
