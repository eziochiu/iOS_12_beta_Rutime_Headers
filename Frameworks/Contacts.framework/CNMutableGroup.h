/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMutableGroup : CNGroup

@property (nonatomic) int iOSLegacyIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) CNGroup *snapshot;

- (void)adoptValuesFromAndSetSnapshot:(id)arg1;
- (id)copy;
- (id)freeze;
- (id)freezeWithSelfAsSnapshot;
- (id)identifier;
- (id)name;
- (void)setIOSLegacyIdentifier:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSnapshot:(id)arg1;

@end