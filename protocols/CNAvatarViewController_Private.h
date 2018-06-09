/* made by EzioChiu.
 */

@protocol CNAvatarViewController_Private <NSObject>

@required

- (CNContactStore *)contactStore;
- (bool)isThreeDTouchEnabled;
- (PRPersonaStore *)personaStore;
- (void)setThreeDTouchEnabled:(bool)arg1;

@end
