/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAccountChange : NSObject {
    ACAccount * _account;
    int  _changeType;
    ACAccount * _oldAccount;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic) int changeType;
@property (nonatomic, retain) ACAccount *oldAccount;

+ (id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;

- (void).cxx_destruct;
- (id)account;
- (int)changeType;
- (id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;
- (id)oldAccount;
- (void)setAccount:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setOldAccount:(id)arg1;

@end
