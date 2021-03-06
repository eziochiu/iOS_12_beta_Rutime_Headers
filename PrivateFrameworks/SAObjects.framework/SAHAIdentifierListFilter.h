/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAIdentifierListFilter : SAHAFilter

@property (nonatomic, copy) NSArray *identifiers;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)identifierListFilter;
+ (id)identifierListFilterWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifiers;
- (void)setIdentifiers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)shortDescription;

@end
