/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABConstantsMapping : NSObject {
    id  _defaultConstant;
    NSDictionary * _mapping;
}

@property (nonatomic, retain) id defaultConstant;
@property (nonatomic, retain) NSDictionary *mapping;

+ (id)ABToCNContactShortNameFormatConstantsMapping;
+ (id)ABToCNContactSortOrderConstantsMapping;
+ (id)ABToCNContainerTypeConstantsMapping;
+ (id)ABToCNLabelConstantsMapping;
+ (id)ABToCNPersonAddressConstantsMapping;
+ (id)ABToCNPersonInstantMessageConstantsMapping;
+ (id)ABToCNPersonKindConstantsMapping;
+ (id)ABToCNPersonSocialProfileConstantsMapping;
+ (id)ABtoCNContactDisplayNameOrderConstantsMapping;
+ (id)CNToABCompositeNameFormatConstantsMapping;
+ (id)CNToABLabelConstantsMapping;
+ (id)CNToABPersonAddressConstantsMapping;
+ (id)CNToABPersonInstantMessageConstantsMapping;
+ (id)CNToABPersonKindConstantsMapping;
+ (id)CNToABPersonShortNameFormatConstantsMapping;
+ (id)CNToABPersonSocialProfileConstantsMapping;
+ (id)CNToABPersonSortOrderingConstantsMapping;
+ (id)CNToABSourceTypeConstantsMapping;

- (void).cxx_destruct;
- (id)defaultConstant;
- (id)initWithMapping:(id)arg1;
- (id)invertedMapping;
- (id)mappedConstant:(id)arg1;
- (id)mapping;
- (void)setDefaultConstant:(id)arg1;
- (void)setMapping:(id)arg1;

@end
