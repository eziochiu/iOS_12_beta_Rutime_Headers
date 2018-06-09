/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactVCardParsedResultBuilder : NSObject <CNVCardParsedResultBuilder> {
    CNMutableContact * _contact;
    bool  _empty;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)contactKeyForVCardKey:(id)arg1;
+ (id /* block */)contactValueTransformForVCardKey:(id)arg1;
+ (id)labeledValuesWithValues:(id)arg1 transform:(id /* block */)arg2 labels:(id)arg3 isPrimaries:(id)arg4;

- (void).cxx_destruct;
- (id)build;
- (bool)canSetValueForProperty:(id)arg1;
- (long long)contactTypeFromPersonFlags:(long long)arg1;
- (id)init;
- (long long)personFlags;
- (long long)personFlagsByAddingContactType:(long long)arg1 toFlags:(long long)arg2;
- (bool)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (bool)setPersonFlags:(long long)arg1;
- (void)setUnknownProperties:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (bool)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
- (id)validCountryCodes;
- (id)valueForProperty:(id)arg1;

@end
