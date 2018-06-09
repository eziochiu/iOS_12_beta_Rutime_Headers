/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAddressPickerReformatter : NSObject {
    NSArray * _addresses;
    bool  _attributesDisabled;
    double  _fontSize;
    double  _maximumFontSize;
    double  _maximumWidth;
    double  _minimumFontSize;
    NSArray * _reformattedAddresses;
}

- (void)_attemptUniquingDisplayedStrings;
- (bool)_attemptUniquingDisplayedStringsUsingBlock:(id /* block */)arg1;
- (unsigned long long)_defaultOptions;
- (void)_determineFontSize:(bool*)arg1;
- (void)_expandAllLocalParts;
- (void)_invalidateReformattedAddresses;
- (id)_reformattedAddressesByDisplayedStrings;
- (bool)_reformattedAddressesByDisplayedStringsAreUnique:(id)arg1;
- (void)_restoreMiddleTruncationRanges:(id)arg1;
- (id)_saveMiddleTruncationRanges;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainParts;
- (void)_truncateIdenticalLocalPartsWithDifferentDomainPartsWithTailLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)_updateReformattedAddressesIfNecessary;
- (void)dealloc;
- (unsigned long long)numberOfReformattedAddresses;
- (id)reformattedAddressAtIndex:(unsigned long long)arg1;
- (id)reformattedAddressStringAtIndex:(unsigned long long)arg1;
- (void)setAddresses:(id)arg1;
- (void)setAttributesDisabled:(bool)arg1;
- (void)setFontSize:(double)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setMinimumFontSize:(double)arg1 maximumFontSize:(double)arg2;

@end
