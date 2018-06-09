/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFActionResetForm : PDFAction <NSCopying> {
    PDFActionResetFormPrivateVars * _private2;
}

@property (nonatomic, copy) NSArray *fields;
@property (nonatomic) bool fieldsIncludedAreCleared;

- (void).cxx_destruct;
- (void)addFieldsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary { }*)arg1;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct __CFDictionary { }*)createDictionaryRef;
- (id)description;
- (id)fields;
- (bool)fieldsIncludedAreCleared;
- (id)init;
- (id)initWithActionDictionary:(struct CGPDFDictionary { }*)arg1 forDocument:(id)arg2 forPage:(id)arg3;
- (void)setFields:(id)arg1;
- (void)setFieldsIncludedAreCleared:(bool)arg1;
- (id)toolTip;

@end
