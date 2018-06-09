/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADistance : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *unit;
@property (nonatomic, copy) NSNumber *value;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)distance;
+ (id)distanceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setUnit:(id)arg1;
- (void)setValue:(id)arg1;
- (id)unit;
- (id)value;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (id)afui_abbreviatedUnit;
- (long long)afui_compare:(id)arg1;
- (id)afui_metersValue;

@end
