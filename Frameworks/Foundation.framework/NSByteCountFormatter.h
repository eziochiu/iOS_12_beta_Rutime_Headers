/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSByteCountFormatter : NSFormatter <NSObservable, NSObserver> {
    bool  _adaptive;
    unsigned int  _allowedUnits;
    bool  _allowsNonnumericFormatting;
    BOOL  _countStyle;
    int  _formattingContext;
    bool  _includesActualByteCount;
    bool  _includesCount;
    bool  _includesUnit;
    int  _reserved;
    bool  _zeroPadsFractionDigits;
}

@property (getter=isAdaptive) bool adaptive;
@property unsigned long long allowedUnits;
@property bool allowsNonnumericFormatting;
@property long long countStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long formattingContext;
@property (readonly) unsigned long long hash;
@property bool includesActualByteCount;
@property bool includesCount;
@property bool includesUnit;
@property (readonly) Class superclass;
@property bool zeroPadsFractionDigits;

+ (id)stringFromByteCount:(long long)arg1 countStyle:(long long)arg2;

- (bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (unsigned long long)_options;
- (unsigned long long)allowedUnits;
- (bool)allowsNonnumericFormatting;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countStyle;
- (void)encodeWithCoder:(id)arg1;
- (long long)formattingContext;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)includesActualByteCount;
- (bool)includesCount;
- (bool)includesUnit;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAdaptive;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (void)receiveObservedValue:(id)arg1;
- (void)setAdaptive:(bool)arg1;
- (void)setAllowedUnits:(unsigned long long)arg1;
- (void)setAllowsNonnumericFormatting:(bool)arg1;
- (void)setCountStyle:(long long)arg1;
- (void)setFormattingContext:(long long)arg1;
- (void)setIncludesActualByteCount:(bool)arg1;
- (void)setIncludesCount:(bool)arg1;
- (void)setIncludesUnit:(bool)arg1;
- (void)setZeroPadsFractionDigits:(bool)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromByteCount:(long long)arg1;
- (bool)zeroPadsFractionDigits;

@end
