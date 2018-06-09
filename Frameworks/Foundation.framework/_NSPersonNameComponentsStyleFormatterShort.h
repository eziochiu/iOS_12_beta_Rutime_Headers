/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSPersonNameComponentsStyleFormatterShort : _NSPersonNameComponentsStyleFormatter {
    bool  _forceShortNameEnabled;
    long long  _shortNameFormat;
    _NSPersonNameComponentsStyleFormatter * _subFormatter;
    _NSPersonNameComponentsStyleFormatterShortVariantGeneral * _variantFormatter;
}

@property bool forceShortNameEnabled;
@property long long shortNameFormat;
@property (retain) _NSPersonNameComponentsStyleFormatter *subFormatter;
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral *variantFormatter;

- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;
- (id)abbreviatedKeys;
- (void)dealloc;
- (id)fallbackStyleFormatter;
- (bool)forceShortNameEnabled;
- (id)initWithMasterFormatter:(id)arg1;
- (bool)isEnabled;
- (id)keysOfInterest;
- (id)orderedKeysOfInterest;
- (void)setForceShortNameEnabled:(bool)arg1;
- (void)setShortNameFormat:(long long)arg1;
- (void)setSubFormatter:(id)arg1;
- (long long)shortNameFormat;
- (id)subFormatter;
- (id)variantFormatter;

@end
