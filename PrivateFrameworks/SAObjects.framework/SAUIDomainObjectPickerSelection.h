/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDomainObjectPickerSelection : SAStartRequest

@property (nonatomic, retain) SAUIDomainObjectPicker *domainObjectPicker;
@property (nonatomic, retain) SADomainObject *selectedItem;

+ (id)domainObjectPickerSelection;
+ (id)domainObjectPickerSelectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)domainObjectPicker;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)selectedItem;
- (void)setDomainObjectPicker:(id)arg1;
- (void)setSelectedItem:(id)arg1;

@end
