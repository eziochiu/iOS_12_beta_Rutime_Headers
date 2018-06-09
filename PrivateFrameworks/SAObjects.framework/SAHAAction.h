/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAAction : SADomainObject

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, copy) NSString *attribute;
@property (nonatomic, retain) SAHAAttributeValue *value;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)action;
+ (id)actionWithDictionary:(id)arg1 context:(id)arg2;

- (id)actionType;
- (id)attribute;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setActionType:(id)arg1;
- (void)setAttribute:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)shortDescription;

@end
