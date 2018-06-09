/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMMomentsParticipant : PXRecipient {
    NSString * _additionalDisplayName;
    PHPerson * _person;
}

@property (nonatomic, readonly) PHPerson *person;

- (void).cxx_destruct;
- (id)displayName;
- (id)initWithEmailAddress:(id)arg1 phoneNumber:(id)arg2 displayName:(id)arg3;
- (id)initWithPerson:(id)arg1;
- (id)person;

@end
