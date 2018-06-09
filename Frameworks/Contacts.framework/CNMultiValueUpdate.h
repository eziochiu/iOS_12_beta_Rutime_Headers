/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMultiValueUpdate : NSObject <CNMultiValueUpdate_iOSAB> {
    bool  _ignoreIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoreIdentifiers;
@property (readonly) Class superclass;

+ (id)addValue:(id)arg1;
+ (id)removeValue:(id)arg1;
+ (id)reorderValues:(id)arg1;
+ (id)replaceValue:(id)arg1 withValue:(id)arg2;

- (bool)applyToABPerson:(void*)arg1 abmultivalue:(void*)arg2 propertyDescription:(id)arg3 error:(id*)arg4;
- (void)applyToMutableMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (bool)ignoreIdentifiers;
- (long long)multiValueIndexForValue:(id)arg1 inMultiValue:(void*)arg2 identifier:(id*)arg3;
- (void)setIgnoreIdentifiers:(bool)arg1;

@end
