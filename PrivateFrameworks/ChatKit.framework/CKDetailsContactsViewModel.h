/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDetailsContactsViewModel : NSObject {
    CNContact * _contact;
    NSString * _entityName;
    bool  _isPendingRecipient;
    NSString * _locationString;
    NSString * _preferredHandle;
    bool  _showsFaceTimeVideoButton;
    bool  _showsLocation;
    bool  _showsMessageButton;
    bool  _showsPhoneButton;
    bool  _verified;
}

@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, copy) NSString *entityName;
@property (nonatomic) bool isPendingRecipient;
@property (nonatomic, copy) NSString *locationString;
@property (nonatomic, copy) NSString *preferredHandle;
@property (nonatomic) bool showsFaceTimeVideoButton;
@property (nonatomic) bool showsLocation;
@property (nonatomic) bool showsMessageButton;
@property (nonatomic) bool showsPhoneButton;
@property (nonatomic) bool verified;

- (void).cxx_destruct;
- (id)contact;
- (id)entityName;
- (id)initWithPreferredHandle:(id)arg1 entityName:(id)arg2 locationString:(id)arg3 showsLocation:(bool)arg4 showsMessageButton:(bool)arg5 showsFaceTimeVideoButton:(bool)arg6 showsPhoneButton:(bool)arg7 contact:(id)arg8 isPendingRecipient:(bool)arg9 verified:(bool)arg10;
- (bool)isPendingRecipient;
- (id)locationString;
- (id)preferredHandle;
- (void)setContact:(id)arg1;
- (void)setEntityName:(id)arg1;
- (void)setIsPendingRecipient:(bool)arg1;
- (void)setLocationString:(id)arg1;
- (void)setPreferredHandle:(id)arg1;
- (void)setShowsFaceTimeVideoButton:(bool)arg1;
- (void)setShowsLocation:(bool)arg1;
- (void)setShowsMessageButton:(bool)arg1;
- (void)setShowsPhoneButton:(bool)arg1;
- (void)setVerified:(bool)arg1;
- (bool)showsFaceTimeVideoButton;
- (bool)showsLocation;
- (bool)showsMessageButton;
- (bool)showsPhoneButton;
- (bool)verified;

@end
