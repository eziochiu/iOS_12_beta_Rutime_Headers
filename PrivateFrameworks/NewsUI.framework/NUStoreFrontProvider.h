/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUStoreFrontProvider : NSObject <SXStoreFrontProvider> {
    <FCAppleAccount> * _appleAccount;
}

@property (nonatomic, readonly) <FCAppleAccount> *appleAccount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *storeFrontIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appleAccount;
- (id)initWithAppleAccount:(id)arg1;
- (id)storeFrontIdentifier;

@end
